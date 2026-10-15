#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/Client/TextID.h"
class CMNOPNKOJPP;
class FEIPLKMMIOI;
class FJOHALKABDJ;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Avatar { class IFateRinAvatarViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEDFCA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xCEDFED0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_DECKSIZELIMIT_OFFSET UNITYSDK_OFFSET(0xCEDFE80)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_ISNEUTRAL_OFFSET UNITYSDK_OFFSET(0xCEDFE40)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCEDFDE0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_OWNERMARKERICONPATH_OFFSET UNITYSDK_OFFSET(0xCEDFEE0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_TYPENUMBER_OFFSET UNITYSDK_OFFSET(0xCEDFD60)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCEDFD10)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0xCEE0030)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardOwnerViewModel_TypeDefinitionIndex = 81147;

	class FateRinCardOwnerViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::AvatarSystem::IAvatar* _AvatarModel; // 0x20
		::FJOHALKABDJ* _Model; // 0x28
		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* _Avatar_k__BackingField; // 0x30
		::System::Void _ctor(::FJOHALKABDJ* a1, ::FEIPLKMMIOI* a2, ::CMNOPNKOJPP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FJOHALKABDJ*, ::FEIPLKMMIOI*, ::CMNOPNKOJPP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FateRinHouguOwnerType get_Type()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_TypeNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_TYPENUMBER_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsNeutral()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_ISNEUTRAL_OFFSET))(this);
		}

		::System::UInt32 get_DeckSizeLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_DECKSIZELIMIT_OFFSET))(this);
		}

		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* get_Avatar()
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_AVATAR_OFFSET))(this);
		}

		::System::String* get_OwnerMarkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_OWNERMARKERICONPATH_OFFSET))(this);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}

	};
}
