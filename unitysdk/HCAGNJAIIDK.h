#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HCAGNJAIIDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C160D0)

inline static constexpr unsigned int HCAGNJAIIDK_TypeDefinitionIndex = 49660;

	class HCAGNJAIIDK : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAGNJAIIDK_CTOR_OFFSET))(this);
		}

	};
