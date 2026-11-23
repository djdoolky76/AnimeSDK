#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class B2574D9C32D3C4A7;

#define F1A01AACB0721775__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F1A01AACB0721775_TypeDefinitionIndex = 260;

class F1A01AACB0721775 : public ::E379DE61A548837D
{
public:
	::System::UInt32 E60206D72C4CF0C1; // 0x38
	::System::Byte _padding0[0x4];
	::B2574D9C32D3C4A7* EE876AFEBB4E1437; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1A01AACB0721775__CTOR_OFFSET))(this);
	}
};
