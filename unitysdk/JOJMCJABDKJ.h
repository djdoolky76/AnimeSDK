#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define JOJMCJABDKJ_KOAFMMCGEKF_OFFSET UNITYSDK_OFFSET(0x130A0170)
#define JOJMCJABDKJ_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x130A00B0)
#define JOJMCJABDKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x130A0160)

inline static constexpr unsigned int JOJMCJABDKJ_TypeDefinitionIndex = 71143;

class JOJMCJABDKJ : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* DPNLLKMJMMB; // 0x88
	::LJHFMILANJA_1<::System::String*>* JNIAEBKPLBP; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJMCJABDKJ__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJMCJABDKJ_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void KOAFMMCGEKF(::System::Int32 FAEGNLBDHJE, ::System::Boolean CEICCCCPBGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JOJMCJABDKJ_KOAFMMCGEKF_OFFSET))(this, FAEGNLBDHJE, CEICCCCPBGA);
	}
};
