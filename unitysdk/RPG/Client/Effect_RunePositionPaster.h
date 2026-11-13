#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class CGHDPJKLKJB;
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x189A1DE0)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_CTOR_OFFSET UNITYSDK_OFFSET(0x189A1FB0)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x189A1F00)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x189A1E30)
#define RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x189A1E90)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_RunePositionPaster_TypeDefinitionIndex = 72523;

	class Effect_RunePositionPaster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* runRenderer; // 0x18
		::CGHDPJKLKJB* _Behavior; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RUNEPOSITIONPASTER_ONDESTROY_OFFSET))(this);
		}

	};
}
