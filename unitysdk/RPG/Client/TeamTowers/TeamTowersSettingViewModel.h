#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamTowers/BrickControlType.h"
#include "unitysdk/RPG/Client/TeamTowers/BrickDirectionType.h"
#include "unitysdk/System/Object.h"
class LGGELBFHJIM;
class NNGPFFCBCFC;
namespace RPG::Client::TeamTowers { class TeamTowersSettingGroupViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D23C2D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_BRICKCONTROLSETTING_OFFSET UNITYSDK_OFFSET(0x1D23D420)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_BRICKDIRECTIONSETTING_OFFSET UNITYSDK_OFFSET(0x1D23D460)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_KEYBOARDUSEWROTATESETTING_OFFSET UNITYSDK_OFFSET(0x1D23D4E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_MOBILEUSEBTNROTATESETTING_OFFSET UNITYSDK_OFFSET(0x1D23D4A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_ISMOBILEUSESWIPECONTROL_OFFSET UNITYSDK_OFFSET(0x1D23C800)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_REGISTERSETTINGSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D23C670)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_SUBMITNEWSETTING_OFFSET UNITYSDK_OFFSET(0x1D23C430)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITBRICKCONTROLGROUP_OFFSET UNITYSDK_OFFSET(0x1D23C860)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITBRICKDIRECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1D23CB50)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITKEYBOARDUSEWROTATEGROUP_OFFSET UNITYSDK_OFFSET(0x1D23D130)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITMOBILEUSEBTNROTATEGROUP_OFFSET UNITYSDK_OFFSET(0x1D23CE40)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITSETTINGGROUPS_OFFSET UNITYSDK_OFFSET(0x1D23C3D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__SDKREPORTSETTINGSUBMIT_OFFSET UNITYSDK_OFFSET(0x1D23C5A0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersSettingViewModel_TypeDefinitionIndex = 81855;

	class TeamTowersSettingViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* _MobileUseBtnRotateSetting; // 0x10
		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* _BrickDirectionSetting; // 0x18
		::LGGELBFHJIM* _Repository; // 0x20
		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* _BrickControlSetting; // 0x28
		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* _KeyBoardUseWRotateSetting; // 0x30
		::NNGPFFCBCFC* _Settings; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Void SubmitNewSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_SUBMITNEWSETTING_OFFSET))(this);
		}

		::System::Void RegisterSettingsChangedCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_REGISTERSETTINGSCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean IsMobileUseSwipeControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_ISMOBILEUSESWIPECONTROL_OFFSET))(this);
		}

		::System::Void _InitSettingGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITSETTINGGROUPS_OFFSET))(this);
		}

		::System::Void _InitBrickControlGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITBRICKCONTROLGROUP_OFFSET))(this);
		}

		::System::Void _InitBrickDirectionGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITBRICKDIRECTIONGROUP_OFFSET))(this);
		}

		::System::Void _InitMobileUseBtnRotateGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITMOBILEUSEBTNROTATEGROUP_OFFSET))(this);
		}

		::System::Void _InitKeyBoardUseWRotateGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__INITKEYBOARDUSEWROTATEGROUP_OFFSET))(this);
		}

		::System::Void _SDKReportSettingSubmit(::RPG::Client::TeamTowers::BrickControlType a1, ::RPG::Client::TeamTowers::BrickDirectionType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::BrickControlType, ::RPG::Client::TeamTowers::BrickDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL__SDKREPORTSETTINGSUBMIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* get_BrickControlSetting()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_BRICKCONTROLSETTING_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* get_BrickDirectionSetting()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_BRICKDIRECTIONSETTING_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* get_MobileUseBtnRotateSetting()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_MOBILEUSEBTNROTATESETTING_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel* get_KeyBoardUseWRotateSetting()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersSettingGroupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGVIEWMODEL_GET_KEYBOARDUSEWROTATESETTING_OFFSET))(this);
		}

	};
}
