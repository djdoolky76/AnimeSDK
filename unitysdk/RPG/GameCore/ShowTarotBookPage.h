#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TarotBookPageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTarotBookPage; }

#define RPG_GAMECORE_SHOWTAROTBOOKPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB8750)
#define RPG_GAMECORE_SHOWTAROTBOOKPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB8760)
#define RPG_GAMECORE_SHOWTAROTBOOKPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB8720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTarotBookPage_TypeDefinitionIndex = 22352;

	class ShowTarotBookPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TarotBookPageType PageType; // 0x18
		::System::UInt32 CharacterID; // 0x1C
		::System::Boolean IsCustomization; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTAROTBOOKPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTarotBookPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTarotBookPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTAROTBOOKPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTarotBookPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTarotBookPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTAROTBOOKPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
