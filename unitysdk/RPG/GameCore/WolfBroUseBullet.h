#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroUseBullet; }

#define RPG_GAMECORE_WOLFBROUSEBULLET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA96C0)
#define RPG_GAMECORE_WOLFBROUSEBULLET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA96D0)
#define RPG_GAMECORE_WOLFBROUSEBULLET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA9600)

namespace RPG::GameCore
{
	class WolfBroUseBullet : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroUseBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroUseBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroUseBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroUseBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
