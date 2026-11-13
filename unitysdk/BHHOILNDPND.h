#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount; }

#define BHHOILNDPND_CTOR_OFFSET UNITYSDK_OFFSET(0x1702CEE0)
#define BHHOILNDPND_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1702CEF0)

inline static constexpr unsigned int BHHOILNDPND_TypeDefinitionIndex = 37246;

	class BHHOILNDPND : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + BHHOILNDPND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHOILNDPND_MLKLPMJEHPF_OFFSET))(this);
		}

	};
