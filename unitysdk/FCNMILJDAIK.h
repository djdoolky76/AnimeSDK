#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IRenderElement; }

#define FCNMILJDAIK_COMPARE_OFFSET UNITYSDK_OFFSET(0x1EEBF660)
#define FCNMILJDAIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEBF850)

inline static constexpr unsigned int FCNMILJDAIK_TypeDefinitionIndex = 95026;

class FCNMILJDAIK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMILJDAIK__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Foundation::IRenderElement* HAAEBCOBKFF, ::Foundation::IRenderElement* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::IRenderElement*, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + FCNMILJDAIK_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
