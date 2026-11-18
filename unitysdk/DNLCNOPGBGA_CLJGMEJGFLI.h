#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ISoundActionTriggerCondition; }

#define DNLCNOPGBGA_CLJGMEJGFLI__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int DNLCNOPGBGA_CLJGMEJGFLI_TypeDefinitionIndex = 38980;

struct alignas(8) DNLCNOPGBGA_CLJGMEJGFLI
{
	::MoleMole::Config::ConfigSoundActionGeneral* GJBHEJGENMI; // 0x10
	::MoleMole::Config::ISoundActionTriggerCondition* KANJODNFFOI; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigSoundActionGeneral* GJBHEJGENMI, ::MoleMole::Config::ISoundActionTriggerCondition* KANJODNFFOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionGeneral*, ::MoleMole::Config::ISoundActionTriggerCondition*))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_CLJGMEJGFLI__CTOR_OFFSET))(this, GJBHEJGENMI, KANJODNFFOI);
	}
};
