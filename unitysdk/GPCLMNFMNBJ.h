#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GPCLMNFMNBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDAB40)

inline static constexpr unsigned int GPCLMNFMNBJ_TypeDefinitionIndex = 53944;

class GPCLMNFMNBJ : public ::System::Object
{
public:
	::System::Boolean JGEKMKKAOPE; // 0x10
	::System::Boolean BPHCANKFOAC; // 0x11
	::System::Boolean MANFPKJGAOA; // 0x12
	::System::Byte _padding0[0x1];
	::System::Int32 EIPCGGPOHDD; // 0x14
	::System::Int32 BIGEFFOIEEJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCLMNFMNBJ__CTOR_OFFSET))(this);
	}
};
