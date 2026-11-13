#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IINIIDEOCOE_CTOR_OFFSET UNITYSDK_OFFSET(0x193F67E0)

inline static constexpr unsigned int IINIIDEOCOE_TypeDefinitionIndex = 83796;

	class IINIIDEOCOE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINIIDEOCOE_CTOR_OFFSET))(this);
		}

	};
