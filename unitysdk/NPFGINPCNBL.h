#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NPFGINPCNBL_CTOR_OFFSET UNITYSDK_OFFSET(0xC5EC590)

inline static constexpr unsigned int NPFGINPCNBL_TypeDefinitionIndex = 50827;

	class NPFGINPCNBL : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFGINPCNBL_CTOR_OFFSET))(this);
		}

	};
