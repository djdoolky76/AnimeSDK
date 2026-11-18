#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFDDLEHKGIK.h"

namespace MoleMole { class UILoginPageController; }

#define LALIPMOMPML_BCHPBHPEGMC_OFFSET UNITYSDK_OFFSET(0x1517A7A0)
#define LALIPMOMPML_PEGINJNMFKI_OFFSET UNITYSDK_OFFSET(0x1517A8D0)
#define LALIPMOMPML__CTOR_OFFSET UNITYSDK_OFFSET(0x1517A720)

inline static constexpr unsigned int LALIPMOMPML_TypeDefinitionIndex = 47338;

class LALIPMOMPML : public ::LFDDLEHKGIK
{
public:
	::MoleMole::UILoginPageController* EIHCBDGKMNJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALIPMOMPML__CTOR_OFFSET))(this);
	}

	::System::Void BCHPBHPEGMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALIPMOMPML_BCHPBHPEGMC_OFFSET))(this);
	}

	::System::Void PEGINJNMFKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALIPMOMPML_PEGINJNMFKI_OFFSET))(this);
	}
};
