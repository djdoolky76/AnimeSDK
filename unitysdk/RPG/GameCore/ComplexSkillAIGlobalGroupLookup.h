#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }
namespace RPG::GameCore { class ComplexSkillAIGlobalGroupLookup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_COMPLEXSKILLAIGLOBALGROUPLOOKUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CE590)
#define RPG_GAMECORE_COMPLEXSKILLAIGLOBALGROUPLOOKUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CE490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIGlobalGroupLookup_TypeDefinitionIndex = 15568;

	class ComplexSkillAIGlobalGroupLookup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ComplexSkillAIFactorGroup*>* GroupsMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGLOBALGROUPLOOKUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIGlobalGroupLookup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIGlobalGroupLookup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGLOBALGROUPLOOKUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
