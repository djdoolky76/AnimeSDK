#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define MKLEDJMIOBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC257B30)

inline static constexpr unsigned int MKLEDJMIOBJ_TypeDefinitionIndex = 72479;

	class MKLEDJMIOBJ : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLEDJMIOBJ_CTOR_OFFSET))(this);
		}

	};
