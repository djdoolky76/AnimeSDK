#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEdge.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray2_1.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C80C490)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	class B2Contact : public ::System::Object
	{
	public:
		::System::Int32 colorIndex; // 0x10
		::System::UInt32 flags; // 0x14
		::System::Int32 islandPrev; // 0x18
		::System::Int32 shapeIdB; // 0x1C
		::System::Int32 localIndex; // 0x20
		::System::Boolean isMarked; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 islandId; // 0x28
		::System::Int32 shapeIdA; // 0x2C
		::System::Int32 islandNext; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray2_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEdge> edges; // 0x34
		::System::Byte _padding1[0x10];
		::System::Int32 contactId; // 0x4C
		::System::Int32 setIndex; // 0x50
		::System::UInt32 generation; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACT_CTOR_OFFSET))(this);
		}

	};
}
