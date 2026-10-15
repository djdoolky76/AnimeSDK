#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatTaskConfig_AIEffectScore; }

#define BJAMAMAFAON_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BF700)
#define BJAMAMAFAON_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C5BF710)

	class BJAMAMAFAON : public ::AJBKGPOEBFG
	{
	public:
		::KAAMFILLIND* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + BJAMAMAFAON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJAMAMAFAON_MLKLPMJEHPF_OFFSET))(this);
		}

	};
