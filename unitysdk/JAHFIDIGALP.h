#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define JAHFIDIGALP_BODCNAHGPJB_OFFSET UNITYSDK_OFFSET(0x15C30BC0)
#define JAHFIDIGALP__CTOR_OFFSET UNITYSDK_OFFSET(0x15C30BB0)

inline static constexpr unsigned int JAHFIDIGALP_TypeDefinitionIndex = 66362;

class JAHFIDIGALP : public ::System::Object
{
public:
	::System::String* DNCDEJFBEMB; // 0x10
	::System::Boolean HJIAJMFMOOO; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single EMJNBHGOFPG; // 0x1C
	::System::Single LNKFMCLGAIF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHFIDIGALP__CTOR_OFFSET))(this);
	}

	::System::Void BODCNAHGPJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHFIDIGALP_BODCNAHGPJB_OFFSET))(this);
	}
};
