#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IHOILHFGGAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9D250)

inline static constexpr unsigned int IHOILHFGGAA_TypeDefinitionIndex = 60852;

class IHOILHFGGAA : public ::System::Object
{
public:
	::System::Boolean KDDMOKOHBJA; // 0x10
	::System::Boolean AMGBGFDJNFG; // 0x11
	::System::Byte _padding0[0x2];
	::System::Int32 KIFJPFIOEEC; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOILHFGGAA__CTOR_OFFSET))(this);
	}
};
