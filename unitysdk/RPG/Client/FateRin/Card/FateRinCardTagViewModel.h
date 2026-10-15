#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class BIDHGAANLAL;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEDC440)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCEE00B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCEE0100)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDTAGVIEWMODEL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0xCEE0160)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardTagViewModel_TypeDefinitionIndex = 81152;

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
