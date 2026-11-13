#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGLITTLEGAMEGRAPHNAVIGATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FBEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugLittleGameGraphNavigation_TypeDefinitionIndex = 70285;

	class DebugLittleGameGraphNavigation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGLITTLEGAMEGRAPHNAVIGATION_CTOR_OFFSET))(this);
		}

	};
}
