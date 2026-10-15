#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0xD864C00)
#define RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER_SETSWITCHBACKGROUNDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD864B80)
#define RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER_SWITCHBACKGROUND_OFFSET UNITYSDK_OFFSET(0xD864B00)

namespace RPG::Client
{
	class MonoSpineStoryAnimEventListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnSwitchBackgroundCallback; // 0x18
		::System::String* HPNACMLPFEO; // 0x20
		::System::String* IJCJCNKIMKI; // 0x28
		::System::Boolean GDIGAMFJEFD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER_CTOR_OFFSET))(this);
		}

		::System::Void SwitchBackground()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER_SWITCHBACKGROUND_OFFSET))(this);
		}

		::System::Void SetSwitchBackgroundCallback(::System::Action* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYANIMEVENTLISTENER_SETSWITCHBACKGROUNDCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
