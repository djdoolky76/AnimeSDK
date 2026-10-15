#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvBlockRewardToast; }

#define RPG_GAMECORE_ADVBLOCKREWARDTOAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D360DE0)
#define RPG_GAMECORE_ADVBLOCKREWARDTOAST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D360DF0)
#define RPG_GAMECORE_ADVBLOCKREWARDTOAST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D360DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvBlockRewardToast_TypeDefinitionIndex = 21804;

	class AdvBlockRewardToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBLOCKREWARDTOAST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvBlockRewardToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvBlockRewardToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBLOCKREWARDTOAST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvBlockRewardToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvBlockRewardToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBLOCKREWARDTOAST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
