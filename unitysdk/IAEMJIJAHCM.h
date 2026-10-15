#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IAEMJIJAHCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CED9ED0)

inline static constexpr unsigned int IAEMJIJAHCM_TypeDefinitionIndex = 25033;

	class IAEMJIJAHCM : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEMJIJAHCM_CTOR_OFFSET))(this);
		}

	};
