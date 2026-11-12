#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray2_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointEdge.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BF2A0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Joint_TypeDefinitionIndex = 37621;

	class B2Joint : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType type; // 0x18
		::System::Int32 islandNext; // 0x1C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray2_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEdge> edges; // 0x20
		::System::Byte _padding0[0x10];
		::System::Boolean collideConnected; // 0x38
		::System::Boolean isMarked; // 0x39
		::System::UInt16 generation; // 0x3A
		::System::Int32 jointId; // 0x3C
		::System::Int32 islandPrev; // 0x40
		::System::Single drawScale; // 0x44
		::System::Int32 islandId; // 0x48
		::System::Int32 setIndex; // 0x4C
		::System::Int32 localIndex; // 0x50
		::System::Int32 colorIndex; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINT_CTOR_OFFSET))(this);
		}

	};
}
