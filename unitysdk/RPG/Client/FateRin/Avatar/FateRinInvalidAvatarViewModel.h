#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
namespace RPG::Client::FateRin::Avatar { class FateRinInvalidAvatarViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEA6730)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_BATTLEICONPATH_OFFSET UNITYSDK_OFFSET(0xCEA68E0)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_CARDOWNERMARKERICONPATH_OFFSET UNITYSDK_OFFSET(0xCEA68A0)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xCEA6740)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCEA67E0)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xCEA6820)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_SYSTEMFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xCEA6860)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0xCEA6920)

namespace RPG::Client::FateRin::Avatar
{
	inline static constexpr unsigned int FateRinInvalidAvatarViewModel_TypeDefinitionIndex = 81230;

	class FateRinInvalidAvatarViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		static ::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel**)UnitySDK::FromName("RPG.Client.FateRin.Avatar", "FateRinInvalidAvatarViewModel")->GetStaticField(0x50C70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel* get_Instance()
		{
			return ((::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_INSTANCE_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_SystemFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_SYSTEMFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_CardOwnerMarkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_CARDOWNERMARKERICONPATH_OFFSET))(this);
		}

		::System::String* get_BattleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_BATTLEICONPATH_OFFSET))(this);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}

	};
}
