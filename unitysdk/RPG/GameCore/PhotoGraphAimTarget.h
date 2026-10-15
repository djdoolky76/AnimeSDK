#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PhotoGraphAimTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHAIMTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90FB20)
#define RPG_GAMECORE_PHOTOGRAPHAIMTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90FB30)
#define RPG_GAMECORE_PHOTOGRAPHAIMTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90FAF0)

namespace RPG::GameCore
{
	class PhotoGraphAimTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AimNpcID; // 0x20
		::System::Boolean IsAim; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PhotoGraphAimIdentifyType AimIdentifyType; // 0x2C
		::System::Single AimTagExtraOffset; // 0x30
		::System::Single AimTagExtraOffsetX; // 0x34
		::System::Single AimTagExtraOffsetZ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
