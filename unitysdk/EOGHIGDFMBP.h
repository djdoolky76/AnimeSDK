#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define EOGHIGDFMBP_CTOR_OFFSET UNITYSDK_OFFSET(0x155B3FD0)

inline static constexpr unsigned int EOGHIGDFMBP_TypeDefinitionIndex = 70154;

	class EOGHIGDFMBP : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGHIGDFMBP_CTOR_OFFSET))(this);
		}

	};
