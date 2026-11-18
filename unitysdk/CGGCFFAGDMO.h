#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMMCKLHIDAE.h"
#include "unitysdk/System/Object.h"

#define CGGCFFAGDMO_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x159D5AF0)
#define CGGCFFAGDMO_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x159D5B40)
#define CGGCFFAGDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x159D5BB0)

inline static constexpr unsigned int CGGCFFAGDMO_TypeDefinitionIndex = 47077;

class CGGCFFAGDMO : public ::System::Object
{
public:
	::MMMCKLHIDAE HHDDIDDPFCM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGCFFAGDMO__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGCFFAGDMO_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGCFFAGDMO_ILEEFLAOOOM_OFFSET))(this);
	}
};
