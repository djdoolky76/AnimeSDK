#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_ClearCustomValue; }

#define OKCCPMICJJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D0010)
#define OKCCPMICJJC_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C7D0020)

	class OKCCPMICJJC : public ::AJBKGPOEBFG
	{
	public:
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + OKCCPMICJJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCPMICJJC_MLKLPMJEHPF_OFFSET))(this);
		}

	};
