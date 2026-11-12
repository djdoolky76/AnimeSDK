#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_LOOKATSOLVERCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDF2B3E0)
#define RPG_CLIENT_LOOKATSOLVERCONFIGBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDF2B350)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtSolverConfigBase_TypeDefinitionIndex = 70417;

	class LookAtSolverConfigBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVERCONFIGBASE_CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATSOLVERCONFIGBASE_ONDESTROY_OFFSET))(this);
		}

	};
}
