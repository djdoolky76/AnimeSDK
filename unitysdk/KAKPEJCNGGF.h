#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KAKPEJCNGGF_ADCKADDFMKE_OFFSET UNITYSDK_OFFSET(0xB2DC690)
#define KAKPEJCNGGF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DC630)
#define KAKPEJCNGGF_LOCK_OFFSET UNITYSDK_OFFSET(0xB2DC640)
#define KAKPEJCNGGF_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB2DC860)

inline static constexpr unsigned int KAKPEJCNGGF_TypeDefinitionIndex = 74775;

	class KAKPEJCNGGF : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + KAKPEJCNGGF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + KAKPEJCNGGF_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + KAKPEJCNGGF_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void ADCKADDFMKE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAKPEJCNGGF_ADCKADDFMKE_OFFSET))(this, a1);
		}

	};
