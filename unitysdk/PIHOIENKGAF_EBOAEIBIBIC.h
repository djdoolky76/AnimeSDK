#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

#define PIHOIENKGAF_EBOAEIBIBIC_EPDIOBDGGHM_OFFSET UNITYSDK_OFFSET(0x14B9E1A0)
#define PIHOIENKGAF_EBOAEIBIBIC__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9E190)

inline static constexpr unsigned int PIHOIENKGAF_EBOAEIBIBIC_TypeDefinitionIndex = 50940;

class PIHOIENKGAF_EBOAEIBIBIC : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x10
	::System::Boolean HPFBPFMPPIO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_EBOAEIBIBIC__CTOR_OFFSET))(this);
	}

	::System::Void EPDIOBDGGHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_EBOAEIBIBIC_EPDIOBDGGHM_OFFSET))(this);
	}
};
