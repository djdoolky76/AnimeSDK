#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGGFDDBCLNE_ADCKADDFMKE_OFFSET UNITYSDK_OFFSET(0xB3DE250)
#define KGGFDDBCLNE_CTOR_OFFSET UNITYSDK_OFFSET(0xB3DE190)
#define KGGFDDBCLNE_LOCK_OFFSET UNITYSDK_OFFSET(0xB3DE1A0)
#define KGGFDDBCLNE_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB3DE2F0)

	class KGGFDDBCLNE : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		// static const ::System::Object DFAFCMNMJIJ; // 0x0
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + KGGFDDBCLNE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + KGGFDDBCLNE_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + KGGFDDBCLNE_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void ADCKADDFMKE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGGFDDBCLNE_ADCKADDFMKE_OFFSET))(this, a1);
		}

	};
