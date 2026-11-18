#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNAJKGMIIEK.h"
#include "unitysdk/KCILHGKFEIO.h"
#include "unitysdk/MoleMole/Arcade/CompanionProject/CpSkillEffectData.h"
#include "unitysdk/NMEBLNJMHGI.h"

#define LIODIJELAAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B5A70)

inline static constexpr unsigned int LIODIJELAAE_TypeDefinitionIndex = 94891;

class LIODIJELAAE : public ::MoleMole::Arcade::CompanionProject::CpSkillEffectData
{
public:
	::DNAJKGMIIEK FAJHPKBELMF; // 0x28
	::NMEBLNJMHGI LHMHHDEOFDP; // 0x30
	::KCILHGKFEIO JGPLFHAMFAE; // 0x38
	::System::Single NJCJNLIMBCA; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIODIJELAAE__CTOR_OFFSET))(this);
	}
};
