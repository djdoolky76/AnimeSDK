#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSpecialHint; }

#define KLKHJNODGKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1ABF7330)
#define KLKHJNODGKK_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1ABF7340)

inline static constexpr unsigned int KLKHJNODGKK_TypeDefinitionIndex = 37233;

	class KLKHJNODGKK : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + KLKHJNODGKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKHJNODGKK_MLKLPMJEHPF_OFFSET))(this);
		}

	};
