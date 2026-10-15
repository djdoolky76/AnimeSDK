#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NILCAHCBKAI;
class PFPHKOAFPCJ;
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaPoolData; }
namespace RPG::Client::ActivityIdleLive { class IdlePowerChangeContext; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC4D4290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_DOGACHA_OFFSET UNITYSDK_OFFSET(0xC4D2A80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_GET_CURGACHADATA_OFFSET UNITYSDK_OFFSET(0xC4D4250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_GET_GACHAPOWERCHANGECONTEXT_OFFSET UNITYSDK_OFFSET(0xC4D4270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC4D2650)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_SET_CURGACHADATA_OFFSET UNITYSDK_OFFSET(0xC4D4260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_SET_GACHAPOWERCHANGECONTEXT_OFFSET UNITYSDK_OFFSET(0xC4D4280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_UPDATE_1_OFFSET UNITYSDK_OFFSET(0xC4D41E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xC4D2B50)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaInfo_TypeDefinitionIndex = 75251;

	class IdleLiveGachaInfo : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData* _CurGachaData_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdlePowerChangeContext* _GachaPowerChangeContext_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_INIT_OFFSET))(this);
		}

		::System::Void DoGacha(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_DOGACHA_OFFSET))(this, a1);
		}

		::System::Void Update(::NILCAHCBKAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NILCAHCBKAI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Update_1(::PFPHKOAFPCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPHKOAFPCJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_UPDATE_1_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData* get_CurGachaData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_GET_CURGACHADATA_OFFSET))(this);
		}

		::System::Void set_CurGachaData(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_SET_CURGACHADATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdlePowerChangeContext* get_GachaPowerChangeContext()
		{
			return ((::RPG::Client::ActivityIdleLive::IdlePowerChangeContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_GET_GACHAPOWERCHANGECONTEXT_OFFSET))(this);
		}

		::System::Void set_GachaPowerChangeContext(::RPG::Client::ActivityIdleLive::IdlePowerChangeContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdlePowerChangeContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAINFO_SET_GACHAPOWERCHANGECONTEXT_OFFSET))(this, a1);
		}

	};
}
