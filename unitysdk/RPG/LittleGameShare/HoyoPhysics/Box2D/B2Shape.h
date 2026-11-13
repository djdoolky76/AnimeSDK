#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC8EC6C0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Shape_TypeDefinitionIndex = 37689;

	class B2Shape : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::System::Single density; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCentroid; // 0x1C
		::System::Int32 prevShapeId; // 0x24
		::System::Single rollingResistance; // 0x28
		::System::Boolean enableContactEvents; // 0x2C
		::System::Boolean enlargedAABB; // 0x2D
		::System::UInt16 generation; // 0x2E
		::System::Int32 sensorIndex; // 0x30
		::System::Single tangentSpeed; // 0x34
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB aabb; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter filter; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeUnion us; // 0x60
		::System::Int32 nextShapeId; // 0xF0
		::System::Single restitution; // 0xF4
		::System::Single friction; // 0xF8
		::System::UInt32 customColor; // 0xFC
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType type; // 0x100
		::System::Boolean enableHitEvents; // 0x104
		::System::Boolean enablePreSolveEvents; // 0x105
		::System::Boolean enableSensorEvents; // 0x106
		::System::Byte _padding0[0x1];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB fatAABB; // 0x108
		::System::Int32 bodyId; // 0x118
		::System::Int32 userMaterialId; // 0x11C
		::System::Int32 id; // 0x120
		::System::Int32 proxyKey; // 0x124
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE_CTOR_OFFSET))(this);
		}

	};
}
