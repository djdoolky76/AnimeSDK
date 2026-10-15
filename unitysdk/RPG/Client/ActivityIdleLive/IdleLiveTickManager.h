#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AOLGEKPKJOF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC50D110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xC50D4D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_REGISTERTICK_OFFSET UNITYSDK_OFFSET(0xC50D030)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC50D160)

namespace RPG::Client::ActivityIdleLive
{
	class IdleLiveTickManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::AOLGEKPKJOF*>* MNDEAGBNFAJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void RegisterTick(::AOLGEKPKJOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOLGEKPKJOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_REGISTERTICK_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER_UPDATE_OFFSET))(this);
		}

	};
}
