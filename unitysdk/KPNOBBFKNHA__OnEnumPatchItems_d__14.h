#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNOBBFKNHA;
class LFCKLPMBGGI;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C7510)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB5C77F0)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BLOCKHPATCHINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB5C7D80)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BLOCKHPATCHINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB5C7D10)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB5C7E00)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB5C7D70)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB5C7D20)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5C76B0)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB5C76F0)

inline static constexpr unsigned int KPNOBBFKNHA__OnEnumPatchItems_d__14_TypeDefinitionIndex = 59486;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	class KPNOBBFKNHA__OnEnumPatchItems_d__14 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::LFCKLPMBGGI*>* __7__wrap1; // 0x10
		::KPNOBBFKNHA* __4__this; // 0x18
		::LFCKLPMBGGI* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA__ONENUMPATCHITEMS_D__14___M__FINALLY1_OFFSET))(this);
		}

		::LFCKLPMBGGI* System_Collections_Generic_IEnumerator_RPG_Client_BlockHPatchInfo__get_Current()
		{
			return ((::LFCKLPMBGGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BLOCKHPATCHINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::LFCKLPMBGGI*>* System_Collections_Generic_IEnumerable_RPG_Client_BlockHPatchInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::LFCKLPMBGGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BLOCKHPATCHINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
