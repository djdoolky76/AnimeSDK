#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BFHEHDNBJLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A958550)

inline static constexpr unsigned int BFHEHDNBJLL_TypeDefinitionIndex = 62482;

	class BFHEHDNBJLL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHEHDNBJLL_CTOR_OFFSET))(this);
		}

	};
