#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class PetInstanceRepository; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CF420)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C1CF8E0)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PET_IPETINSTANCE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C1CFCA0)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PET_IPETINSTANCE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C1CFC30)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C1CFD20)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C1CFC90)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C1CFC40)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1CF8C0)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C1CF8D0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetInstanceRepository__FindByPetIdentifier_d__3_TypeDefinitionIndex = 78011;

	template <typename T1, typename T2, typename T3>
	class PetInstanceRepository__FindByPetIdentifier_d__3 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x10];
		::RPG::Client::Pet::PetInstanceRepository* __4__this; // 0x28
		::RPG::Client::Pet::IPetInstance* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::RPG::Client::Pet::PetIdentifier identifier; // 0x40
		::RPG::Client::Pet::PetIdentifier __3__identifier; // 0x48
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3___M__FINALLY1_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetInstance* System_Collections_Generic_IEnumerator_RPG_Client_Pet_IPetInstance__get_Current()
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PET_IPETINSTANCE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::Pet::IPetInstance*>* System_Collections_Generic_IEnumerable_RPG_Client_Pet_IPetInstance__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PET_IPETINSTANCE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY__FINDBYPETIDENTIFIER_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
