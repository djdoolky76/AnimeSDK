#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDDMBHGDPPD;
class PNJDGHBEMLK;

#define GDDMBHGDPPD_BDGKPBAIOFN_NADENMHCPPC_OFFSET UNITYSDK_OFFSET(0x132499F0)
#define GDDMBHGDPPD_BDGKPBAIOFN__CTOR_OFFSET UNITYSDK_OFFSET(0x132499E0)

inline static constexpr unsigned int GDDMBHGDPPD_BDGKPBAIOFN_TypeDefinitionIndex = 79318;

class GDDMBHGDPPD_BDGKPBAIOFN : public ::System::Object
{
public:
	::PNJDGHBEMLK* IIEEBKBDMDD; // 0x10
	::GDDMBHGDPPD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMBHGDPPD_BDGKPBAIOFN__CTOR_OFFSET))(this);
	}

	::System::Void NADENMHCPPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMBHGDPPD_BDGKPBAIOFN_NADENMHCPPC_OFFSET))(this);
	}
};
