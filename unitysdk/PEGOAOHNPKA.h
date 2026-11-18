#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAKHNGJJI.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

#define PEGOAOHNPKA_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0xFDA93B0)
#define PEGOAOHNPKA__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA93A0)

inline static constexpr unsigned int PEGOAOHNPKA_TypeDefinitionIndex = 64375;

class PEGOAOHNPKA : public ::HOAAKHNGJJI
{
public:
	::System::Void _ctor(::System::Boolean NNMFMPBGFFB, ::System::Boolean PDCNMFACCJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PEGOAOHNPKA__CTOR_OFFSET))(this, NNMFMPBGFFB, PDCNMFACCJG);
	}

	::MoleMole::UICameraAtom PKAFJHDJEDO(::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + PEGOAOHNPKA_PKAFJHDJEDO_OFFSET))(this, IMLLDOHDCNC, PBCAAADNEPK, AIGOOKNCCNH);
	}
};
