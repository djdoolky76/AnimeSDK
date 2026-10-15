#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LGameEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVariableEntityRef; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E43D0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E43E0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E4D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableEntityRef_TypeDefinitionIndex = 18900;

	class LittleGameLevelVariableEntityRef : public ::RPG::GameCore::LittleGameLevelVariable
	{
	public:
		::RPG::GameCore::LGameEntityRef* DefaultValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableEntityRef* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableEntityRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableEntityRef* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableEntityRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
