#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCBGHOODCMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1595F5C0)
#define GCBGHOODCMJ_LOCK_OFFSET UNITYSDK_OFFSET(0x1595F5D0)
#define GCBGHOODCMJ_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1595F9E0)

	class GCBGHOODCMJ : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + GCBGHOODCMJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + GCBGHOODCMJ_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + GCBGHOODCMJ_UNLOCK_OFFSET))(this, a1);
		}

	};
