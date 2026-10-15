#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueSelectDialogueOption; }

#define RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA0110)
#define RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA0120)
#define RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA00D0)

namespace RPG::GameCore
{
	class WaitRogueSelectDialogueOption : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueSelectDialogueOption* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueSelectDialogueOption*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueSelectDialogueOption* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueSelectDialogueOption*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
