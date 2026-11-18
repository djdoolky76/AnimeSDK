#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PMLCKJBHLLB;

#define HHFLGNFCEAN_AGKIIAKIIHP_OFFSET UNITYSDK_OFFSET(0x1E2EBB50)
#define HHFLGNFCEAN_KEHIHFJBCAI_OFFSET UNITYSDK_OFFSET(0x1E2EB960)
#define HHFLGNFCEAN_OJOKLHLIDEC_OFFSET UNITYSDK_OFFSET(0x1E2EBB00)
#define HHFLGNFCEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EB8E0)

inline static constexpr unsigned int HHFLGNFCEAN_TypeDefinitionIndex = 93857;

class HHFLGNFCEAN : public ::System::Object
{
public:
	::PMLCKJBHLLB* MABBJOCLPBG; // 0x10

	::System::Void _ctor(::PMLCKJBHLLB* NLPFGNOPHNB)
	{
		return ((::System::Void(*)(::PVOID, ::PMLCKJBHLLB*))((::PBYTE)hIl2Cpp + HHFLGNFCEAN__CTOR_OFFSET))(this, NLPFGNOPHNB);
	}

	::System::Void KEHIHFJBCAI(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHFLGNFCEAN_KEHIHFJBCAI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Boolean OJOKLHLIDEC(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHFLGNFCEAN_OJOKLHLIDEC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void AGKIIAKIIHP(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHFLGNFCEAN_AGKIIAKIIHP_OFFSET))(this, BKLGNCBNEGM);
	}
};
