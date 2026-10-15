#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONPKMMDCDAN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define ONPKMMDCDAN__ITERATECELLS_D__12_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57B990)
#define ONPKMMDCDAN__ITERATECELLS_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C57BC10)
#define ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C57BDF0)
#define ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C57BD60)
#define ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C57BE70)
#define ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C57BDC0)
#define ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C57BD70)
#define ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C57BC00)

inline static constexpr unsigned int ONPKMMDCDAN__IterateCells_d__12_TypeDefinitionIndex = 41822;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	class ONPKMMDCDAN__IterateCells_d__12 : public ::System::Object
	{
	public:
		::System::Int32 _y_5__3; // 0x10
		::System::Int32 __l__initialThreadId; // 0x14
		::UnityEngine::Vector2Int boardSize; // 0x18
		::System::Int32 __1__state; // 0x20
		::UnityEngine::Vector2Int __2__current; // 0x24
		::UnityEngine::Vector2Int __3__boardSize; // 0x2C
		::ONPKMMDCDAN __4__this; // 0x34
		::System::Int32 _x_5__2; // 0x38
		::ONPKMMDCDAN __3____4__this; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ONPKMMDCDAN__ITERATECELLS_D__12_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN__ITERATECELLS_D__12_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::Vector2Int System_Collections_Generic_IEnumerator_UnityEngine_Vector2Int__get_Current()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>* System_Collections_Generic_IEnumerable_UnityEngine_Vector2Int__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPKMMDCDAN__ITERATECELLS_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
