#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BFHEHDNBJLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB164010)

inline static constexpr unsigned int BFHEHDNBJLL_TypeDefinitionIndex = 61097;

	class BFHEHDNBJLL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHEHDNBJLL_CTOR_OFFSET))(this);
		}

	};
