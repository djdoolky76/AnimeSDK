#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

#define PIHOIENKGAF_PCIBDFIPJLM_ANOOBIAJKHK_OFFSET UNITYSDK_OFFSET(0x1C65E420)
#define PIHOIENKGAF_PCIBDFIPJLM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65E410)

inline static constexpr unsigned int PIHOIENKGAF_PCIBDFIPJLM_TypeDefinitionIndex = 50939;

class PIHOIENKGAF_PCIBDFIPJLM : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_PCIBDFIPJLM__CTOR_OFFSET))(this);
	}

	::System::Void ANOOBIAJKHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_PCIBDFIPJLM_ANOOBIAJKHK_OFFSET))(this);
	}
};
