#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFAFOOJJLOJ;
class JCEIEPAGLCB;

#define JCEIEPAGLCB_MIMMGPCHJNB_APGIFPGOALO_OFFSET UNITYSDK_OFFSET(0x1306BB90)
#define JCEIEPAGLCB_MIMMGPCHJNB__CTOR_OFFSET UNITYSDK_OFFSET(0x1306BB80)

inline static constexpr unsigned int JCEIEPAGLCB_MIMMGPCHJNB_TypeDefinitionIndex = 76664;

class JCEIEPAGLCB_MIMMGPCHJNB : public ::System::Object
{
public:
	::JCEIEPAGLCB* KLHPEBKNIFB; // 0x10
	::AFAFOOJJLOJ* DBLBCFBIPNH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEIEPAGLCB_MIMMGPCHJNB__CTOR_OFFSET))(this);
	}

	::System::Void APGIFPGOALO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEIEPAGLCB_MIMMGPCHJNB_APGIFPGOALO_OFFSET))(this);
	}
};
