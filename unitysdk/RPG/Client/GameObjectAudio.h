#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GeneralAudioItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_GAMEOBJECTAUDIO_AGFLPACHBOO_OFFSET UNITYSDK_OFFSET(0xD0A2770)
#define RPG_CLIENT_GAMEOBJECTAUDIO_CTOR_OFFSET UNITYSDK_OFFSET(0xD0A2900)
#define RPG_CLIENT_GAMEOBJECTAUDIO_DFACMDKIJCB_OFFSET UNITYSDK_OFFSET(0xD0A2810)
#define RPG_CLIENT_GAMEOBJECTAUDIO_DODISABLE_OFFSET UNITYSDK_OFFSET(0xD0A2070)
#define RPG_CLIENT_GAMEOBJECTAUDIO_DOENABLE_OFFSET UNITYSDK_OFFSET(0xD0A1F40)
#define RPG_CLIENT_GAMEOBJECTAUDIO_EDCOPJNFNFF_OFFSET UNITYSDK_OFFSET(0xD0A2860)
#define RPG_CLIENT_GAMEOBJECTAUDIO_EDHLKCEAPEF_OFFSET UNITYSDK_OFFSET(0xD0A2660)
#define RPG_CLIENT_GAMEOBJECTAUDIO_IIPJOGPNONH_OFFSET UNITYSDK_OFFSET(0xD0A28B0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_KCKMFKICBOI_OFFSET UNITYSDK_OFFSET(0xD0A20C0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_KIDMJFHHLHK_OFFSET UNITYSDK_OFFSET(0xD0A1F90)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD0A2370)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD0A22D0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xD0A25C0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xD0A2610)
#define RPG_CLIENT_GAMEOBJECTAUDIO_UPDATE_OFFSET UNITYSDK_OFFSET(0xD0A2400)

namespace RPG::Client
{
	class GameObjectAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::GeneralAudioItem*>* EnterEventNames; // 0x18
		::Il2CppArray<::System::String*>* ExitEventNames; // 0x20
		::System::Boolean StopEnterEventOnDisable; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single PGMIOKKLHIE; // 0x2C
		::System::Collections::Generic::List_1<::RPG::Client::GeneralAudioItem*>* LPCOCKFGHKM; // 0x30
		::System::Boolean GBOAMPEGJBE; // 0x38
		::System::Boolean ACAPCHBDIBF; // 0x39
		::System::Boolean _LimitRange; // 0x3A
		::System::Byte _padding1[0x1];
		::System::Single _MaxRange; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_CTOR_OFFSET))(this);
		}

		::System::Void DoEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_DOENABLE_OFFSET))(this);
		}

		::System::Void DoDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_DODISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_UPDATE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void EDHLKCEAPEF(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_EDHLKCEAPEF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 AGFLPACHBOO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_AGFLPACHBOO_OFFSET))(this);
		}

		::System::Single DFACMDKIJCB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_DFACMDKIJCB_OFFSET))(this);
		}

		::System::Void EDCOPJNFNFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_EDCOPJNFNFF_OFFSET))(this);
		}

		::System::Void IIPJOGPNONH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_IIPJOGPNONH_OFFSET))(this);
		}

		::System::Void KIDMJFHHLHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_KIDMJFHHLHK_OFFSET))(this);
		}

		::System::Void KCKMFKICBOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_KCKMFKICBOI_OFFSET))(this);
		}

	};
}
