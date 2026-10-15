#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace RPG::Client { class AdventurePhase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBJPACDBAJN_CTOR_OFFSET UNITYSDK_OFFSET(0xE2288D0)
#define DBJPACDBAJN_DNODEONNPEM_OFFSET UNITYSDK_OFFSET(0xE228950)
#define DBJPACDBAJN_LOCK_OFFSET UNITYSDK_OFFSET(0xE2288E0)
#define DBJPACDBAJN_UNLOCK_OFFSET UNITYSDK_OFFSET(0xE228A60)

	class DBJPACDBAJN : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + DBJPACDBAJN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DBJPACDBAJN_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DBJPACDBAJN_UNLOCK_OFFSET))(this, a1);
		}

		::RPG::Client::AdventurePhase* DNODEONNPEM()
		{
			return ((::RPG::Client::AdventurePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJPACDBAJN_DNODEONNPEM_OFFSET))(this);
		}

	};
