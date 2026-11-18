#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKNBDGOGOLG;

#define DMIGDMNDFNA_AAGNIEIJFPJ_AKIDMCKKJEB_OFFSET UNITYSDK_OFFSET(0x124260E0)
#define DMIGDMNDFNA_AAGNIEIJFPJ_CGMIKJHHFCP_OFFSET UNITYSDK_OFFSET(0x124260D0)
#define DMIGDMNDFNA_AAGNIEIJFPJ_OGMBPGBPCFE_OFFSET UNITYSDK_OFFSET(0x12426070)
#define DMIGDMNDFNA_AAGNIEIJFPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x124260C0)

inline static constexpr unsigned int DMIGDMNDFNA_AAGNIEIJFPJ_TypeDefinitionIndex = 61923;

class DMIGDMNDFNA_AAGNIEIJFPJ : public ::System::Object
{
public:
	::System::UInt32 _MDJEKBGDIPD_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGDMNDFNA_AAGNIEIJFPJ__CTOR_OFFSET))(this);
	}

	::System::Void OGMBPGBPCFE(::IKNBDGOGOLG* MFBBGJDFOON)
	{
		return ((::System::Void(*)(::PVOID, ::IKNBDGOGOLG*))((::PBYTE)hIl2Cpp + DMIGDMNDFNA_AAGNIEIJFPJ_OGMBPGBPCFE_OFFSET))(this, MFBBGJDFOON);
	}

	::System::Void CGMIKJHHFCP(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMIGDMNDFNA_AAGNIEIJFPJ_CGMIKJHHFCP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 AKIDMCKKJEB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGDMNDFNA_AAGNIEIJFPJ_AKIDMCKKJEB_OFFSET))(this);
	}
};
