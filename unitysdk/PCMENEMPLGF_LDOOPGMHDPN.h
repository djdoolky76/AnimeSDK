#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_LDOOPGMHDPN_HKDJMOKBCKA_OFFSET UNITYSDK_OFFSET(0x11955F10)
#define PCMENEMPLGF_LDOOPGMHDPN__CTOR_OFFSET UNITYSDK_OFFSET(0x11955F00)

inline static constexpr unsigned int PCMENEMPLGF_LDOOPGMHDPN_TypeDefinitionIndex = 62845;

class PCMENEMPLGF_LDOOPGMHDPN : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Int32 IPBFNIPPMBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_LDOOPGMHDPN__CTOR_OFFSET))(this);
	}

	::System::Void HKDJMOKBCKA(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCMENEMPLGF_LDOOPGMHDPN_HKDJMOKBCKA_OFFSET))(this, PIIPCLCCOIG);
	}
};
