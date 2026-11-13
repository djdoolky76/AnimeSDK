#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POKKHJNJABH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8933F0)
#define POKKHJNJABH_LOCK_OFFSET UNITYSDK_OFFSET(0x1B893400)
#define POKKHJNJABH_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1B893460)

inline static constexpr unsigned int POKKHJNJABH_TypeDefinitionIndex = 76941;

	class POKKHJNJABH : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + POKKHJNJABH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + POKKHJNJABH_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + POKKHJNJABH_UNLOCK_OFFSET))(this, a1);
		}

	};
