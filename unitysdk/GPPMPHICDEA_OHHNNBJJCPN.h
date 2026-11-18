#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GPPMPHICDEA_OHHNNBJJCPN_BEFCLKFPPOO_OFFSET UNITYSDK_OFFSET(0x149F6FF0)
#define GPPMPHICDEA_OHHNNBJJCPN__CTOR_OFFSET UNITYSDK_OFFSET(0x149F6FE0)

inline static constexpr unsigned int GPPMPHICDEA_OHHNNBJJCPN_TypeDefinitionIndex = 42648;

class GPPMPHICDEA_OHHNNBJJCPN : public ::System::Object
{
public:
	::System::Action* EICIIBADHLD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_OHHNNBJJCPN__CTOR_OFFSET))(this);
	}

	::System::Void BEFCLKFPPOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_OHHNNBJJCPN_BEFCLKFPPOO_OFFSET))(this);
	}
};
