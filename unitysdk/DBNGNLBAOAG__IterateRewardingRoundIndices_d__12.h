#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBNGNLBAOAG;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_CTOR_OFFSET UNITYSDK_OFFSET(0x1B158470)
#define DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B158540)
#define DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B1589C0)
#define DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B158930)
#define DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B158A40)
#define DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B158990)
#define DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B158940)
#define DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B158530)

inline static constexpr unsigned int DBNGNLBAOAG__IterateRewardingRoundIndices_d__12_TypeDefinitionIndex = 62795;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	class DBNGNLBAOAG__IterateRewardingRoundIndices_d__12 : public ::System::Object
	{
	public:
		::DBNGNLBAOAG* __4__this; // 0x10
		::System::Int32 _i_5__2; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int32 __2__current; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Int32 System_Collections_Generic_IEnumerator_System_Int32__get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Int32>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG__ITERATEREWARDINGROUNDINDICES_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
