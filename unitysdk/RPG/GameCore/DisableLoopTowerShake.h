#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DisableLoopTowerShake; }

#define RPG_GAMECORE_DISABLELOOPTOWERSHAKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C7090)
#define RPG_GAMECORE_DISABLELOOPTOWERSHAKE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3C70A0)
#define RPG_GAMECORE_DISABLELOOPTOWERSHAKE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3C7060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableLoopTowerShake_TypeDefinitionIndex = 23331;

	class DisableLoopTowerShake : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRevert; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLELOOPTOWERSHAKE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableLoopTowerShake* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableLoopTowerShake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLELOOPTOWERSHAKE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableLoopTowerShake* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableLoopTowerShake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLELOOPTOWERSHAKE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
