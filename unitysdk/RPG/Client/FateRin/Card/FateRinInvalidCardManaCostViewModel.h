#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
namespace RPG::Client::FateRin::Card { class FateRinInvalidCardManaCostViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEF1F50)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEF2000)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xCEF1F60)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0xCEF2040)
#define RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0xCEF2080)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinInvalidCardManaCostViewModel_TypeDefinitionIndex = 81165;

	class FateRinInvalidCardManaCostViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		static ::RPG::Client::FateRin::Card::FateRinInvalidCardManaCostViewModel** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::Card::FateRinInvalidCardManaCostViewModel**)UnitySDK::FromName("RPG.Client.FateRin.Card", "FateRinInvalidCardManaCostViewModel")->GetStaticField(0x55BE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::Card::FateRinInvalidCardManaCostViewModel* get_Instance()
		{
			return ((::RPG::Client::FateRin::Card::FateRinInvalidCardManaCostViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_INSTANCE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_ManaCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET))(this);
		}

		::System::String* get_UIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERININVALIDCARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET))(this);
		}

	};
}
