#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleForceLaunchToTarget; }

#define RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83D6B0)
#define RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83D6C0)
#define RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83D660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleForceLaunchToTarget_TypeDefinitionIndex = 16837;

	class MarbleForceLaunchToTarget : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleForceLaunchToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleForceLaunchToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleForceLaunchToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleForceLaunchToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
