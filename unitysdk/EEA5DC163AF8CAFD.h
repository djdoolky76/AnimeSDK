#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD41610DAE684581.h"
#include "unitysdk/System/Object.h"

#define EEA5DC163AF8CAFD_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x26A03D0)
#define EEA5DC163AF8CAFD__CTOR_OFFSET UNITYSDK_OFFSET(0x26A0490)

inline static constexpr unsigned int EEA5DC163AF8CAFD_TypeDefinitionIndex = 6511;

class EEA5DC163AF8CAFD : public ::System::Object
{
public:
	::System::Boolean F0D651DCECE6C650; // 0x10
	::System::Byte _padding0[0x7];
	::AD41610DAE684581 EE8B505B9D2B1840; // 0x18
	::System::Boolean AA86EDB44C7BBB5F; // 0x30
	::System::Byte _padding1[0x7];
	::AD41610DAE684581 A0FE9BD88AEBF8D9; // 0x38

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEA5DC163AF8CAFD_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEA5DC163AF8CAFD__CTOR_OFFSET))(this);
	}
};
