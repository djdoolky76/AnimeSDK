#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLACGDIAFNB.h"
#include "unitysdk/System/Object.h"

#define GAJKHGPFLNO_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x11C889D0)
#define GAJKHGPFLNO_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x11C88A10)
#define GAJKHGPFLNO__CTOR_OFFSET UNITYSDK_OFFSET(0x11C88A80)

inline static constexpr unsigned int GAJKHGPFLNO_TypeDefinitionIndex = 43429;

class GAJKHGPFLNO : public ::System::Object
{
public:
	::JLACGDIAFNB PMENFIONLNI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJKHGPFLNO__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJKHGPFLNO_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJKHGPFLNO_ILEEFLAOOOM_OFFSET))(this);
	}
};
