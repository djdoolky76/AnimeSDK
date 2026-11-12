#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TAMONOBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xEC38600)

namespace RPG::Client
{
	inline static constexpr unsigned int TAMonoBase_TypeDefinitionIndex = 72748;

	class TAMonoBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAMONOBASE_CTOR_OFFSET))(this);
		}

	};
}
