#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PVSDEBUGMONO_CTOR_OFFSET UNITYSDK_OFFSET(0xE4C0B60)

namespace RPG::Client
{
	inline static constexpr unsigned int PVSDebugMono_TypeDefinitionIndex = 70850;

	class PVSDebugMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PVSDEBUGMONO_CTOR_OFFSET))(this);
		}

	};
}
