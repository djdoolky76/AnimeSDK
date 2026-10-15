#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdventureGameplayLock.h"
class FCOEMCEDLNL;
namespace RPG::Client { class AdventureGameplayLockWithDelay; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EF070)
#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2EF080)
#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2EF2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureGameplayLockWithDelay_TypeDefinitionIndex = 10320;

	class AdventureGameplayLockWithDelay : public ::RPG::Client::AdventureGameplayLock
	{
	public:
		::System::Single UnScaleDelay; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDelayTrigger; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::AdventureGameplayLockWithDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::AdventureGameplayLockWithDelay*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::AdventureGameplayLockWithDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::AdventureGameplayLockWithDelay*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
