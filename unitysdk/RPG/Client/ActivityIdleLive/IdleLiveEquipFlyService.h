#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IONGFDBBCIF;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0xC4CDD60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4CDD10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_INIT_OFFSET UNITYSDK_OFFSET(0xC4CD4A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_ONALLEQUIPSELECTFINISHED_OFFSET UNITYSDK_OFFSET(0xC4CD6B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_REGISTERROOTTRANS_OFFSET UNITYSDK_OFFSET(0xC4CD3E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_SHOWEQUIPFLY_OFFSET UNITYSDK_OFFSET(0xC4CD7F0)

namespace RPG::Client::ActivityIdleLive
{
	class IdleLiveEquipFlyService : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _EquipFlyEndPromise; // 0x10
		::UnityEngine::Canvas* _RootCanvas; // 0x18
		::IONGFDBBCIF* _PoolMgr; // 0x20
		::System::Boolean _Inited; // 0x28
		// static const ::System::String* _EQUIP_FLY_PREFAB_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_CTOR_OFFSET))(this);
		}

		::System::Void RegisterRootTrans(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_REGISTERROOTTRANS_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_INIT_OFFSET))(this);
		}

		::System::Void OnAllEquipSelectFinished(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_ONALLEQUIPSELECTFINISHED_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* ShowEquipFly(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_SHOWEQUIPFLY_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_DISPOSE_OFFSET))(this);
		}

	};
}
