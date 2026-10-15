#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveDirection.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetSplineMoveDirectionAction; }

#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB370)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DB380)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DB340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSplineMoveDirectionAction_TypeDefinitionIndex = 18662;

	class FiveDimSetSplineMoveDirectionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimSplineMoveDirection Direction; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
