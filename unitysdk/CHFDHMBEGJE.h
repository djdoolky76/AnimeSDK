#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIEGMKBDMH.h"

namespace System { class String; }

#define CHFDHMBEGJE_ENLAIFEHKKL_OFFSET UNITYSDK_OFFSET(0x18DD0820)
#define CHFDHMBEGJE_OEMCEINAABP_OFFSET UNITYSDK_OFFSET(0x18DD0880)
#define CHFDHMBEGJE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD0810)

inline static constexpr unsigned int CHFDHMBEGJE_TypeDefinitionIndex = 72223;

class CHFDHMBEGJE : public ::HKIEGMKBDMH
{
public:
	// static const ::System::Single OJNCJNICMJH; // 0x0
	::System::String* NIECKJHOHFD; // 0x40
	::System::Int32 ACJCEDEJBAG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDHMBEGJE__CTOR_OFFSET))(this);
	}

	::System::Void ENLAIFEHKKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDHMBEGJE_ENLAIFEHKKL_OFFSET))(this);
	}

	::System::Void OEMCEINAABP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFDHMBEGJE_OEMCEINAABP_OFFSET))(this);
	}
};
