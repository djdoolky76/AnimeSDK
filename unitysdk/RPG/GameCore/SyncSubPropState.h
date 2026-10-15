#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncSubPropState; }

#define RPG_GAMECORE_SYNCSUBPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB22FF0)
#define RPG_GAMECORE_SYNCSUBPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB23000)
#define RPG_GAMECORE_SYNCSUBPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB22FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncSubPropState_TypeDefinitionIndex = 22128;

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
