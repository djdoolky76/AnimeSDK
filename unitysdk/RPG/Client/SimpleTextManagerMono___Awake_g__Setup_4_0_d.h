#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SimpleTextManagerMono; }
namespace System { class Object; }

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_CTOR_OFFSET UNITYSDK_OFFSET(0x1B413EC0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B413EE0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B413F30)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B413F90)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B413F40)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B413ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono___Awake_g__Setup_4_0_d_TypeDefinitionIndex = 74729;

	class SimpleTextManagerMono___Awake_g__Setup_4_0_d : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::SimpleTextManagerMono* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO___AWAKE_G__SETUP_4_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
