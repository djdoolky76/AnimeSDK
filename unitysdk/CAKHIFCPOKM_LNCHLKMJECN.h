#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
namespace System { class Action; }

#define CAKHIFCPOKM_LNCHLKMJECN_AEPGJPEIPKG_OFFSET UNITYSDK_OFFSET(0x14C720D0)
#define CAKHIFCPOKM_LNCHLKMJECN__CTOR_OFFSET UNITYSDK_OFFSET(0x14C720C0)

inline static constexpr unsigned int CAKHIFCPOKM_LNCHLKMJECN_TypeDefinitionIndex = 79965;

class CAKHIFCPOKM_LNCHLKMJECN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::AFMMAIKKACF* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_LNCHLKMJECN__CTOR_OFFSET))(this);
	}

	::System::Void AEPGJPEIPKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_LNCHLKMJECN_AEPGJPEIPKG_OFFSET))(this);
	}
};
