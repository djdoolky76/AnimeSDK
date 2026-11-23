#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define ADFE45FEB7CC2C0C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ADFE45FEB7CC2C0C_TypeDefinitionIndex = 8502;

class ADFE45FEB7CC2C0C : public ::E379DE61A548837D
{
public:
	::System::UInt32 FAFABB2236CB14AD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFE45FEB7CC2C0C__CTOR_OFFSET))(this);
	}
};
