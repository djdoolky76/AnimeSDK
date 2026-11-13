#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncSubPropState; }

#define RPG_GAMECORE_SYNCSUBPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6929A0)
#define RPG_GAMECORE_SYNCSUBPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6929B0)
#define RPG_GAMECORE_SYNCSUBPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E692960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncSubPropState_TypeDefinitionIndex = 22533;

	class SyncSubPropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCSUBPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncSubPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncSubPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCSUBPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncSubPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncSubPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCSUBPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
