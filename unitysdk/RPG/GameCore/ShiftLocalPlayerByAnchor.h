#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ShiftLocalPlayerByAnchor; }

#define RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD1DC0)
#define RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD1DD0)
#define RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD1D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShiftLocalPlayerByAnchor_TypeDefinitionIndex = 21211;

	class ShiftLocalPlayerByAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* PreAreaName; // 0x18
		::RPG::GameCore::DynamicString* PreAnchorName; // 0x20
		::RPG::GameCore::DynamicString* PreLevelAreaKey; // 0x28
		::RPG::GameCore::DynamicString* AreaName; // 0x30
		::RPG::GameCore::DynamicString* AnchorName; // 0x38
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShiftLocalPlayerByAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShiftLocalPlayerByAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShiftLocalPlayerByAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShiftLocalPlayerByAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
