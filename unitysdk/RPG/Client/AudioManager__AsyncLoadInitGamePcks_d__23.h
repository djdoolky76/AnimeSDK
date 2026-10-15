#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AudioManager; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_CTOR_OFFSET UNITYSDK_OFFSET(0xC6B1550)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC6BED10)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC6BEF70)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC6BEFD0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC6BEF80)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6BED00)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager__AsyncLoadInitGamePcks_d__23_TypeDefinitionIndex = 59734;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class AudioManager__AsyncLoadInitGamePcks_d__23 : public ::System::Object
	{
	public:
		::System::Action* onLoaded; // 0x10
		::RPG::Client::AudioManager* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
