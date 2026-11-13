#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class WaterLevelBoxman; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_CTOR_OFFSET UNITYSDK_OFFSET(0x1870BC30)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1870DBD0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1870DFB0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1870E010)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1870DFC0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1870DBC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxman___AnimChangeWaterLevel_d__9_TypeDefinitionIndex = 81691;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
	class WaterLevelBoxman___AnimChangeWaterLevel_d__9 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::WaterLevelBoxman* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 oriIndex; // 0x20
		::System::Int32 __1__state; // 0x24
		::UnityEngine::Vector3 _floatVector_5__5; // 0x28
		::System::Single _totalTime_5__3; // 0x34
		::System::Single delay; // 0x38
		::System::Single _singleFinishTime_5__2; // 0x3C
		::System::Single targetWaterLevelChangeDelay; // 0x40
		::System::Single _currentTime_5__4; // 0x44
		::System::Int32 newIndex; // 0x48
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN___ANIMCHANGEWATERLEVEL_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
