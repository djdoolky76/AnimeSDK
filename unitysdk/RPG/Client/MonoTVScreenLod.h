#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class NGPNLKHIIMN;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOTVSCREENLOD_AWAKE_OFFSET UNITYSDK_OFFSET(0xE2BB310)
#define RPG_CLIENT_MONOTVSCREENLOD_CTOR_OFFSET UNITYSDK_OFFSET(0xE2BB4E0)
#define RPG_CLIENT_MONOTVSCREENLOD_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xE2BB4D0)
#define RPG_CLIENT_MONOTVSCREENLOD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE2BB440)
#define RPG_CLIENT_MONOTVSCREENLOD_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE2BB390)
#define RPG_CLIENT_MONOTVSCREENLOD_UPDATE_OFFSET UNITYSDK_OFFSET(0xE2BB3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTVScreenLod_TypeDefinitionIndex = 72724;

	class MonoTVScreenLod : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* KeyPerProp; // 0x18
		::UnityEngine::GameObject* videoPlayerLod0; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* framePlayerLod1; // 0x28
		::NGPNLKHIIMN* _Behavior; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_ONDESTROY_OFFSET))(this);
		}

		::NGPNLKHIIMN* get_Behavior()
		{
			return ((::NGPNLKHIIMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
