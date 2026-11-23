#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::UIElements { class SortColumnDescription; }
template <typename T> class F875E7A8F1781006;

#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x42F37C0)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_ADD_OFFSET UNITYSDK_OFFSET(0x42F2F40)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_CLEAR_OFFSET UNITYSDK_OFFSET(0x42F2FB0)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x42F3240)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_COPYTO_OFFSET UNITYSDK_OFFSET(0x42F32A0)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x42F3370)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x42F3860)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x42F38B0)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_INSERT_OFFSET UNITYSDK_OFFSET(0x42F33C0)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_ONDESCRIPTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x38EE130)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x42F3900)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_REMOVE_OFFSET UNITYSDK_OFFSET(0x42F35F0)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x42F3370)
#define UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x42F3740)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int SortColumnDescriptions_TypeDefinitionIndex = 13355;

	class SortColumnDescriptions : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>* m_Descriptions; // 0x10
		::System::Action* changed; // 0x18

		::System::Boolean Contains(::UnityEngine::UIElements::SortColumnDescription* EC35F88C87A83BEB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::SortColumnDescription*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_CONTAINS_OFFSET))(this, EC35F88C87A83BEB);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_GET_COUNT_OFFSET))(this);
		}

		::System::Void remove_changed(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_REMOVE_CHANGED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void OnDescriptionChanged(::UnityEngine::UIElements::SortColumnDescription* E7F13465F7E064E1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::SortColumnDescription*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_ONDESCRIPTIONCHANGED_OFFSET))(this, E7F13465F7E064E1);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Insert(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::UIElements::SortColumnDescription* E7F13465F7E064E1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UIElements::SortColumnDescription*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_INSERT_OFFSET))(this, B48C66E5FB2449C6, E7F13465F7E064E1);
		}

		::System::Boolean Remove(::UnityEngine::UIElements::SortColumnDescription* E7F13465F7E064E1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::SortColumnDescription*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_REMOVE_OFFSET))(this, E7F13465F7E064E1);
		}

		::System::Void add_changed(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_ADD_CHANGED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void CopyTo(::Il2CppArray<::UnityEngine::UIElements::SortColumnDescription*>* EDF8D5B13A3EE433, ::System::Int32 A85E013ED48C7629)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIElements::SortColumnDescription*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_COPYTO_OFFSET))(this, EDF8D5B13A3EE433, A85E013ED48C7629);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_CLEAR_OFFSET))(this);
		}

		::F875E7A8F1781006<::UnityEngine::UIElements::SortColumnDescription*>* GetEnumerator()
		{
			return ((::F875E7A8F1781006<::UnityEngine::UIElements::SortColumnDescription*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Add(::UnityEngine::UIElements::SortColumnDescription* EC35F88C87A83BEB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::SortColumnDescription*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SORTCOLUMNDESCRIPTIONS_ADD_OFFSET))(this, EC35F88C87A83BEB);
		}
	};
}
