#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVariableLevelEntityRef; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E46D0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E46E0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E4DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableLevelEntityRef_TypeDefinitionIndex = 18901;

	class LittleGameLevelVariableLevelEntityRef : public ::RPG::GameCore::LittleGameLevelVariable
	{
	public:
		::RPG::GameCore::LevelEntityRef* DefaultValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableLevelEntityRef* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableLevelEntityRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableLevelEntityRef* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableLevelEntityRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
