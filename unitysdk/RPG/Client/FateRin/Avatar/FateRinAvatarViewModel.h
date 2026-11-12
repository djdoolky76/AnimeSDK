#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD875D30)
#define RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_BATTLEICONPATH_OFFSET UNITYSDK_OFFSET(0xD876010)
#define RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_CARDOWNERMARKERICONPATH_OFFSET UNITYSDK_OFFSET(0xD875F90)
#define RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD875E70)
#define RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xD875EC0)
#define RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_SYSTEMFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xD875F10)
#define RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0xD876090)

namespace RPG::Client::FateRin::Avatar
{
	inline static constexpr unsigned int FateRinAvatarViewModel_TypeDefinitionIndex = 84010;

	class FateRinAvatarViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Model; // 0x20
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_SystemFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_SYSTEMFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_CardOwnerMarkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_CARDOWNERMARKERICONPATH_OFFSET))(this);
		}

		::System::String* get_BattleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_BATTLEICONPATH_OFFSET))(this);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERINAVATARVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}

	};
}
