#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceBoxColliderConfig; }

#define RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54CA10)
#define RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54CA20)
#define RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54C9C0)

namespace RPG::GameCore
{
	class CakeRaceBoxColliderConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::MVector2 Extents; // 0x10
		::System::Single Height; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceBoxColliderConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceBoxColliderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceBoxColliderConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceBoxColliderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
