#pragma once
#include "Enemy.hpp"

class DyEnemy : public Enemy {
    private: 
        float angle = 135;
        float aimAngle = 225;
        bool loop = false;
        bool useAlternateTexture; // para usar la segunda textura de DyEnemy

    public:
        DyEnemy(float x, float y) : Enemy(x, y) { 
            this->cooldown = GetRandomValue(90, 300);
            this->health = 1; 
            this->enemyScoreValue = 30; 
            useAlternateTexture = GetRandomValue(0, 1); // Para seleccionar de forma aleatoria una textura
        }

        void draw() override;
        void update(std::pair<float, float> pos, HitBox target) override;
        void attack(HitBox target) override;
};