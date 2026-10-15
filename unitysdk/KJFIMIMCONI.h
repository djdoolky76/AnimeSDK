#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define KJFIMIMCONI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3ED80)

inline static constexpr unsigned int KJFIMIMCONI_TypeDefinitionIndex = 6313;

	class KJFIMIMCONI : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFIMIMCONI_CTOR_OFFSET))(this);
		}

	};
