#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraPhaseCondition; }
namespace RPG::GameCore { class ChimeraPhaseConditionConfig; }

#define RPG_GAMECORE_CHIMERAPHASECONDITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AE200)
#define RPG_GAMECORE_CHIMERAPHASECONDITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AE110)

namespace RPG::GameCore
{
	class ChimeraPhaseConditionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraPhaseCondition*>* Conditions; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASECONDITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraPhaseConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraPhaseConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASECONDITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
