#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class AdventureGameplayLock; }

#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EEEE0)
#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2EEEF0)
#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2EED90)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureGameplayLock_TypeDefinitionIndex = 10319;

	class AdventureGameplayLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLock; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::LockSource LockSource; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::AdventureGameplayLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::AdventureGameplayLock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::AdventureGameplayLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::AdventureGameplayLock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
