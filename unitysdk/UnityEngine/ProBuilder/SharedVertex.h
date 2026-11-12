#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class SharedVertex; }

#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_ADD_OFFSET UNITYSDK_OFFSET(0x2050A960)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x20538590)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_CONTAINS_OFFSET UNITYSDK_OFFSET(0x205385B0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_COPYTO_OFFSET UNITYSDK_OFFSET(0x20538600)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20538490)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_CTOR_OFFSET UNITYSDK_OFFSET(0x205288D0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x2050B280)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTEXLOOKUP_OFFSET UNITYSDK_OFFSET(0x205386A0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTICESWITHPOSITIONS_OFFSET UNITYSDK_OFFSET(0x205045A0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x20538480)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x20508490)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x20538680)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x205084B0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVEANDSHIFT_OFFSET UNITYSDK_OFFSET(0x20539880)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVE_OFFSET UNITYSDK_OFFSET(0x20538620)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SETCOINCIDENT_OFFSET UNITYSDK_OFFSET(0x2050A390)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x20538530)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SHIFTINDEXES_OFFSET UNITYSDK_OFFSET(0x20538E20)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SORTEDREMOVEANDSHIFT_OFFSET UNITYSDK_OFFSET(0x20539920)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x20538580)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_1_OFFSET UNITYSDK_OFFSET(0x20539710)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0x20538EC0)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20538560)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SharedVertex_TypeDefinitionIndex = 45508;

	class SharedVertex : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_Vertices; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::ProBuilder::SharedVertex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::SharedVertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_CTOR_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_arrayInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ARRAYINTERNAL_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Int32>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSTRING_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Add(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GET_ISREADONLY_OFFSET))(this);
		}

		static ::System::Void GetSharedVertexLookup(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTEXLOOKUP_OFFSET))(a1, a2);
		}

		::System::Void ShiftIndexes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SHIFTINDEXES_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices_1(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_TOSHAREDVERTICES_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* GetSharedVerticesWithPositions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_GETSHAREDVERTICESWITHPOSITIONS_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* RemoveAndShift(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_REMOVEANDSHIFT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* SortedRemoveAndShift(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SORTEDREMOVEANDSHIFT_OFFSET))(a1, a2);
		}

		static ::System::Void SetCoincident(::System::Object* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX_SETCOINCIDENT_OFFSET))(a1, a2);
		}

	};
}
