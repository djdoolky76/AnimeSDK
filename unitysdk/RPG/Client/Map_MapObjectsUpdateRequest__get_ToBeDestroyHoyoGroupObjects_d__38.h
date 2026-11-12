#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_CTOR_OFFSET UNITYSDK_OFFSET(0xDF78A20)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDF79CA0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MAPENTITYDEF__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDF7A050)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDF79FE0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDF7A0B0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDF7A040)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDF79FF0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF79C60)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDF79C70)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xDF79C90)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0xDF79C80)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_MapObjectsUpdateRequest__get_ToBeDestroyHoyoGroupObjects_d__38_TypeDefinitionIndex = 62248;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38>
	class Map_MapObjectsUpdateRequest__get_ToBeDestroyHoyoGroupObjects_d__38 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap2; // 0x10
		::System::Byte _padding0[0x18];
		::RPG::Client::Map_MapObjectsUpdateRequest* __4__this; // 0x30
		::System::Object* __7__wrap1; // 0x38
		::System::Byte _padding1[0x10];
		::RPG::Client::MapEntityDef* __2__current; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::Int32 __l__initialThreadId; // 0x5C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38___M__FINALLY3_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* System_Collections_Generic_IEnumerator_RPG_Client_MapEntityDef__get_Current()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* System_Collections_Generic_IEnumerable_RPG_Client_MapEntityDef__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MAPENTITYDEF__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__GET_TOBEDESTROYHOYOGROUPOBJECTS_D__38_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
