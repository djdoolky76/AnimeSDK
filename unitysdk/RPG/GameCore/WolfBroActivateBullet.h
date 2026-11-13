#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroActivateBullet; }

#define RPG_GAMECORE_WOLFBROACTIVATEBULLET_CTOR_OFFSET UNITYSDK_OFFSET(0x20807930)
#define RPG_GAMECORE_WOLFBROACTIVATEBULLET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20807940)
#define RPG_GAMECORE_WOLFBROACTIVATEBULLET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20807870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroActivateBullet_TypeDefinitionIndex = 21975;

	class WolfBroActivateBullet : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROACTIVATEBULLET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroActivateBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroActivateBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROACTIVATEBULLET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroActivateBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroActivateBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROACTIVATEBULLET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
