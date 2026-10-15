#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class BIDHGAANLAL;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEE4D20)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCEE8990)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCEE89E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0xCEE8A40)

namespace RPG::Client::FateRin::Card
{
	class FateRinCardTagViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::BIDHGAANLAL* _Model; // 0x20
		::System::Void _ctor(::BIDHGAANLAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIDHGAANLAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_UIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_UISTATE_OFFSET))(this);
		}

	};
}
