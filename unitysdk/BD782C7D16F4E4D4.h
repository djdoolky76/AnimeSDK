#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class B345952B9DFC1821;

#define BD782C7D16F4E4D4__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BD782C7D16F4E4D4_TypeDefinitionIndex = 8763;

class BD782C7D16F4E4D4 : public ::E379DE61A548837D
{
public:
	::System::UInt32 B240C78BB6BC8182; // 0x38
	::System::UInt32 B289D9A1F114D305; // 0x3C
	::B345952B9DFC1821* B632A08783FA153C; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD782C7D16F4E4D4__CTOR_OFFSET))(this);
	}
};
