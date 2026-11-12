#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CLIENT_THRONGNPCVARIANT_CTOR_OFFSET UNITYSDK_OFFSET(0xECD3D60)

namespace RPG::Client
{
	inline static constexpr unsigned int ThrongNpcVariant_TypeDefinitionIndex = 61347;

	class ThrongNpcVariant : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_THRONGNPCVARIANT_CTOR_OFFSET))(this);
		}

	};
}
