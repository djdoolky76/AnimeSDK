#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_RemoveModifier; }

#define JHCBFNAOLJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F4FB0)
#define JHCBFNAOLJG_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6F4FC0)

	class JHCBFNAOLJG : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + JHCBFNAOLJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCBFNAOLJG_MLKLPMJEHPF_OFFSET))(this);
		}

	};
