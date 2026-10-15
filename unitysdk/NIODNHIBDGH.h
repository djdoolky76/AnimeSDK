#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIODNHIBDGH_ADCKADDFMKE_OFFSET UNITYSDK_OFFSET(0xBC05750)
#define NIODNHIBDGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBC056F0)
#define NIODNHIBDGH_LOCK_OFFSET UNITYSDK_OFFSET(0xBC05700)
#define NIODNHIBDGH_UNLOCK_OFFSET UNITYSDK_OFFSET(0xBC057F0)

inline static constexpr unsigned int NIODNHIBDGH_TypeDefinitionIndex = 74786;

	class NIODNHIBDGH : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + NIODNHIBDGH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NIODNHIBDGH_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NIODNHIBDGH_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void ADCKADDFMKE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NIODNHIBDGH_ADCKADDFMKE_OFFSET))(this, a1);
		}

	};
