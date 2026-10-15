#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NPLOEOLJEKI;
namespace RPG::Client { class MonoTimelineControlGameLevelGroup; }

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_CREATEGAMEWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xD861710)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD8621D0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xD861C90)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xD861E50)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_UP_OFFSET UNITYSDK_OFFSET(0xD862010)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevel_TypeDefinitionIndex = 60435;

	class MonoTimelineControlGameLevel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::MonoTimelineControlGameLevelGroup*>* groups; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_CTOR_OFFSET))(this);
		}

		::System::Void CreateGameWorldLevel(::NPLOEOLJEKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPLOEOLJEKI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_CREATEGAMEWORLDLEVEL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_FORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Right()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_RIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVEL_GET_UP_OFFSET))(this);
		}

	};
}
