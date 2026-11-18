#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BPNGLLLIMDC_BKBEPGPOLHL_POBHFNNNGPP_OFFSET UNITYSDK_OFFSET(0x128C06A0)
#define BPNGLLLIMDC_BKBEPGPOLHL__CTOR_OFFSET UNITYSDK_OFFSET(0x128C0690)

inline static constexpr unsigned int BPNGLLLIMDC_BKBEPGPOLHL_TypeDefinitionIndex = 56035;

class BPNGLLLIMDC_BKBEPGPOLHL : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_BKBEPGPOLHL__CTOR_OFFSET))(this);
	}

	::System::Void POBHFNNNGPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_BKBEPGPOLHL_POBHFNNNGPP_OFFSET))(this);
	}
};
