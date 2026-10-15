#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifierBehaviorVisual; }

#define OOPPBPJHHJK_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x25D00)
#define OOPPBPJHHJK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x25CF0)
#define OOPPBPJHHJK_MDOKMJDKIMF_OFFSET UNITYSDK_OFFSET(0x25D50)

	struct alignas(4) OOPPBPJHHJK
	{
		::System::Single PIDMDPCMHKE; // 0x10
		::System::Single MHHIPFFPKBP; // 0x14
		::System::Int32 CEFFDPAOGAA; // 0x18
		::System::Single NJEPANHBDNB; // 0x1C
		::System::Single JLANKNHFKCN(::System::Single a1, ::RPG::GameCore::ModifierBehaviorVisual* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + OOPPBPJHHJK_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPPBPJHHJK_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void MDOKMJDKIMF(::RPG::GameCore::ModifierBehaviorVisual* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + OOPPBPJHHJK_MDOKMJDKIMF_OFFSET))(this, a1);
		}

	};
