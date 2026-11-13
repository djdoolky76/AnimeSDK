#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }

#define HMGKNAKEHKO_DCCEKIHMJCK_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3E5B6E0)

inline static constexpr unsigned int HMGKNAKEHKO_DCCEKIHMJCK_TypeDefinitionIndex = 55102;

	struct alignas(8) HMGKNAKEHKO_DCCEKIHMJCK
	{
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::System::Single MNDFOPKBHKP; // 0x18
		/*
		::System::Int32 CompareTo(::HMGKNAKEHKO_DCCEKIHMJCK a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HMGKNAKEHKO_DCCEKIHMJCK))((::PBYTE)hIl2Cpp + HMGKNAKEHKO_DCCEKIHMJCK_COMPARETO_OFFSET))(this, a1);
		}
		*/

	};
