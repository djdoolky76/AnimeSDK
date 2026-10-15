#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOABGMGNKGA;
class NNDAJDLAHNC;
namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace System { class Object; }

#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_CTOR_OFFSET UNITYSDK_OFFSET(0xD527680)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD5276A0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD5277B0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD527810)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD5277C0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD527690)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_MapObjectsUpdateRequest___WaitForEntityLoaded_d__25_TypeDefinitionIndex = 60866;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
	class Map_MapObjectsUpdateRequest___WaitForEntityLoaded_d__25 : public ::System::Object
	{
	public:
		::NNDAJDLAHNC* __2__current; // 0x10
		::EOABGMGNKGA* mapObject; // 0x18
		::RPG::Client::Map_MapObjectsUpdateRequest* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_MOVENEXT_OFFSET))(this);
		}

		::NNDAJDLAHNC* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::NNDAJDLAHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST___WAITFORENTITYLOADED_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
