#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client { class ShareModule; }
namespace System { class Object; }

#define RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_CTOR_OFFSET UNITYSDK_OFFSET(0xE0B7820)
#define RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE0B7C80)
#define RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE0B8000)
#define RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE0B8060)
#define RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE0B8010)
#define RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0B7C70)

namespace RPG::Client
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
	class ShareModule___GetShareFrameCaptureProcess_d__9 : public ::System::Object
	{
	public:
		::RPG::Client::FrameCaptureManager* _frameCaptureManager_5__2; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::Client::ShareModule* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE___GETSHAREFRAMECAPTUREPROCESS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
