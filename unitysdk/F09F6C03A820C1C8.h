#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD41610DAE684581.h"
#include "unitysdk/System/Object.h"

#define F09F6C03A820C1C8_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x1DAFCC0)
#define F09F6C03A820C1C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFD60)

inline static constexpr unsigned int F09F6C03A820C1C8_TypeDefinitionIndex = 10181;

class F09F6C03A820C1C8 : public ::System::Object
{
public:
	::System::Boolean A7EC2241502B8F4E; // 0x10
	::System::Byte _padding0[0x7];
	::AD41610DAE684581 FFF299FAC6915F64; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F09F6C03A820C1C8__CTOR_OFFSET))(this);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F09F6C03A820C1C8_F0D2AFBD3CAE7F65_OFFSET))(this);
	}
};
