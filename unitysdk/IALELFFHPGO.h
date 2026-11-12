#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IALELFFHPGO_CTOR_OFFSET UNITYSDK_OFFSET(0x16DC3250)

inline static constexpr unsigned int IALELFFHPGO_TypeDefinitionIndex = 84065;

	class IALELFFHPGO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALELFFHPGO_CTOR_OFFSET))(this);
		}

	};
