#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_CTOR_OFFSET UNITYSDK_OFFSET(0x157E7C30)
#define FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x157E90A0)
#define FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x157E9C90)
#define FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x157E9BE0)
#define FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x157E9D10)
#define FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x157E9C40)
#define FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x157E9BF0)
#define FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157E9090)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class FKDIDBGBGMF__ForeachSelfNeighbours_d__23 : public ::System::Object
	{
	public:
		::FKDIDBGBGMF __2__current; // 0x10
		::FKDIDBGBGMF __4__this; // 0x20
		::FKDIDBGBGMF __3____4__this; // 0x30
		::System::Int32 _i_5__2; // 0x40
		::System::Int32 __l__initialThreadId; // 0x44
		::System::Int32 __1__state; // 0x48
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_MOVENEXT_OFFSET))(this);
		}

		::FKDIDBGBGMF System_Collections_Generic_IEnumerator_RPGTools_Octree_Generation_OctreeNodePtr__get_Current()
		{
			return ((::FKDIDBGBGMF(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::FKDIDBGBGMF>* System_Collections_Generic_IEnumerable_RPGTools_Octree_Generation_OctreeNodePtr__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::FKDIDBGBGMF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHSELFNEIGHBOURS_D__23_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
