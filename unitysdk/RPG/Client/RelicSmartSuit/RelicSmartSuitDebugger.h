#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicSmartSuitLogSwitch.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicSmartSuitStage.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
class FHNPDJDGEKE;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1972FC50)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_FILTERRELICUID_OFFSET UNITYSDK_OFFSET(0x1972E3C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_LEFTRELICINFO_OFFSET UNITYSDK_OFFSET(0x1972F6C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x1972F840)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RIGHTRELICINFO_OFFSET UNITYSDK_OFFSET(0x1972F780)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_ISSWITCHON_OFFSET UNITYSDK_OFFSET(0x1972E4C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOGFORRELICINFO_OFFSET UNITYSDK_OFFSET(0x1972F020)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_1_OFFSET UNITYSDK_OFFSET(0x1972EE30)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_OFFSET UNITYSDK_OFFSET(0x1972E760)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETCOMPARERELICINFO_OFFSET UNITYSDK_OFFSET(0x1972FA10)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETRELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x1972FB80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_1_OFFSET UNITYSDK_OFFSET(0x19728BC0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_OFFSET UNITYSDK_OFFSET(0x1972E6A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x1972E550)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_FILTERRELICUID_OFFSET UNITYSDK_OFFSET(0x1972E440)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_LEFTRELICINFO_OFFSET UNITYSDK_OFFSET(0x1972F720)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RELICSCORECALCULATOR_OFFSET UNITYSDK_OFFSET(0x1972F8A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RIGHTRELICINFO_OFFSET UNITYSDK_OFFSET(0x1972F7E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_UPDATEPLANRESULTDATA_OFFSET UNITYSDK_OFFSET(0x1972F900)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERPLANTYPE_OFFSET UNITYSDK_OFFSET(0x1972E7F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_1_OFFSET UNITYSDK_OFFSET(0x1972F560)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_2_OFFSET UNITYSDK_OFFSET(0x1972EED0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_OFFSET UNITYSDK_OFFSET(0x1972F070)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__ISINSTAGE_OFFSET UNITYSDK_OFFSET(0x1972E610)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitDebugger_TypeDefinitionIndex = 76554;

	class RelicSmartSuitDebugger : public ::System::Object
	{
	public:
		static ::FHNPDJDGEKE** StaticGet__RelicScoreCalculator_k__BackingField()
		{
			return (::FHNPDJDGEKE**)UnitySDK::FromName("RPG.Client.RelicSmartSuit", "RelicSmartSuitDebugger")->GetStaticField(0x59570);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicSmartSuit::PlanType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*>** StaticGet_PlanResultDatas()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicSmartSuit::PlanType, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*>**)UnitySDK::FromName("RPG.Client.RelicSmartSuit", "RelicSmartSuitDebugger")->GetStaticField(0x59578);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo** StaticGet__LeftRelicInfo_k__BackingField()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo**)UnitySDK::FromName("RPG.Client.RelicSmartSuit", "RelicSmartSuitDebugger")->GetStaticField(0x59580);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo** StaticGet__RightRelicInfo_k__BackingField()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo**)UnitySDK::FromName("RPG.Client.RelicSmartSuit", "RelicSmartSuitDebugger")->GetStaticField(0x59588);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitStage* StaticGet__CurrentStage()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitStage*)UnitySDK::FromName("RPG.Client.RelicSmartSuit", "RelicSmartSuitDebugger")->GetStaticField(0x13080);
		}

		static ::System::UInt32* StaticGet__FilterRelicUID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.RelicSmartSuit", "RelicSmartSuitDebugger")->GetStaticField(0x13084);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch* StaticGet__LogSwitch()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch*)UnitySDK::FromName("RPG.Client.RelicSmartSuit", "RelicSmartSuitDebugger")->GetStaticField(0x13088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_CCTOR_OFFSET))();
		}

		static ::System::UInt32 get_FilterRelicUID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_FILTERRELICUID_OFFSET))();
		}

		static ::System::Void set_FilterRelicUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_FILTERRELICUID_OFFSET))(a1);
		}

		static ::System::Boolean IsSwitchOn(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_ISSWITCHON_OFFSET))(a1);
		}

		static ::System::Void SetSwitchState(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitLogSwitch, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSWITCHSTATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsInStage(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__ISINSTAGE_OFFSET))(a1);
		}

		static ::System::Void SetStageState(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitStage, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_OFFSET))(a1, a2);
		}

		static ::System::Void SetStageState_1(::RPG::Client::RelicSmartSuit::PlanType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::PlanType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETSTAGESTATE_1_OFFSET))(a1, a2);
		}

		static ::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_OFFSET))(a1);
		}

		static ::System::Void Log_1(::System::String* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOG_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogForRelicInfo(::System::String* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a2)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_LOGFORRELICINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean _FilterPlanType()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERPLANTYPE_OFFSET))();
		}

		static ::System::Boolean _FilterRelic(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_OFFSET))(a1);
		}

		static ::System::Boolean _FilterRelic_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_1_OFFSET))(a1);
		}

		static ::System::Boolean _FilterRelic_2(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER__FILTERRELIC_2_OFFSET))(a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* get_LeftRelicInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_LEFTRELICINFO_OFFSET))();
		}

		static ::System::Void set_LeftRelicInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_LEFTRELICINFO_OFFSET))(a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* get_RightRelicInfo()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RIGHTRELICINFO_OFFSET))();
		}

		static ::System::Void set_RightRelicInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RIGHTRELICINFO_OFFSET))(a1);
		}

		static ::FHNPDJDGEKE* get_RelicScoreCalculator()
		{
			return ((::FHNPDJDGEKE*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_GET_RELICSCORECALCULATOR_OFFSET))();
		}

		static ::System::Void set_RelicScoreCalculator(::FHNPDJDGEKE* a1)
		{
			return ((::System::Void(*)(::FHNPDJDGEKE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SET_RELICSCORECALCULATOR_OFFSET))(a1);
		}

		static ::System::Void UpdatePlanResultData(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_UPDATEPLANRESULTDATA_OFFSET))(a1);
		}

		static ::System::Void SetCompareRelicInfo(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a2)
		{
			return ((::System::Void(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETCOMPARERELICINFO_OFFSET))(a1, a2);
		}

		static ::System::Void SetRelicScoreCalculator(::FHNPDJDGEKE* a1)
		{
			return ((::System::Void(*)(::FHNPDJDGEKE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITDEBUGGER_SETRELICSCORECALCULATOR_OFFSET))(a1);
		}

	};
}
