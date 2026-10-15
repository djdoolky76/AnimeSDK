#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAddRTPCAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMADDRTPCACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D680D10)
#define RPG_GAMECORE_FIVEDIMADDRTPCACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D680D20)
#define RPG_GAMECORE_FIVEDIMADDRTPCACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D680CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddRTPCAction_TypeDefinitionIndex = 18717;

	class FiveDimAddRTPCAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single AddValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDRTPCACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddRTPCAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddRTPCAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDRTPCACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddRTPCAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddRTPCAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDRTPCACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
