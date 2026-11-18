#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LAAEBHNLHEM;

#define NICLFOGGOBF_EHGDDEGEEOH_PEAMFBHMLKM_OFFSET UNITYSDK_OFFSET(0xE19EA80)
#define NICLFOGGOBF_EHGDDEGEEOH__CTOR_OFFSET UNITYSDK_OFFSET(0xE19EA70)

inline static constexpr unsigned int NICLFOGGOBF_EHGDDEGEEOH_TypeDefinitionIndex = 67910;

class NICLFOGGOBF_EHGDDEGEEOH : public ::System::Object
{
public:
	::System::Int32 BEKAGNFAFGI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICLFOGGOBF_EHGDDEGEEOH__CTOR_OFFSET))(this);
	}

	::System::Boolean PEAMFBHMLKM(::LAAEBHNLHEM* IBDADOPEBFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::LAAEBHNLHEM*))((::PBYTE)hIl2Cpp + NICLFOGGOBF_EHGDDEGEEOH_PEAMFBHMLKM_OFFSET))(this, IBDADOPEBFC);
	}
};
