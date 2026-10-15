#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHMJCBDIFKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1577E130)
#define FHMJCBDIFKH_LOCK_OFFSET UNITYSDK_OFFSET(0x1577E140)
#define FHMJCBDIFKH_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1577E2B0)

inline static constexpr unsigned int FHMJCBDIFKH_TypeDefinitionIndex = 74791;

	class FHMJCBDIFKH : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + FHMJCBDIFKH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FHMJCBDIFKH_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FHMJCBDIFKH_UNLOCK_OFFSET))(this, a1);
		}

	};
