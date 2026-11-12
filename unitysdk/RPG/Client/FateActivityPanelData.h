#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace System { class String; }

#define RPG_CLIENT_FATEACTIVITYPANELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD8404B0)
#define RPG_CLIENT_FATEACTIVITYPANELDATA_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xD8404C0)
#define RPG_CLIENT_FATEACTIVITYPANELDATA_GET__GUIDEMISSIONGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xD840440)
#define RPG_CLIENT_FATEACTIVITYPANELDATA_GET__GUIDEMISSIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD840330)
#define RPG_CLIENT_FATEACTIVITYPANELDATA_HASREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0xD840890)
#define RPG_CLIENT_FATEACTIVITYPANELDATA_ISLOCKEDBYPRECONDITIONS_OFFSET UNITYSDK_OFFSET(0xD8406C0)
#define RPG_CLIENT_FATEACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xD840500)
#define RPG_CLIENT_FATEACTIVITYPANELDATA_TRYTRIGGERGUIDEMISSIONINTERACT_OFFSET UNITYSDK_OFFSET(0xD840960)
#define RPG_CLIENT_FATEACTIVITYPANELDATA__HASRESIDENTREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0xD8405F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateActivityPanelData_TypeDefinitionIndex = 63016;

	class FateActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get__GuideMissionGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA_GET__GUIDEMISSIONGROUPID_OFFSET))(this);
		}

		::System::String* get__GuideMissionGroupEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA_GET__GUIDEMISSIONGROUPEVENT_OFFSET))(this);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsLockedByPreConditions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA_ISLOCKEDBYPRECONDITIONS_OFFSET))(this);
		}

		::System::Boolean HasRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA_HASREWARDTOTAKE_OFFSET))(this);
		}

		::System::Boolean _HasResidentRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA__HASRESIDENTREWARDTOTAKE_OFFSET))(this);
		}

		::System::Boolean TryTriggerGuideMissionInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA_TRYTRIGGERGUIDEMISSIONINTERACT_OFFSET))(this);
		}

	};
}
