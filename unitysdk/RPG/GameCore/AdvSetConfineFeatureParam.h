#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetConfineFeatureParam; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AF240)
#define RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AF250)
#define RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AF210)

namespace RPG::GameCore
{
	class AdvSetConfineFeatureParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FloatHeight; // 0x18
		::RPG::GameCore::DynamicFloat* FloatRange; // 0x20
		::RPG::GameCore::DynamicFloat* FloatPeriod; // 0x28
		::RPG::GameCore::DynamicFloat* FloatTransitionTime; // 0x30
		::System::Boolean DisableMonsterSelect; // 0x38
		::System::Boolean DisableMonsterCable; // 0x39
		::System::Byte _padding0[0x2];
		::RPG::MVector3 RotationAngleSpeed; // 0x3C
		::RPG::GameCore::DynamicFloat* RotationAngleSpeedDamp; // 0x48
		::RPG::GameCore::DynamicFloat* RotationTransitionOut; // 0x50
		::RPG::GameCore::DynamicFloat* ScaleCharacterModel; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetConfineFeatureParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetConfineFeatureParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetConfineFeatureParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetConfineFeatureParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
