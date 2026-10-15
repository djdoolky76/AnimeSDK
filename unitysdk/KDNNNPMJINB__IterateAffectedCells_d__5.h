#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLHLAIJKMOD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class CHGHIALKMFM;
class KDNNNPMJINB;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56B680)
#define KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C56B780)
#define KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C56C220)
#define KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C56C190)
#define KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C56C2B0)
#define KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C56C1F0)
#define KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C56C1A0)
#define KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C56B750)
#define KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C56B770)

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class KDNNNPMJINB__IterateAffectedCells_d__5 : public ::System::Object
	{
	public:
		::KDNNNPMJINB* __4__this; // 0x10
		::System::Func_2<::System::Int32, ::System::Boolean>* _directionalPosIsInRange_5__4; // 0x18
		::System::Object* __7__wrap4; // 0x20
		::System::Byte _padding0[0x18];
		::System::Object* __8__1; // 0x40
		::CHGHIALKMFM* mold; // 0x48
		::CHGHIALKMFM* __3__mold; // 0x50
		::PLHLAIJKMOD __3__transform; // 0x58
		::System::Int32 __1__state; // 0x64
		::System::Int32 _perpendicularPos_5__6; // 0x68
		::System::Int32 __l__initialThreadId; // 0x6C
		::System::Int32 _directionalPos_5__7; // 0x70
		::UnityEngine::Vector2Int __2__current; // 0x74
		::PLHLAIJKMOD transform; // 0x7C
		::System::Int32 _directionalDimensionDelta_5__2; // 0x88
		::System::Int32 _perpendicularDimensionIndex_5__3; // 0x8C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5___M__FINALLY1_OFFSET))(this);
		}

		::UnityEngine::Vector2Int System_Collections_Generic_IEnumerator_UnityEngine_Vector2Int__get_Current()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>* System_Collections_Generic_IEnumerable_UnityEngine_Vector2Int__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB__ITERATEAFFECTEDCELLS_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
