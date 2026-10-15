#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/System/Object.h"
class MAJIFAGGCEG;
class PEDNMPONAAO;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0xB849BB0)
#define MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB84A940)
#define MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB84AB70)
#define MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB84AB00)
#define MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB84ABD0)
#define MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB84AB60)
#define MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB84AB10)
#define MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB84A920)
#define MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB84A930)

inline static constexpr unsigned int MAJIFAGGCEG__EnumerateConfigsByRole_d__6_TypeDefinitionIndex = 62663;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class MAJIFAGGCEG__EnumerateConfigsByRole_d__6 : public ::System::Object
	{
	public:
		::PEDNMPONAAO* __2__current; // 0x10
		::MAJIFAGGCEG* __4__this; // 0x18
		::System::Object* __7__wrap1; // 0x20
		::System::Byte _padding0[0x10];
		::System::Int32 __1__state; // 0x38
		::DNFDBKCPBNM __3__roleIdentifier; // 0x3C
		::DNFDBKCPBNM roleIdentifier; // 0x40
		::System::Int32 __l__initialThreadId; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6___M__FINALLY1_OFFSET))(this);
		}

		::PEDNMPONAAO* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_MultiplePathConfig__get_Current()
		{
			return ((::PEDNMPONAAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::PEDNMPONAAO*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_MultiplePathConfig__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::PEDNMPONAAO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_MULTIPLEPATHCONFIG__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG__ENUMERATECONFIGSBYROLE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
