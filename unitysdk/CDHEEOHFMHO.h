#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NBDEOHKBODI;
class PMLCKJBHLLB;

#define CDHEEOHFMHO_AGKIIAKIIHP_OFFSET UNITYSDK_OFFSET(0x1E22CC80)
#define CDHEEOHFMHO_FHIGIPGPDDI_OFFSET UNITYSDK_OFFSET(0x1E22C8E0)
#define CDHEEOHFMHO_KEHIHFJBCAI_OFFSET UNITYSDK_OFFSET(0x1E22C720)
#define CDHEEOHFMHO_OJOKLHLIDEC_OFFSET UNITYSDK_OFFSET(0x1E22CAE0)
#define CDHEEOHFMHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22C6A0)

inline static constexpr unsigned int CDHEEOHFMHO_TypeDefinitionIndex = 93443;

class CDHEEOHFMHO : public ::System::Object
{
public:
	::PMLCKJBHLLB* MABBJOCLPBG; // 0x10

	::System::Void _ctor(::PMLCKJBHLLB* NLPFGNOPHNB)
	{
		return ((::System::Void(*)(::PVOID, ::PMLCKJBHLLB*))((::PBYTE)hIl2Cpp + CDHEEOHFMHO__CTOR_OFFSET))(this, NLPFGNOPHNB);
	}

	::System::Void KEHIHFJBCAI(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDHEEOHFMHO_KEHIHFJBCAI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Boolean OJOKLHLIDEC(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDHEEOHFMHO_OJOKLHLIDEC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void AGKIIAKIIHP(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDHEEOHFMHO_AGKIIAKIIHP_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void FHIGIPGPDDI(::NBDEOHKBODI* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::NBDEOHKBODI*))((::PBYTE)hIl2Cpp + CDHEEOHFMHO_FHIGIPGPDDI_OFFSET))(this, KECKGDFIALJ);
	}
};
