#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IRenderElement; }

#define AIDCCIKDBOB_COMPARE_OFFSET UNITYSDK_OFFSET(0x1EB543E0)
#define AIDCCIKDBOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB545D0)

inline static constexpr unsigned int AIDCCIKDBOB_TypeDefinitionIndex = 94908;

class AIDCCIKDBOB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDCCIKDBOB__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Foundation::IRenderElement* HAAEBCOBKFF, ::Foundation::IRenderElement* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::IRenderElement*, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + AIDCCIKDBOB_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
