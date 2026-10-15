#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace RPG::GameCore { class AdventureModifierLookupTable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREMODIFIERLOOKUPTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CA060)
#define RPG_GAMECORE_ADVENTUREMODIFIERLOOKUPTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C9F80)

namespace RPG::GameCore
{
	class AdventureModifierLookupTable : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>* ModifierMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERLOOKUPTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureModifierLookupTable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureModifierLookupTable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERLOOKUPTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
