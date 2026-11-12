#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define HIDEINNORMALINSPECTORATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5B0160)

inline static constexpr unsigned int HideInNormalInspectorAttribute_TypeDefinitionIndex = 46949;

	class HideInNormalInspectorAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDEINNORMALINSPECTORATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
