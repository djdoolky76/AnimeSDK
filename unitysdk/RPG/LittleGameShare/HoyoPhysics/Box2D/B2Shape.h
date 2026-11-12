#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D2A20)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Shape_TypeDefinitionIndex = 37689;

	class B2Shape : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::System::Int32 prevShapeId; // 0x18
		::System::UInt32 customColor; // 0x1C
		::System::Boolean enablePreSolveEvents; // 0x20
		::System::Boolean enableSensorEvents; // 0x21
		::System::Boolean enableHitEvents; // 0x22
		::System::Byte _padding0[0x1];
		::System::Int32 sensorIndex; // 0x24
		::System::Single restitution; // 0x28
		::System::Single density; // 0x2C
		::System::Single tangentSpeed; // 0x30
		::System::Int32 userMaterialId; // 0x34
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCentroid; // 0x38
		::System::Int32 proxyKey; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB fatAABB; // 0x44
		::System::Int32 nextShapeId; // 0x54
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType type; // 0x58
		::System::Int32 id; // 0x5C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter filter; // 0x60
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeUnion us; // 0x78
		::System::Boolean enlargedAABB; // 0x108
		::System::Boolean enableContactEvents; // 0x109
		::System::UInt16 generation; // 0x10A
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB aabb; // 0x10C
		::System::Int32 bodyId; // 0x11C
		::System::Single friction; // 0x120
		::System::Single rollingResistance; // 0x124
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE_CTOR_OFFSET))(this);
		}

	};
}
