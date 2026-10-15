#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class HKAJMEMCBLC;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEDFB60)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEDFB80)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0xCEDFBC0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0xCEDFC10)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardManaCostViewModel_TypeDefinitionIndex = 81144;

	class FateRinCardManaCostViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::HKAJMEMCBLC* _Model; // 0x20
		::System::Void _ctor(::HKAJMEMCBLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_ManaCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET))(this);
		}

		::System::String* get_UIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET))(this);
		}

	};
}
