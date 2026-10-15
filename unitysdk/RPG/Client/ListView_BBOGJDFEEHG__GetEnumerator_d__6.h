#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ListView_BBOGJDFEEHG; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0xD3F5E20)
#define RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD3F5EE0)
#define RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_GAMEOBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD3F5F70)
#define RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD3F5FD0)
#define RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD3F5F80)
#define RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3F5ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int ListView_BBOGJDFEEHG__GetEnumerator_d__6_TypeDefinitionIndex = 72558;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class ListView_BBOGJDFEEHG__GetEnumerator_d__6 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* __2__current; // 0x10
		::RPG::Client::ListView_BBOGJDFEEHG* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 _n_5__2; // 0x24
		::System::Int32 _i_5__3; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::GameObject* System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_GAMEOBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_BBOGJDFEEHG__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
