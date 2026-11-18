#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GDNDDHBKJJB__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAE860)

inline static constexpr unsigned int GDNDDHBKJJB_TypeDefinitionIndex = 87054;

class GDNDDHBKJJB : public ::System::Object
{
public:
	::System::Int32 MNAIIBHLHMA; // 0x10
	::System::Boolean IFKINODJHAL; // 0x14
	::System::Boolean IOCGCMKJPHL; // 0x15
	::System::Boolean KFAENCNBGDL; // 0x16
	::System::Boolean GJBGMPIGKLC; // 0x17

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDDHBKJJB__CTOR_OFFSET))(this);
	}
};
