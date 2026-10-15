#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPuzzleCollectItem; }

#define RPG_GAMECORE_ADVPUZZLECOLLECTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ABF20)
#define RPG_GAMECORE_ADVPUZZLECOLLECTITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3ABF30)
#define RPG_GAMECORE_ADVPUZZLECOLLECTITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3ABEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPuzzleCollectItem_TypeDefinitionIndex = 22142;

	class AdvPuzzleCollectItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PuzzleID; // 0x18
		::System::UInt32 ItemType; // 0x1C
		::System::UInt32 ItemX; // 0x20
		::System::UInt32 ItemY; // 0x24
		::System::UInt32 ItemInitDirection; // 0x28
		::System::UInt32 ItemDirection; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPUZZLECOLLECTITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPuzzleCollectItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPuzzleCollectItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPUZZLECOLLECTITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPuzzleCollectItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPuzzleCollectItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPUZZLECOLLECTITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
