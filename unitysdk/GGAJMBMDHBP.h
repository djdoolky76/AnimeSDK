#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
class FABMDCOFHCG;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define GGAJMBMDHBP_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x2E7B480)

	struct alignas(8) GGAJMBMDHBP
	{
		::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x10
		::FABMDCOFHCG* EKEFPDFCNOM; // 0x18
		::RPG::GameCore::TurnBasedModifierEvent JGFGGNNJCFC; // 0x20
		::System::UInt32 AONNBKBPCMF; // 0x24
		::System::Boolean LJBCDJNNBJH(::RPG::GameCore::TurnBasedModifierInstance* a1, ::FABMDCOFHCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::FABMDCOFHCG*))((::PBYTE)hIl2Cpp + GGAJMBMDHBP_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

	};
