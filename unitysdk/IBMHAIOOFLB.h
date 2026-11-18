#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PGELNNONBHD.h"

#define IBMHAIOOFLB_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x140D8250)
#define IBMHAIOOFLB__CTOR_OFFSET UNITYSDK_OFFSET(0x140D8350)

inline static constexpr unsigned int IBMHAIOOFLB_TypeDefinitionIndex = 80826;

class IBMHAIOOFLB : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle LPCIFDGNBMH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMHAIOOFLB__CTOR_OFFSET))(this);
	}

	::System::Boolean APMCKICIGDA(::PGELNNONBHD HGDMBHDKFPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PGELNNONBHD))((::PBYTE)hIl2Cpp + IBMHAIOOFLB_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
	}
};
