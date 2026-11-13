#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGGIZMOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FBED0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugGizmos_TypeDefinitionIndex = 70283;

	class DebugGizmos : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGIZMOS_CTOR_OFFSET))(this);
		}

	};
}
