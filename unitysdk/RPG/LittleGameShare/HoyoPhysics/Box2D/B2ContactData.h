#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Manifold.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2C270)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2ContactData
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId contactId; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId shapeIdA; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId shapeIdB; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold manifold; // 0x58
		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTDATA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
