#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TeamTowers { class TeamTowersSettingOptionViewModel; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D23C1B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1D23C1A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_GET_SELECTEDOPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1D23C180)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x1D23C160)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_REGISTERCLICKCALLBACKFOROPTIONS_OFFSET UNITYSDK_OFFSET(0x1D23BEE0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_REGISTERGROUPREFRESHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D23C110)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_SELECTOPTION_OFFSET UNITYSDK_OFFSET(0x1D23BD60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_SET_SELECTEDOPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1D23C190)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x1D23C170)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersSettingGroupViewModel_TypeDefinitionIndex = 81854;

	class TeamTowersSettingGroupViewModel : public ::System::Object
	{
	public:
		::System::Action* _RefreshGroupCallBack; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersSettingOptionViewModel*>* _Options_k__BackingField; // 0x18
		::RPG::Client::TextID _TitleText_k__BackingField; // 0x20
		::System::UInt32 _SelectedOptionValue_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Void SelectOption(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_SELECTOPTION_OFFSET))(this, a1);
		}

		::System::Void RegisterClickCallBackForOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_REGISTERCLICKCALLBACKFOROPTIONS_OFFSET))(this);
		}

		::System::Void RegisterGroupRefreshCallBack(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_REGISTERGROUPREFRESHCALLBACK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TitleText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_GET_TITLETEXT_OFFSET))(this);
		}

		::System::Void set_TitleText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_SET_TITLETEXT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedOptionValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_GET_SELECTEDOPTIONVALUE_OFFSET))(this);
		}

		::System::Void set_SelectedOptionValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_SET_SELECTEDOPTIONVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersSettingOptionViewModel*>* get_Options()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersSettingOptionViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSETTINGGROUPVIEWMODEL_GET_OPTIONS_OFFSET))(this);
		}

	};
}
