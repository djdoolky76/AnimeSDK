#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class AB642D1382756991;

#define FA0CDF1978A6B206__CCTOR_OFFSET UNITYSDK_OFFSET(0x222F550)

inline static constexpr unsigned int FA0CDF1978A6B206_TypeDefinitionIndex = 9198;

struct alignas(8) FA0CDF1978A6B206
{
	static ::FA0CDF1978A6B206* StaticGet_AE04A22CC80CDB9D()
	{
		return (::FA0CDF1978A6B206*)Il2CppClass::FromTypeDefinitionIndex(FA0CDF1978A6B206_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::UInt32 FCBE047F1AF02D04; // 0x10
	::System::Byte _padding0[0x4];
	::AB642D1382756991* A4E60FBB7D82F91C; // 0x18
	::System::Boolean F765FA88604E1844; // 0x20
	::System::Boolean EDE87FDCF14C6029; // 0x21

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FA0CDF1978A6B206__CCTOR_OFFSET))();
	}
};
