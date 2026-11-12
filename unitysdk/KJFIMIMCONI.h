#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define KJFIMIMCONI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF6ECE0)

inline static constexpr unsigned int KJFIMIMCONI_TypeDefinitionIndex = 6320;

	class KJFIMIMCONI : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFIMIMCONI_CTOR_OFFSET))(this);
		}

	};
