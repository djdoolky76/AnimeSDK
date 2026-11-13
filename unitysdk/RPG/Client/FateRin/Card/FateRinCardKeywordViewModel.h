#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class KMGFDBOANJO;

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD05E70)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1DD05FA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DD05EF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DD05F40)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardKeywordViewModel_TypeDefinitionIndex = 83922;

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
