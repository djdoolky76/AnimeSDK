#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class HKAJMEMCBLC;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD06000)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD06020)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0x1DD06060)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDMANACOSTVIEWMODEL_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0x1E0A5920)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardManaCostViewModel_TypeDefinitionIndex = 83924;

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
