#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCGoback; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCGOBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A41D0)
#define RPG_GAMECORE_ADVNPCGOBACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A41E0)
#define RPG_GAMECORE_ADVNPCGOBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A41A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCGoback_TypeDefinitionIndex = 19985;

	class AdvNPCGoback : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TaskConfig* OnBeforeGoBack; // 0x18
		::RPG::GameCore::TaskConfig* OnBackToGuardPoint; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGOBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCGoback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCGoback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGOBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCGoback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCGoback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGOBACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
