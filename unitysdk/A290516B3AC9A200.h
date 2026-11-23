#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A290516B3AC9A200__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A290516B3AC9A200_TypeDefinitionIndex = 7795;

class A290516B3AC9A200 : public ::System::Object
{
public:
	::System::Boolean FCD852BF21DF999F; // 0x10
	::System::Boolean F3041B3C46671AAE; // 0x11
	::System::Byte _padding0[0x2];
	::System::Int32 B4AB4A216E4995DA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A290516B3AC9A200__CTOR_OFFSET))(this);
	}
};
