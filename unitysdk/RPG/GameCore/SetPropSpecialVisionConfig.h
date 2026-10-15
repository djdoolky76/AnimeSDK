#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSpecialVisionConfig; }
namespace RPG::GameCore { class SetPropSpecialVisionConfig; }

#define RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABFD70)
#define RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABFD80)
#define RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABFD30)

namespace RPG::GameCore
{
	class SetPropSpecialVisionConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropSpecialVisionConfig*>* SpecialVisionConfigs; // 0x18
		::System::Boolean IsTriggerScanEffect; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropSpecialVisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropSpecialVisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
