#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define PBKHHIMACFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAC1040)

inline static constexpr unsigned int PBKHHIMACFL_TypeDefinitionIndex = 50066;

	class PBKHHIMACFL : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKHHIMACFL_CTOR_OFFSET))(this);
		}

	};
