#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class WaterLevelBoxItem; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x1870A4B0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1870A7A0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1870A980)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1870A9E0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1870A990)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1870A790)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxItem__StartMoveAction_d__3_TypeDefinitionIndex = 81688;

	template <typename T1, typename T2, typename T3>
	class WaterLevelBoxItem__StartMoveAction_d__3 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::WaterLevelBoxItem* __4__this; // 0x18
		::RPG::Client::Prop::BoxmanDir dir; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__STARTMOVEACTION_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
