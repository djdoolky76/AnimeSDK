#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyMoveEvent.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYEVENTS_CTOR_OFFSET UNITYSDK_OFFSET(0x14160)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2BodyEvents
	{
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyMoveEvent>* moveEvents; // 0x10
		::System::Int32 moveCount; // 0x18
		::System::Void _ctor(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyMoveEvent>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyMoveEvent>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYEVENTS_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
