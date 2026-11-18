#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MBPEMPMEMGK.h"

namespace System { template <typename T> class Action_1; }

#define LKMLFIAKFOO_HMALBHAADPC_AADLOLOGGCD_OFFSET UNITYSDK_OFFSET(0x12D39160)
#define LKMLFIAKFOO_HMALBHAADPC__CTOR_OFFSET UNITYSDK_OFFSET(0x12D39150)

inline static constexpr unsigned int LKMLFIAKFOO_HMALBHAADPC_TypeDefinitionIndex = 43614;

class LKMLFIAKFOO_HMALBHAADPC : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* BCDJMGPDLKJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_HMALBHAADPC__CTOR_OFFSET))(this);
	}

	::System::Void AADLOLOGGCD(::MBPEMPMEMGK IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::MBPEMPMEMGK))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_HMALBHAADPC_AADLOLOGGCD_OFFSET))(this, IGAAKDOIPNN);
	}
};
