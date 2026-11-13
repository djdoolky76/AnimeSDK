#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_AUTODISABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A49A050)
#define RPG_CLIENT_AUTODISABLE_RESETTIMER_OFFSET UNITYSDK_OFFSET(0x1A499F60)
#define RPG_CLIENT_AUTODISABLE_START_OFFSET UNITYSDK_OFFSET(0x1A499F00)
#define RPG_CLIENT_AUTODISABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A499FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AutoDisable_TypeDefinitionIndex = 70265;

	class AutoDisable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single LifeTime; // 0x18
		::System::Single GJKFLKDBCCC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTODISABLE_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTODISABLE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTODISABLE_UPDATE_OFFSET))(this);
		}

		::System::Void ResetTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTODISABLE_RESETTIMER_OFFSET))(this);
		}

	};
}
