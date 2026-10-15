#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelVarCondition; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B6940)
#define RPG_GAMECORE_LITTLEGAMELEVELVARCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B6800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVarCondition_TypeDefinitionIndex = 18864;

	class LittleGameLevelVarCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CompareType Operation; // 0x10
		::System::Int16 Value; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVarCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVarCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
