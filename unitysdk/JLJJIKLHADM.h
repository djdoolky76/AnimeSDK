#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JLJJIKLHADM_FENCOLLJAMO_OFFSET UNITYSDK_OFFSET(0x1EBEB9D0)
#define JLJJIKLHADM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE4430)

inline static constexpr unsigned int JLJJIKLHADM_TypeDefinitionIndex = 28870;

class JLJJIKLHADM : public ::System::Object
{
public:
	// static const ::System::UInt32 AGLGIJLPPKM = 0x0; // 0x0
	// static const ::System::UInt32 LPOHCBJNANA = 0x40000000; // 0x0
	::System::UInt32 JDHAFGDONFN; // 0x10

	::System::Void _ctor(::System::UInt32 GPHEOOEMAHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLJJIKLHADM__CTOR_OFFSET))(this, GPHEOOEMAHD);
	}

	::System::UInt32 FENCOLLJAMO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJJIKLHADM_FENCOLLJAMO_OFFSET))(this);
	}
};
