#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TryRequestEnterRegion; }

#define RPG_GAMECORE_TRYREQUESTENTERREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC60D40)
#define RPG_GAMECORE_TRYREQUESTENTERREGION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC60E40)
#define RPG_GAMECORE_TRYREQUESTENTERREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC60C10)

namespace RPG::GameCore
{
	class TryRequestEnterRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TargetRegionID; // 0x18
		::RPG::GameCore::DynamicFloat* TargetRegionID2; // 0x20
		::RPG::GameCore::DynamicFloat* LoadingRate; // 0x28
		::RPG::GameCore::DynamicFloat* CancelDelay; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EnterFinishCallback; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYREQUESTENTERREGION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryRequestEnterRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryRequestEnterRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYREQUESTENTERREGION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryRequestEnterRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryRequestEnterRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYREQUESTENTERREGION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
