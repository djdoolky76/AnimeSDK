#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNCGCMHIOGN;

#define EKGAHGCJOAN_IECADFHCEDJ_BOBOIIJHKAM_OFFSET UNITYSDK_OFFSET(0xFE1C3F0)
#define EKGAHGCJOAN_IECADFHCEDJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1C3E0)

inline static constexpr unsigned int EKGAHGCJOAN_IECADFHCEDJ_TypeDefinitionIndex = 51246;

class EKGAHGCJOAN_IECADFHCEDJ : public ::System::Object
{
public:
	::System::UInt32 FIOCHBBFGLA; // 0x10
	::System::UInt32 CDONJOHFOMM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_IECADFHCEDJ__CTOR_OFFSET))(this);
	}

	::System::Boolean BOBOIIJHKAM(::PNCGCMHIOGN* NOCCODBMGFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNCGCMHIOGN*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_IECADFHCEDJ_BOBOIIJHKAM_OFFSET))(this, NOCCODBMGFP);
	}
};
