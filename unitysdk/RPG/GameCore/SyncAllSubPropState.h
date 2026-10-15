#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncAllSubPropState; }

#define RPG_GAMECORE_SYNCALLSUBPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB221D0)
#define RPG_GAMECORE_SYNCALLSUBPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB221E0)
#define RPG_GAMECORE_SYNCALLSUBPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB22190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncAllSubPropState_TypeDefinitionIndex = 22134;

	class SyncAllSubPropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCALLSUBPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncAllSubPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncAllSubPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCALLSUBPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncAllSubPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncAllSubPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCALLSUBPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
