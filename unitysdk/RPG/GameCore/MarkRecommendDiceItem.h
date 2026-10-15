#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class MarkRecommendDiceItem; }
namespace System { class String; }

#define RPG_GAMECORE_MARKRECOMMENDDICEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D849A50)
#define RPG_GAMECORE_MARKRECOMMENDDICEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D849950)

namespace RPG::GameCore
{
	class MarkRecommendDiceItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x10
		::System::String* IconPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKRECOMMENDDICEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarkRecommendDiceItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarkRecommendDiceItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKRECOMMENDDICEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
