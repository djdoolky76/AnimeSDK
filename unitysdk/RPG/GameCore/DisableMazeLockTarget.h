#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DisableMazeLockTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DISABLEMAZELOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E9710)
#define RPG_GAMECORE_DISABLEMAZELOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E9720)
#define RPG_GAMECORE_DISABLEMAZELOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E96D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableMazeLockTarget_TypeDefinitionIndex = 20159;

	class DisableMazeLockTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Disable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEMAZELOCKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableMazeLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableMazeLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEMAZELOCKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableMazeLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableMazeLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEMAZELOCKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
