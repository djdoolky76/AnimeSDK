#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFNKDCNPCNO;

#define CEDFBAJCGME_NANBCIDLFAK_FLJNIEPLEAA_OFFSET UNITYSDK_OFFSET(0x10E318F0)
#define CEDFBAJCGME_NANBCIDLFAK__CTOR_OFFSET UNITYSDK_OFFSET(0x10E318E0)

inline static constexpr unsigned int CEDFBAJCGME_NANBCIDLFAK_TypeDefinitionIndex = 75938;

class CEDFBAJCGME_NANBCIDLFAK : public ::System::Object
{
public:
	::System::Int32 OOEOHNBJMGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDFBAJCGME_NANBCIDLFAK__CTOR_OFFSET))(this);
	}

	::System::Boolean FLJNIEPLEAA(::FFNKDCNPCNO* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFNKDCNPCNO*))((::PBYTE)hIl2Cpp + CEDFBAJCGME_NANBCIDLFAK_FLJNIEPLEAA_OFFSET))(this, CBLGCIFLMKL);
	}
};
