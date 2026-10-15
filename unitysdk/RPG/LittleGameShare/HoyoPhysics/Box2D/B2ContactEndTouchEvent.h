#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTENDTOUCHEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2C1B0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2ContactEndTouchEvent
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId shapeIdA; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId shapeIdB; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId contactId; // 0x40
		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTENDTOUCHEVENT_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
}
