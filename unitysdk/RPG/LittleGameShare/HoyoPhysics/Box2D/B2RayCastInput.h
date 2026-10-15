#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RAYCASTINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x194B0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2RayCastInput
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 origin; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 translation; // 0x18
		::System::Single maxFraction; // 0x20
		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RAYCASTINPUT_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
}
