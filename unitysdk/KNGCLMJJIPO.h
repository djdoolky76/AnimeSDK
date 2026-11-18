#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPEGPGHAJI.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"

#define KNGCLMJJIPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A1CA0)

inline static constexpr unsigned int KNGCLMJJIPO_TypeDefinitionIndex = 93373;

class KNGCLMJJIPO : public ::BIPEGPGHAJI
{
public:
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel KPPPGIMEAKP; // 0x20
	::System::UInt32 BKLGNCBNEGM; // 0x24
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel MJODFDBNJIP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGCLMJJIPO__CTOR_OFFSET))(this);
	}
};
