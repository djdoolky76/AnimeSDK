#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_CTOR_OFFSET UNITYSDK_OFFSET(0xD600600)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD600FB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD6010C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD601030)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD601140)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD601090)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD601040)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD600FA0)

namespace RPG::Client::MechCraft::View
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
	class MechCraftCraftBoardGroundControl___IterateCells_d__31 : public ::System::Object
	{
	public:
		::System::Int32 __3__width; // 0x10
		::UnityEngine::Vector2Int __2__current; // 0x14
		::System::Int32 _x_5__3; // 0x1C
		::System::Int32 __3__height; // 0x20
		::System::Int32 height; // 0x24
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Int32 _y_5__2; // 0x2C
		::System::Int32 __1__state; // 0x30
		::System::Int32 width; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::Vector2Int System_Collections_Generic_IEnumerator_UnityEngine_Vector2Int__get_Current()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_VECTOR2INT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>* System_Collections_Generic_IEnumerable_UnityEngine_Vector2Int__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_VECTOR2INT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___ITERATECELLS_D__31_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
