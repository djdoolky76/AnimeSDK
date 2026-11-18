#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPJFKBNPNDI.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CCGJEIEADGH__CTOR_OFFSET UNITYSDK_OFFSET(0x10E312C0)

inline static constexpr unsigned int CCGJEIEADGH_TypeDefinitionIndex = 81462;

class CCGJEIEADGH : public ::System::Object
{
public:
	::System::String* OAHDKFBFBJF; // 0x10
	::System::String* AHMIMEDOAAJ; // 0x18
	::System::Int32 LLGGJCMACHG; // 0x20
	::System::Boolean PNMGJBLMALJ; // 0x24
	::System::Byte _padding0[0x3];
	::MPJFKBNPNDI FJKLGAOGHGP; // 0x28
	::System::Int32 PAHKMAKGFJD; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJEIEADGH__CTOR_OFFSET))(this);
	}
};
