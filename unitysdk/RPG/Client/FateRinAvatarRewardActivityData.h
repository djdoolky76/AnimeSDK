#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace RPG::Client { class IChooseDeliveryToastEntry; }
namespace RPG::Client::FateRin { class FateRinSupportModule; }

#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4F7650)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F72B0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETENTRY_OFFSET UNITYSDK_OFFSET(0x1C4F7560)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETFATERINSUPPORTMODULE_OFFSET UNITYSDK_OFFSET(0x1C4F74D0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_HASPENDINGREWARD_OFFSET UNITYSDK_OFFSET(0x1C4F7330)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C4F72C0)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1C4F7600)
#define RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x1C4F7400)

namespace RPG::Client
{
	inline static constexpr unsigned int FateRinAvatarRewardActivityData_TypeDefinitionIndex = 63019;

	class FateRinAvatarRewardActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "FateRinAvatarRewardActivityData")->GetStaticField(0x13520);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_CCTOR_OFFSET))();
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Boolean HasPendingReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_HASPENDINGREWARD_OFFSET))(this);
		}

		::System::Boolean _IsFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA__ISFEATURECLOSED_OFFSET))(this);
		}

		::RPG::Client::FateRin::FateRinSupportModule* GetFateRinSupportModule()
		{
			return ((::RPG::Client::FateRin::FateRinSupportModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETFATERINSUPPORTMODULE_OFFSET))(this);
		}

		::RPG::Client::IChooseDeliveryToastEntry* GetEntry()
		{
			return ((::RPG::Client::IChooseDeliveryToastEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_GETENTRY_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINAVATARREWARDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

	};
}
