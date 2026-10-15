#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHBPBPEINCA;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC355A0)
#define AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EC36220)
#define AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SOFA_CORE_IVISUALTREEELEMENT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC36A20)
#define AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SOFA_CORE_IVISUALTREEELEMENT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC369B0)
#define AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC36AA0)
#define AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC36A10)
#define AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EC369C0)
#define AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC360D0)
#define AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1EC36120)

inline static constexpr unsigned int AMNHNMCJDAL__GetVisualTreeDescendants_d__2_TypeDefinitionIndex = 44103;

	template <typename T1, typename T2>
	class AMNHNMCJDAL__GetVisualTreeDescendants_d__2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::NHBPBPEINCA*>* __7__wrap4; // 0x10
		::NHBPBPEINCA* __3__element; // 0x18
		::NHBPBPEINCA* _child_5__4; // 0x20
		::NHBPBPEINCA* __2__current; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::NHBPBPEINCA*>* _children_5__2; // 0x30
		::NHBPBPEINCA* element; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Int32 _i_5__3; // 0x44
		::System::Int32 __l__initialThreadId; // 0x48
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2___M__FINALLY1_OFFSET))(this);
		}

		::NHBPBPEINCA* System_Collections_Generic_IEnumerator_Sofa_Core_IVisualTreeElement__get_Current()
		{
			return ((::NHBPBPEINCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SOFA_CORE_IVISUALTREEELEMENT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NHBPBPEINCA*>* System_Collections_Generic_IEnumerable_Sofa_Core_IVisualTreeElement__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NHBPBPEINCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SOFA_CORE_IVISUALTREEELEMENT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNHNMCJDAL__GETVISUALTREEDESCENDANTS_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
