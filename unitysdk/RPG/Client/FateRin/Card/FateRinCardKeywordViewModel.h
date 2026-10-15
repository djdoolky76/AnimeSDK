#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class KMGFDBOANJO;

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEE82B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCEE83E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCEE8330)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCEE8380)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardKeywordViewModel_TypeDefinitionIndex = 81143;

	class FateRinCardKeywordViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::KMGFDBOANJO* _Model; // 0x20
		::System::Void _ctor(::KMGFDBOANJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMGFDBOANJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_DESC_OFFSET))(this);
		}

	};
}
