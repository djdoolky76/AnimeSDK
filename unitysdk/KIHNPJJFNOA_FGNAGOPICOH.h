#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }

#define KIHNPJJFNOA_FGNAGOPICOH_COMPARETO_OFFSET UNITYSDK_OFFSET(0x14C00)

	struct alignas(8) KIHNPJJFNOA_FGNAGOPICOH
	{
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x18
		::System::Int32 EBHFGJNFDOF; // 0x20
		/*
		::System::Int32 CompareTo(::KIHNPJJFNOA_FGNAGOPICOH a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KIHNPJJFNOA_FGNAGOPICOH))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_FGNAGOPICOH_COMPARETO_OFFSET))(this, a1);
		}
		*/

	};
