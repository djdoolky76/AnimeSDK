#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NPLOEOLJEKI;
namespace RPG::Client { class MonoTimelineControlGameLevelCell; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_CREATEGAMEWORLDLEVELGROUP_OFFSET UNITYSDK_OFFSET(0xD8617C0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xD864DD0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GETCELLCENTER_OFFSET UNITYSDK_OFFSET(0xD863D80)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GETCELLCOUNT_OFFSET UNITYSDK_OFFSET(0xD8647C0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GET_CELLLENGTH_OFFSET UNITYSDK_OFFSET(0xD863D70)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GET_VECTOR_OFFSET UNITYSDK_OFFSET(0xD864350)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xD863670)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_REFRESHPOSITION_OFFSET UNITYSDK_OFFSET(0xD864810)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelGroup_TypeDefinitionIndex = 60444;

	class MonoTimelineControlGameLevelGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3Int position; // 0x18
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation rotation; // 0x24
		::System::String* uniqueName; // 0x28
		::UnityEngine::Transform* origin; // 0x30
		::Il2CppArray<::System::Object*>* triggerConfigs; // 0x38
		::Il2CppArray<::RPG::Client::MonoTimelineControlGameLevelCell*>* cells; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Int32 GetCellCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GETCELLCOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCellCenter(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GETCELLCENTER_OFFSET))(this, a1);
		}

		::System::Void RefreshPosition(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_REFRESHPOSITION_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup CreateGameWorldLevelGroup(::NPLOEOLJEKI* a1)
		{
			return ((::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup(*)(::PVOID, ::NPLOEOLJEKI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_CREATEGAMEWORLDLEVELGROUP_OFFSET))(this, a1);
		}

		::System::Single get_CellLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GET_CELLLENGTH_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Vector()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_GET_VECTOR_OFFSET))(this);
		}

	};
}
