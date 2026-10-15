#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingDeathEffectConfig; }

#define RPG_GAMECORE_CHENLINGDEATHEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58B2F0)
#define RPG_GAMECORE_CHENLINGDEATHEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D584FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingDeathEffectConfig_TypeDefinitionIndex = 15687;

	class ChenLingDeathEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector2 DirYRange; // 0x10
		::RPG::MVector2 SoldierForceRange; // 0x18
		::RPG::MVector3 SoldierTorqueRangeMin; // 0x20
		::RPG::MVector3 SoldierTorqueRangeMax; // 0x2C
		::RPG::MVector2 WeaponForceRange; // 0x38
		::RPG::MVector3 WeaponTorqueRangeMin; // 0x40
		::RPG::MVector3 WeaponTorqueRangeMax; // 0x4C
		::RPG::GameCore::FixPoint WeaponDisappearDelay; // 0x58
		::RPG::GameCore::FixPoint ScaleToForceMultiper; // 0x60
		::RPG::GameCore::FixPoint ScaleToTorqueMultiper; // 0x68
		::RPG::GameCore::FixPoint DisappearDelay; // 0x70
		::RPG::GameCore::FixPoint Dither; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGDEATHEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingDeathEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingDeathEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGDEATHEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
