#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNOBBFKNHA;
class LFCKLPMBGGI;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_CTOR_OFFSET UNITYSDK_OFFSET(0xB5CDE40)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB5CE120)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BLOCKHPATCHINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB5CE6B0)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BLOCKHPATCHINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB5CE640)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB5CE730)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB5CE6A0)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB5CE650)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5CDFE0)
#define KPNOBBFKNHA__ONENUMPATCHITEMS_D__14___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB5CE020)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	class KPNOBBFKNHA__OnEnumPatchItems_d__14 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::LFCKLPMBGGI*>* __7__wrap1; // 0x10
		::LFCKLPMBGGI* __2__current; // 0x18
		::KPNOBBFKNHA* __4__this; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Int32 __1__state; // 0x2C
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
