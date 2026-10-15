#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTID_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2BFD0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2JointId
	{
		::System::Int32 index1; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world0; // 0x18
		::System::UInt16 generation; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::System::UInt16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTID_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
}
