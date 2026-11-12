#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HCAGNJAIIDK_CTOR_OFFSET UNITYSDK_OFFSET(0x16B58110)

inline static constexpr unsigned int HCAGNJAIIDK_TypeDefinitionIndex = 50736;

	class HCAGNJAIIDK : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAGNJAIIDK_CTOR_OFFSET))(this);
		}

	};
