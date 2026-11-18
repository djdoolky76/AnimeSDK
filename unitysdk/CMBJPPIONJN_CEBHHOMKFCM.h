#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMBJPPIONJN_IAPFNHNLJIM;
namespace MoleMole::Battle { class Entity; }

#define CMBJPPIONJN_CEBHHOMKFCM_APGOGHPELFO_OFFSET UNITYSDK_OFFSET(0x147ADC50)
#define CMBJPPIONJN_CEBHHOMKFCM__CTOR_OFFSET UNITYSDK_OFFSET(0x147ADC40)

inline static constexpr unsigned int CMBJPPIONJN_CEBHHOMKFCM_TypeDefinitionIndex = 82276;

class CMBJPPIONJN_CEBHHOMKFCM : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* LKIMIIEKCAI; // 0x10
	::CMBJPPIONJN_IAPFNHNLJIM* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBJPPIONJN_CEBHHOMKFCM__CTOR_OFFSET))(this);
	}

	::System::Void APGOGHPELFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBJPPIONJN_CEBHHOMKFCM_APGOGHPELFO_OFFSET))(this);
	}
};
