#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LECOKMMCHKC_HLHPCPLGFJP_OFFSET UNITYSDK_OFFSET(0x15BD5290)
#define LECOKMMCHKC__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD5280)

inline static constexpr unsigned int LECOKMMCHKC_TypeDefinitionIndex = 63007;

class LECOKMMCHKC : public ::System::Object
{
public:
	::System::Int32 AMFMABMGNBE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECOKMMCHKC__CTOR_OFFSET))(this);
	}

	::System::Void HLHPCPLGFJP(::System::Boolean OCKGCBHGGDP, ::System::String* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + LECOKMMCHKC_HLHPCPLGFJP_OFFSET))(this, OCKGCBHGGDP, BHDNBGLCNOM);
	}
};
