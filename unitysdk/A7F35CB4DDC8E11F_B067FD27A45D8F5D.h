#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FD13E078C250FD12;

#define A7F35CB4DDC8E11F_B067FD27A45D8F5D_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x27D9B80)
#define A7F35CB4DDC8E11F_B067FD27A45D8F5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7F35CB4DDC8E11F_B067FD27A45D8F5D_TypeDefinitionIndex = 16731;

class A7F35CB4DDC8E11F_B067FD27A45D8F5D : public ::System::Object
{
public:
	::System::Int32 E030B0C4DB1E479A; // 0x10
	::System::Byte _padding0[0x4];
	::FD13E078C250FD12* BBA37BE3F1DE1B88; // 0x18

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F35CB4DDC8E11F_B067FD27A45D8F5D_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F35CB4DDC8E11F_B067FD27A45D8F5D__CTOR_OFFSET))(this);
	}
};
