#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDACPOHLKJL_GBBECMALJAF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x18A62200)
#define KDACPOHLKJL_GBBECMALJAF__CTOR_OFFSET UNITYSDK_OFFSET(0x18A621F0)

inline static constexpr unsigned int KDACPOHLKJL_GBBECMALJAF_TypeDefinitionIndex = 65700;

class KDACPOHLKJL_GBBECMALJAF : public ::System::Object
{
public:
	::System::Int32 KKLJEJILBFK; // 0x10
	::System::Int32 ECGKJOIDPKN; // 0x14
	::System::Int32 AOCIJCDPILC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDACPOHLKJL_GBBECMALJAF__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDACPOHLKJL_GBBECMALJAF_NPOLNFDBOOD_OFFSET))(this);
	}
};
