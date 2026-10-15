#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityElationShowCutIn; }

#define RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3545C0)
#define RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3545D0)
#define RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D354590)

namespace RPG::GameCore
{
	class ActivityElationShowCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSpecialCutin; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x1C
		::System::UInt32 AvatarID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityElationShowCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityElationShowCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityElationShowCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityElationShowCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSHOWCUTIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
