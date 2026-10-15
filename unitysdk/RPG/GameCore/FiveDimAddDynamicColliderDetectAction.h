#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAddDynamicColliderDetectAction; }

#define RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AE020)
#define RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AE030)
#define RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ADF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddDynamicColliderDetectAction_TypeDefinitionIndex = 18763;

	class FiveDimAddDynamicColliderDetectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
