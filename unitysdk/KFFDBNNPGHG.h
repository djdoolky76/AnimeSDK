#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KFFDBNNPGHG_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x157E74B0)
#define KFFDBNNPGHG__CTOR_OFFSET UNITYSDK_OFFSET(0x157E74F0)

inline static constexpr unsigned int KFFDBNNPGHG_TypeDefinitionIndex = 78362;

class KFFDBNNPGHG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFDBNNPGHG__CTOR_OFFSET))(this);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFDBNNPGHG_GPKMPDHNCGL_OFFSET))(this);
	}
};
