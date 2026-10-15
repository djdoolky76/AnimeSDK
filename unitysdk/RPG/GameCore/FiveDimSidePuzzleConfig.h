#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSidePuzzleConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSIDEPUZZLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DBD60)
#define RPG_GAMECORE_FIVEDIMSIDEPUZZLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DBBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSidePuzzleConfig_TypeDefinitionIndex = 18562;

	class FiveDimSidePuzzleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameDynamicVar* PuzzleStateLevelVar; // 0x10
		::System::String* SkillIconNode; // 0x18
		::System::String* PuzzleIconNode; // 0x20
		::System::String* ChestIconNode; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIDEPUZZLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSidePuzzleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSidePuzzleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIDEPUZZLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
