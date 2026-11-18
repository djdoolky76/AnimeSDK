#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowInteractCondition; }

#define PDFPKGIKEEJ_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x160042A0)
#define PDFPKGIKEEJ_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x160042B0)
#define PDFPKGIKEEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16004290)

inline static constexpr unsigned int PDFPKGIKEEJ_TypeDefinitionIndex = 53075;

class PDFPKGIKEEJ : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHollowInteractCondition* _DGGBKMAKAJI_k__BackingField; // 0x10

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + PDFPKGIKEEJ__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigHollowInteractCondition* GACPDCEMJOA()
	{
		return ((::MoleMole::Config::ConfigHollowInteractCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFPKGIKEEJ_GACPDCEMJOA_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::Config::ConfigHollowInteractCondition* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + PDFPKGIKEEJ_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}
};
