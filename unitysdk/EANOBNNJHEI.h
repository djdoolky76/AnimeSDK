#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PMLCKJBHLLB;

#define EANOBNNJHEI_AGKIIAKIIHP_OFFSET UNITYSDK_OFFSET(0x1D698410)
#define EANOBNNJHEI_KEHIHFJBCAI_OFFSET UNITYSDK_OFFSET(0x1D698200)
#define EANOBNNJHEI_OJOKLHLIDEC_OFFSET UNITYSDK_OFFSET(0x1D6983C0)
#define EANOBNNJHEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D698180)

inline static constexpr unsigned int EANOBNNJHEI_TypeDefinitionIndex = 94057;

class EANOBNNJHEI : public ::System::Object
{
public:
	::PMLCKJBHLLB* MABBJOCLPBG; // 0x10

	::System::Void _ctor(::PMLCKJBHLLB* NLPFGNOPHNB)
	{
		return ((::System::Void(*)(::PVOID, ::PMLCKJBHLLB*))((::PBYTE)hIl2Cpp + EANOBNNJHEI__CTOR_OFFSET))(this, NLPFGNOPHNB);
	}

	::System::Void KEHIHFJBCAI(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EANOBNNJHEI_KEHIHFJBCAI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Boolean OJOKLHLIDEC(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EANOBNNJHEI_OJOKLHLIDEC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void AGKIIAKIIHP(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EANOBNNJHEI_AGKIIAKIIHP_OFFSET))(this, BKLGNCBNEGM);
	}
};
