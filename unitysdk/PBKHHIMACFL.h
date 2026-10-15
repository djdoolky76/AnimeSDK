#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define PBKHHIMACFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEAA20)

inline static constexpr unsigned int PBKHHIMACFL_TypeDefinitionIndex = 48997;

	class PBKHHIMACFL : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKHHIMACFL_CTOR_OFFSET))(this);
		}

	};
