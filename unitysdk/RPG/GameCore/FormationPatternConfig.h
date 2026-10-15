#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationPatternConfig; }
namespace RPG::GameCore { class FormationSlotConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FORMATIONPATTERNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EBC50)
#define RPG_GAMECORE_FORMATIONPATTERNCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EBB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationPatternConfig_TypeDefinitionIndex = 15620;

	class FormationPatternConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::RPG::GameCore::FormationSlotConfig*>* Slots; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONPATTERNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationPatternConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationPatternConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONPATTERNCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
