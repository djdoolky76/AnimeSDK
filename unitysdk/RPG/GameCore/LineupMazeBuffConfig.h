#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LineupMazeBuffConfig; }
namespace RPG::GameCore { class LineupMazeBuffData; }
namespace System { class String; }

#define RPG_GAMECORE_LINEUPMAZEBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D5A00)
#define RPG_GAMECORE_LINEUPMAZEBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D5870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupMazeBuffConfig_TypeDefinitionIndex = 18132;

	class LineupMazeBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SaveFile; // 0x10
		::System::String* Name; // 0x18
		::Il2CppArray<::RPG::GameCore::LineupMazeBuffData*>* MazeBuffDataList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPMAZEBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LineupMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LineupMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPMAZEBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
