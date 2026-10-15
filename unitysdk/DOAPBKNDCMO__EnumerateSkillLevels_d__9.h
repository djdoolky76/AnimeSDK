#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class DOAPBKNDCMO;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDCF40)
#define DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11FDD8C0)
#define DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11FDDA70)
#define DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11FDD9C0)
#define DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11FDDAD0)
#define DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11FDDA20)
#define DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11FDD9D0)
#define DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FDD8A0)
#define DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x11FDD8B0)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
	class DOAPBKNDCMO__EnumerateSkillLevels_d__9 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x18];
		::DOAPBKNDCMO* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::ValueTuple __2__current; // 0x3C
		::System::Int32 __l__initialThreadId; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9___M__FINALLY1_OFFSET))(this);
		}

		::System::ValueTuple System_Collections_Generic_IEnumerator_System_ValueTuple_System_UInt32_System_UInt32___get_Current()
		{
			return ((::System::ValueTuple(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple>* System_Collections_Generic_IEnumerable_System_ValueTuple_System_UInt32_System_UInt32___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO__ENUMERATESKILLLEVELS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
