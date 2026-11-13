#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class RPGProfilerMarker; }

#define RPG_CLIENT_MAIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x19488540)
#define RPG_CLIENT_MAIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x19488B90)
#define RPG_CLIENT_MAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x19488B80)
#define RPG_CLIENT_MAIN_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x19488AB0)
#define RPG_CLIENT_MAIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19488B00)
#define RPG_CLIENT_MAIN_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x19488880)
#define RPG_CLIENT_MAIN_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x19488900)
#define RPG_CLIENT_MAIN_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x19488980)
#define RPG_CLIENT_MAIN_START_OFFSET UNITYSDK_OFFSET(0x19488710)
#define RPG_CLIENT_MAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0x19488A10)

namespace RPG::Client
{
	inline static constexpr unsigned int Main_TypeDefinitionIndex = 70229;

	class Main : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _lastFixedUpdateFrameCount; // 0x18
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateMainMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "Main")->GetStaticField(0x553D0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateMainMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "Main")->GetStaticField(0x553D8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePhysicsSyncTransformsMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "Main")->GetStaticField(0x553E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_START_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_LATEUPDATE_OFFSET))(this);
		}

	};
}
