#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_CTOR_OFFSET UNITYSDK_OFFSET(0x167540A0)
#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16754860)
#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x167554B0)
#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16755400)
#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16755530)
#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16755460)
#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16755410)
#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167544F0)
#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x16754560)
#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x16754660)
#define FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x16754760)

inline static constexpr unsigned int FKDIDBGBGMF__ForEachNeighbours_d__22_TypeDefinitionIndex = 49950;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
	class FKDIDBGBGMF__ForEachNeighbours_d__22 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::FKDIDBGBGMF>* __7__wrap1; // 0x10
		::FKDIDBGBGMF __4__this; // 0x18
		::FKDIDBGBGMF __2__current; // 0x28
		::FKDIDBGBGMF __3____4__this; // 0x38
		::System::Int32 __1__state; // 0x48
		::System::Int32 __l__initialThreadId; // 0x4C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22___M__FINALLY3_OFFSET))(this);
		}

		::FKDIDBGBGMF System_Collections_Generic_IEnumerator_RPGTools_Octree_Generation_OctreeNodePtr__get_Current()
		{
			return ((::FKDIDBGBGMF(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::FKDIDBGBGMF>* System_Collections_Generic_IEnumerable_RPGTools_Octree_Generation_OctreeNodePtr__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::FKDIDBGBGMF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF__FOREACHNEIGHBOURS_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
