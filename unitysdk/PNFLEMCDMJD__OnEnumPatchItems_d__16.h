#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFCKLPMBGGI;
class PNFLEMCDMJD;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_CTOR_OFFSET UNITYSDK_OFFSET(0xC3310A0)
#define PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC3312C0)
#define PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BLOCKHPATCHINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC331A20)
#define PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BLOCKHPATCHINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC3319B0)
#define PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC331AA0)
#define PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC331A10)
#define PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC3319C0)
#define PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC331180)
#define PNFLEMCDMJD__ONENUMPATCHITEMS_D__16___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xC3311C0)

inline static constexpr unsigned int PNFLEMCDMJD__OnEnumPatchItems_d__16_TypeDefinitionIndex = 59484;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
	class PNFLEMCDMJD__OnEnumPatchItems_d__16 : public ::System::Object
	{
	public:
		::LFCKLPMBGGI* __2__current; // 0x10
		::System::Collections::Generic::IEnumerator_1<::LFCKLPMBGGI*>* __7__wrap1; // 0x18
		::PNFLEMCDMJD* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD__ONENUMPATCHITEMS_D__16___M__FINALLY1_OFFSET))(this);
		}

		::LFCKLPMBGGI* System_Collections_Generic_IEnumerator_RPG_Client_BlockHPatchInfo__get_Current()
		{
			return ((::LFCKLPMBGGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BLOCKHPATCHINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::LFCKLPMBGGI*>* System_Collections_Generic_IEnumerable_RPG_Client_BlockHPatchInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::LFCKLPMBGGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BLOCKHPATCHINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD__ONENUMPATCHITEMS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
