#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class AFOAMOJGBFC;
class HPCKCJDCNFM;
class NPLOEOLJEKI;
namespace RPG::Client { class MonoTimelineControlGameLevelCell_Debug; }
namespace RPG::Client { class MonoTimelineControlGameLevelCell_DropConfig; }
namespace RPG::Client { class MonoTimelineControlGameLevelCell_FloorConfig; }
namespace RPG::Client { class MonoTimelineControlGameLevelCell_SaveConfig; }
namespace RPG::Client { class MonoTimelineControlGameLevelCell_TriggerConfig; }

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_CREATEGAMEWORLDLEVELCELL_OFFSET UNITYSDK_OFFSET(0xD86B760)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_CTOR_OFFSET UNITYSDK_OFFSET(0xD86CAA0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DRAWFLOOR_OFFSET UNITYSDK_OFFSET(0xD86C2A0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xD86BA60)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_GET_DEBUGINFO_OFFSET UNITYSDK_OFFSET(0xD86CA90)

namespace RPG::Client
{
	class MonoTimelineControlGameLevelCell : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* DKIBGCBDLNG; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* AKKEPHJEGJN; // 0x20
		::System::Boolean visible; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3Int offset; // 0x2C
		::RPG::Client::MonoTimelineControlGameLevelCell_FloorConfig* floorConfig; // 0x38
		::RPG::Client::MonoTimelineControlGameLevelCell_DropConfig* dropConfig; // 0x40
		::RPG::Client::MonoTimelineControlGameLevelCell_TriggerConfig* triggerConfig; // 0x48
		::RPG::Client::MonoTimelineControlGameLevelCell_SaveConfig* saverConfig; // 0x50
		::RPG::Client::MonoTimelineControlGameLevelCell_Debug* _DebugInfo_k__BackingField; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_CTOR_OFFSET))(this);
		}

		::HPCKCJDCNFM* CreateGameWorldLevelCell(::NPLOEOLJEKI* a1, ::AFOAMOJGBFC* a2)
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID, ::NPLOEOLJEKI*, ::AFOAMOJGBFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_CREATEGAMEWORLDLEVELCELL_OFFSET))(this, a1, a2);
		}

		::System::Void DrawGizmos(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DRAWGIZMOS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DrawFloor(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DRAWFLOOR_OFFSET))(this, a1);
		}

		::RPG::Client::MonoTimelineControlGameLevelCell_Debug* get_DebugInfo()
		{
			return ((::RPG::Client::MonoTimelineControlGameLevelCell_Debug*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_GET_DEBUGINFO_OFFSET))(this);
		}

	};
}
