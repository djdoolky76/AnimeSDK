#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLECOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B72E0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLECOLLECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B5DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableCollection_TypeDefinitionIndex = 18904;

	class LittleGameLevelVariableCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameLevelVariable*>* LevelVariables; // 0x10
		::Il2CppArray<::RPG::GameCore::LittleGameLevelVariable*>* LevelVariablesEntityVarAutoGen; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLECOLLECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVariableCollection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVariableCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLECOLLECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
