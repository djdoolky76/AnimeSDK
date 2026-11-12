#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_SWORDTRAININGMARCHSEVEN_CTOR_OFFSET UNITYSDK_OFFSET(0xEC20620)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingMarchSeven_TypeDefinitionIndex = 75042;

	class SwordTrainingMarchSeven : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMARCHSEVEN_CTOR_OFFSET))(this);
		}

	};
}
