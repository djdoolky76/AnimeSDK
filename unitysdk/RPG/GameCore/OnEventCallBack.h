#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class EKFMIDBJDIA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_GAMECORE_ONEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE712DA0)
#define RPG_GAMECORE_ONEVENTCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE712CA0)
#define RPG_GAMECORE_ONEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE712DD0)
#define RPG_GAMECORE_ONEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xE712D90)

namespace RPG::GameCore
{
	class OnEventCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::EKFMIDBJDIA* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::EKFMIDBJDIA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
