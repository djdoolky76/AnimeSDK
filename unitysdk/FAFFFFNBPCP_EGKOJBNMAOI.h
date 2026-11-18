#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FICPDKBMDCK;

#define FAFFFFNBPCP_EGKOJBNMAOI_FNOLDNAJMGO_OFFSET UNITYSDK_OFFSET(0x11AAE6C0)
#define FAFFFFNBPCP_EGKOJBNMAOI__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAE6B0)

inline static constexpr unsigned int FAFFFFNBPCP_EGKOJBNMAOI_TypeDefinitionIndex = 86596;

class FAFFFFNBPCP_EGKOJBNMAOI : public ::System::Object
{
public:
	::FICPDKBMDCK* KOIBHLHLMFC; // 0x10
	::System::Int32 LJMPPBEMEPP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFFFNBPCP_EGKOJBNMAOI__CTOR_OFFSET))(this);
	}

	::System::Void FNOLDNAJMGO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFFFNBPCP_EGKOJBNMAOI_FNOLDNAJMGO_OFFSET))(this);
	}
};
