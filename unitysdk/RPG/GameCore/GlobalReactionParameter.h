#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalReactionParameter; }
namespace RPG::GameCore { class ReactionItemConfig; }
namespace RPG::GameCore { class StimulusItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALREACTIONPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1CB0)
#define RPG_GAMECORE_GLOBALREACTIONPARAMETER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F1B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalReactionParameter_TypeDefinitionIndex = 15638;

	class GlobalReactionParameter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ReactionItemConfig*>* ReactionMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StimulusItemConfig*>* StimulusMap; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALREACTIONPARAMETER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalReactionParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalReactionParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALREACTIONPARAMETER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
