#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Object.h"
class BLCMFPJDHCC;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_CTOR_OFFSET UNITYSDK_OFFSET(0xC131A20)
#define BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC131B40)
#define BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC131EA0)
#define BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC131DF0)
#define BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC131F20)
#define BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC131E50)
#define BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC131E00)
#define BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC131B20)
#define BLCMFPJDHCC__FOREACHLINKEDNODE_D__7___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xC131B30)

inline static constexpr unsigned int BLCMFPJDHCC__ForEachLinkedNode_d__7_TypeDefinitionIndex = 49941;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class BLCMFPJDHCC__ForEachLinkedNode_d__7 : public ::System::Object
	{
	public:
		::BLCMFPJDHCC* __4__this; // 0x10
		::FKDIDBGBGMF __3__node; // 0x18
		::System::Object* __7__wrap1; // 0x28
		::System::Byte _padding0[0x10];
		::FKDIDBGBGMF node; // 0x40
		::FKDIDBGBGMF __2__current; // 0x50
		::System::Int32 __l__initialThreadId; // 0x60
		::System::Int32 __1__state; // 0x64
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC__FOREACHLINKEDNODE_D__7___M__FINALLY1_OFFSET))(this);
		}

		::FKDIDBGBGMF System_Collections_Generic_IEnumerator_RPGTools_Octree_Generation_OctreeNodePtr__get_Current()
		{
			return ((::FKDIDBGBGMF(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::FKDIDBGBGMF>* System_Collections_Generic_IEnumerable_RPGTools_Octree_Generation_OctreeNodePtr__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::FKDIDBGBGMF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCMFPJDHCC__FOREACHLINKEDNODE_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
