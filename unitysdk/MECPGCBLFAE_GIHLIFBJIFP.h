#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKJKMDGGGDP.h"
#include "unitysdk/System/Object.h"

class MECPGCBLFAE;

#define MECPGCBLFAE_GIHLIFBJIFP_EHFJJBLFJKG_OFFSET UNITYSDK_OFFSET(0x15E22DE0)
#define MECPGCBLFAE_GIHLIFBJIFP__CTOR_OFFSET UNITYSDK_OFFSET(0x15E22DD0)

inline static constexpr unsigned int MECPGCBLFAE_GIHLIFBJIFP_TypeDefinitionIndex = 79172;

class MECPGCBLFAE_GIHLIFBJIFP : public ::System::Object
{
public:
	::MECPGCBLFAE* KLHPEBKNIFB; // 0x10
	::System::Boolean FPKGHKLJEIL; // 0x18
	::System::Byte _padding0[0x3];
	::IKJKMDGGGDP FKMHMOELCIO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_GIHLIFBJIFP__CTOR_OFFSET))(this);
	}

	::System::Void EHFJJBLFJKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_GIHLIFBJIFP_EHFJJBLFJKG_OFFSET))(this);
	}
};
