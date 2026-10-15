#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatPVPMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCC2BC00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0__ENTERPVPLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xCC2E440)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0__ENTERPVPLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xCC2E570)

namespace RPG::Client::DiceCombat
{
	class DiceCombatPVPManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatPVPManager* __4__this; // 0x10
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__1; // 0x18
		::RPG::Client::DiceCombat::DiceCombatPVPMode mode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _EnterPVPLobby_b__0(::System::ValueTuple a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0__ENTERPVPLOBBY_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _EnterPVPLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVPMANAGER___C__DISPLAYCLASS8_0__ENTERPVPLOBBY_B__1_OFFSET))(this);
		}

	};
}
