#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationMoveConfig; }
namespace RPG::GameCore { class FormationPatternConfig; }

#define RPG_GAMECORE_FORMATIONMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BD540)
#define RPG_GAMECORE_FORMATIONMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BD450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveConfig_TypeDefinitionIndex = 15621;

	class FormationMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FormationPatternConfig*>* Patterns; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
