#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetHitOverrideLayerWeight; }

#define RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB6030)
#define RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB6040)
#define RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB6000)

namespace RPG::GameCore
{
	class SetHitOverrideLayerWeight : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Weight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHitOverrideLayerWeight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHitOverrideLayerWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHitOverrideLayerWeight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHitOverrideLayerWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHITOVERRIDELAYERWEIGHT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
