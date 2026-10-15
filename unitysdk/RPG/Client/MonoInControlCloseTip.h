#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOINCONTROLCLOSETIP_AWAKE_OFFSET UNITYSDK_OFFSET(0xD838790)
#define RPG_CLIENT_MONOINCONTROLCLOSETIP_CTOR_OFFSET UNITYSDK_OFFSET(0xD838A40)
#define RPG_CLIENT_MONOINCONTROLCLOSETIP_MFNBDDBJGNE_OFFSET UNITYSDK_OFFSET(0xD8389F0)
#define RPG_CLIENT_MONOINCONTROLCLOSETIP_MJJIDDEIJJH_OFFSET UNITYSDK_OFFSET(0xD8388A0)
#define RPG_CLIENT_MONOINCONTROLCLOSETIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD838950)

namespace RPG::Client
{
	class MonoInControlCloseTip : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* MONLPLNGIOJ; // 0x18
		::UnityEngine::Transform* PGPBJLGKAMI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCLOSETIP_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCLOSETIP_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCLOSETIP_ONDESTROY_OFFSET))(this);
		}

		::System::Void MFNBDDBJGNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCLOSETIP_MFNBDDBJGNE_OFFSET))(this, a1);
		}

		::System::Void MJJIDDEIJJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCLOSETIP_MJJIDDEIJJH_OFFSET))(this);
		}

	};
}
