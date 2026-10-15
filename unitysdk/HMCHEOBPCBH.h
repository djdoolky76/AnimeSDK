#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityDestroyWaitReason.h"
namespace RPG::GameCore { class GameEntity; }

#define HMCHEOBPCBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E7EFC0)

	struct alignas(8) HMCHEOBPCBH
	{
		::RPG::GameCore::GameEntity* DKIHKFBHADB; // 0x10
		::RPG::GameCore::EntityDestroyWaitReason KDHPKOFLNFM; // 0x18
		/*
		::System::Boolean Equals(::HMCHEOBPCBH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMCHEOBPCBH))((::PBYTE)hIl2Cpp + HMCHEOBPCBH_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
