#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define MJANNBAOKPN__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF1330)

inline static constexpr unsigned int MJANNBAOKPN_TypeDefinitionIndex = 80170;

class MJANNBAOKPN : public ::System::EventArgs
{
public:
	::System::Int32 DPNKEHDFBPF; // 0x10
	::System::Int32 OBFKLMNDCNH; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJANNBAOKPN__CTOR_OFFSET))(this);
	}
};
