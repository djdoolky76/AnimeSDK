#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ReactionItemConfig; }
namespace RPG::GameCore { class ReactionTaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_REACTIONITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D941CA0)
#define RPG_GAMECORE_REACTIONITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D941AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReactionItemConfig_TypeDefinitionIndex = 15636;

	class ReactionItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Stimulus; // 0x10
		::Il2CppArray<::RPG::GameCore::PredicateConfig*>* Condition; // 0x18
		::Il2CppArray<::RPG::GameCore::ReactionTaskConfig*>* Action; // 0x20
		::System::String* ReactionSubTree; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REACTIONITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReactionItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReactionItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REACTIONITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
