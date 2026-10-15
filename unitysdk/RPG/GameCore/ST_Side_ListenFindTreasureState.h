#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_ListenFindTreasureState; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA84F00)
#define RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA84F10)
#define RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA84EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ListenFindTreasureState_TypeDefinitionIndex = 20136;

	class ST_Side_ListenFindTreasureState : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* SetBoolVariableName; // 0x18
		::System::Boolean SetBoolVairableValue; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single SampleRadius; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_ListenFindTreasureState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_ListenFindTreasureState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_ListenFindTreasureState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_ListenFindTreasureState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LISTENFINDTREASURESTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
