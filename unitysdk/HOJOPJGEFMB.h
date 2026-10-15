#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOJOPJGEFMB_ADCKADDFMKE_OFFSET UNITYSDK_OFFSET(0x15DAC810)
#define HOJOPJGEFMB_CTOR_OFFSET UNITYSDK_OFFSET(0x15DAC7B0)
#define HOJOPJGEFMB_LOCK_OFFSET UNITYSDK_OFFSET(0x15DAC7C0)
#define HOJOPJGEFMB_UNLOCK_OFFSET UNITYSDK_OFFSET(0x15DAC920)

inline static constexpr unsigned int HOJOPJGEFMB_TypeDefinitionIndex = 74773;

	class HOJOPJGEFMB : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + HOJOPJGEFMB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HOJOPJGEFMB_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HOJOPJGEFMB_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void ADCKADDFMKE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOJOPJGEFMB_ADCKADDFMKE_OFFSET))(this, a1);
		}

	};
