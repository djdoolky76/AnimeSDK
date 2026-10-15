#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimAnimatorCullingMode.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetAnimatorCullingModeAction; }

#define RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AB040)
#define RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AB050)
#define RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AB010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimatorCullingModeAction_TypeDefinitionIndex = 18707;

	class FiveDimSetAnimatorCullingModeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimAnimatorCullingMode CullingMode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMATORCULLINGMODEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
