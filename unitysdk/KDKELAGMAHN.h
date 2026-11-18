#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FCBAKPMKCHN_BMIIDOMKGJO.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_VoTipInfo.h"

#define KDKELAGMAHN_ONODJFKBOAD_OFFSET UNITYSDK_OFFSET(0x15B84F00)

inline static constexpr unsigned int KDKELAGMAHN_TypeDefinitionIndex = 68950;

class KDKELAGMAHN : public ::System::Object
{
public:
	static ::FCBAKPMKCHN_BMIIDOMKGJO ONODJFKBOAD(::MoleMole::VOPerformSubSystem_VoTipInfo BIPFMLGLFCK)
	{
		return ((::FCBAKPMKCHN_BMIIDOMKGJO(*)(::MoleMole::VOPerformSubSystem_VoTipInfo))((::PBYTE)hIl2Cpp + KDKELAGMAHN_ONODJFKBOAD_OFFSET))(BIPFMLGLFCK);
	}
};
