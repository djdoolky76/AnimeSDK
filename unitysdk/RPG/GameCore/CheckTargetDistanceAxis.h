#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckTargetDistanceAxis; }

#define RPG_GAMECORE_CHECKTARGETDISTANCEAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57CEC0)
#define RPG_GAMECORE_CHECKTARGETDISTANCEAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57CED0)
#define RPG_GAMECORE_CHECKTARGETDISTANCEAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57CE90)

namespace RPG::GameCore
{
	class CheckTargetDistanceAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::EntityType TargetType; // 0x10
		::System::Single Distance; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTARGETDISTANCEAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckTargetDistanceAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckTargetDistanceAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTARGETDISTANCEAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckTargetDistanceAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckTargetDistanceAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTARGETDISTANCEAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
