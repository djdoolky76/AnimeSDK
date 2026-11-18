#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JCEJNKKBLKI_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x97E090)

inline static constexpr unsigned int JCEJNKKBLKI_TypeDefinitionIndex = 95150;

struct alignas(4) JCEJNKKBLKI
{
	::System::UInt32 BKLGNCBNEGM; // 0x10
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel KPPPGIMEAKP; // 0x14
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel MJODFDBNJIP; // 0x18

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEJNKKBLKI_JGGHNLBNKHA_OFFSET))(this);
	}
};
