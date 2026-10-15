#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BindTimeRewindController; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46DD80)
#define RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D46DD90)
#define RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D46DD50)

namespace RPG::GameCore
{
	class BindTimeRewindController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ControlProps; // 0x18
		::RPG::GameCore::DynamicFloat* OpenDistrictGroupID; // 0x20
		::RPG::GameCore::DynamicFloat* OpenDistrictID; // 0x28
		::RPG::GameCore::DynamicFloat* EffectDistrictGroupID; // 0x30
		::RPG::GameCore::DynamicFloat* EffectDistrictID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BindTimeRewindController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BindTimeRewindController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BindTimeRewindController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BindTimeRewindController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
