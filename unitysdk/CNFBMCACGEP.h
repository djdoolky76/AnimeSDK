#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNFBMCACGEP_ADCKADDFMKE_OFFSET UNITYSDK_OFFSET(0xDA4C1F0)
#define CNFBMCACGEP_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4C190)
#define CNFBMCACGEP_LOCK_OFFSET UNITYSDK_OFFSET(0xDA4C1A0)
#define CNFBMCACGEP_UNLOCK_OFFSET UNITYSDK_OFFSET(0xDA4C430)

	class CNFBMCACGEP : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + CNFBMCACGEP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CNFBMCACGEP_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CNFBMCACGEP_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void ADCKADDFMKE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CNFBMCACGEP_ADCKADDFMKE_OFFSET))(this, a1);
		}

	};
