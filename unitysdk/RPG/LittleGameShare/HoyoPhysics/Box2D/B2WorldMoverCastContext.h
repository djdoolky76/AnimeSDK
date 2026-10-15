#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2QueryFilter.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDMOVERCASTCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2DA20)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2WorldMoverCastContext
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter filter; // 0x18
		::System::Single fraction; // 0x28
		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDMOVERCASTCONTEXT_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
}
