#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class AdventureAbilityConfigList; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREABILITYCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D388690)
#define RPG_GAMECORE_ADVENTUREABILITYCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D388550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityConfigList_TypeDefinitionIndex = 17426;

	class AdventureAbilityConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureAbilityConfig*>* AbilityList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>* GlobalModifiers; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAbilityConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAbilityConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
