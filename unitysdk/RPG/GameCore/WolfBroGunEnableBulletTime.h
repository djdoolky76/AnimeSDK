#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroGunEnableBulletTime; }

#define RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x20807E70)
#define RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20807E80)
#define RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20807E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunEnableBulletTime_TypeDefinitionIndex = 21979;

	class WolfBroGunEnableBulletTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single TimeScale; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroGunEnableBulletTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroGunEnableBulletTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroGunEnableBulletTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroGunEnableBulletTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
