#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JBNKNFAFNDP_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xF88F570)
#define JBNKNFAFNDP_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0xF88F5C0)
#define JBNKNFAFNDP__CTOR_OFFSET UNITYSDK_OFFSET(0xF88F630)

inline static constexpr unsigned int JBNKNFAFNDP_TypeDefinitionIndex = 72192;

class JBNKNFAFNDP : public ::System::Object
{
public:
	::System::Int32 OKGPFKGCJCN; // 0x10
	::System::Int32 NCEAEHKEPJN; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNKNFAFNDP__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNKNFAFNDP_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNKNFAFNDP_ILEEFLAOOOM_OFFSET))(this);
	}
};
