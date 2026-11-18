#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define ELODMPBFODC_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x11A9CA00)
#define ELODMPBFODC_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x11A9CA80)
#define ELODMPBFODC__CTOR_OFFSET UNITYSDK_OFFSET(0x11A9CAF0)

inline static constexpr unsigned int ELODMPBFODC_TypeDefinitionIndex = 45736;

class ELODMPBFODC : public ::System::Object
{
public:
	::System::Nullable_1<::System::Single> JCPJMKFPGGL; // 0x10
	::System::Int32 KKLIIAJCHDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELODMPBFODC__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELODMPBFODC_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELODMPBFODC_ILEEFLAOOOM_OFFSET))(this);
	}
};
