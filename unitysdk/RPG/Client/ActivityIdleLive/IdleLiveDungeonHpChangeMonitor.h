#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class OIKDEOMMOAM;
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCDB8AD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCDB7F30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_REGISTERBOSSHPCHANGELISTENER_OFFSET UNITYSDK_OFFSET(0xCDB8850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_SETTOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xCDB8800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_START_OFFSET UNITYSDK_OFFSET(0xCDB8490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__GETBOSSENTITY_OFFSET UNITYSDK_OFFSET(0xCDB80B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__INITTOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xCDB8690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__ONBOSSHPCHANGE_OFFSET UNITYSDK_OFFSET(0xCDB8930)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonHpChangeMonitor_TypeDefinitionIndex = 77500;

	class IdleLiveDungeonHpChangeMonitor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Action_1<::System::Int32>*>* _BossHpChangeListeners; // 0x18
		::System::Int32 _TotalProgress; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _InitialBossHp; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_START_OFFSET))(this);
		}

		::System::Void _InitTotalProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__INITTOTALPROGRESS_OFFSET))(this);
		}

		::System::Void SetTotalProgress(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_SETTOTALPROGRESS_OFFSET))(this, a1);
		}

		::System::Void RegisterBossHpChangeListener(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_REGISTERBOSSHPCHANGELISTENER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _GetBossEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__GETBOSSENTITY_OFFSET))(this);
		}

		::System::Void _OnBossHpChange(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__ONBOSSHPCHANGE_OFFSET))(this, a1);
		}

	};
}
