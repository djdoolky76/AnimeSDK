#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define EDDC17ABDFC3CE1D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EDDC17ABDFC3CE1D_TypeDefinitionIndex = 937;

class EDDC17ABDFC3CE1D : public ::E379DE61A548837D
{
public:
	::System::Boolean E580C97C13617576; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single B8830CE3A0499642; // 0x3C
	::System::Single E962FD5DF53BAF20; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDC17ABDFC3CE1D__CTOR_OFFSET))(this);
	}
};
