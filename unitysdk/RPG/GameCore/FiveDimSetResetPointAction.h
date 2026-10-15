#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetResetPointAction; }

#define RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB0F0)
#define RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DB100)
#define RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DB0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetResetPointAction_TypeDefinitionIndex = 18650;

	class FiveDimSetResetPointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 EntityID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetResetPointAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetResetPointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetResetPointAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetResetPointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
