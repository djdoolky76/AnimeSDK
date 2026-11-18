#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BLBJCBJDCGP_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x910590)

inline static constexpr unsigned int BLBJCBJDCGP_TypeDefinitionIndex = 93454;

struct alignas(4) BLBJCBJDCGP
{
	::System::UInt32 BKLGNCBNEGM; // 0x10
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel KPPPGIMEAKP; // 0x14
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel MJODFDBNJIP; // 0x18

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBJCBJDCGP_JGGHNLBNKHA_OFFSET))(this);
	}
};
