#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMinionDestroyByPresetNameAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69AA80)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69AA90)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69AA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMinionDestroyByPresetNameAction_TypeDefinitionIndex = 18745;

	class FiveDimMinionDestroyByPresetNameAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean OnlyDestroyChild; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* MinionPresetName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYBYPRESETNAMEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
