#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOKPKFDLENO.h"

#define KKAIDKHNPFH_IFKIDMPOPEP_OFFSET UNITYSDK_OFFSET(0x1765FE80)
#define KKAIDKHNPFH_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x1765FE30)
#define KKAIDKHNPFH__CTOR_OFFSET UNITYSDK_OFFSET(0x176605A0)

inline static constexpr unsigned int KKAIDKHNPFH_TypeDefinitionIndex = 62105;

class KKAIDKHNPFH : public ::DOKPKFDLENO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAIDKHNPFH__CTOR_OFFSET))(this);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAIDKHNPFH_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void IFKIDMPOPEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAIDKHNPFH_IFKIDMPOPEP_OFFSET))(this);
	}
};
