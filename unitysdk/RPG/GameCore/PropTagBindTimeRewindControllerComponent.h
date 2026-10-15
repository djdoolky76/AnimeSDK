#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropTagComponent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropTagBindTimeRewindControllerComponent; }

#define RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95A160)
#define RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95A170)
#define RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95A110)

namespace RPG::GameCore
{
	class PropTagBindTimeRewindControllerComponent : public ::RPG::GameCore::PropTagComponent
	{
	public:
		::Il2CppArray<::System::UInt32>* ControlPropIDs; // 0x18
		::System::UInt32 OpenDistrictID; // 0x20
		::System::UInt32 EffectDistrictID; // 0x24
		::System::Single ScanEffRange; // 0x28
		::System::Boolean StateChangeCutInSpreadEff; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropTagBindTimeRewindControllerComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGBINDTIMEREWINDCONTROLLERCOMPONENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
