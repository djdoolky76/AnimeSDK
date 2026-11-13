#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
namespace CriWare { class CriAtomServer; }
namespace System { template <typename T> class Action_1; }

#define CRIWARE_CRIATOMSERVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EC650D0)
#define CRIWARE_CRIATOMSERVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC65630)
#define CRIWARE_CRIATOMSERVER_CONSUMEPCMOUTPUT_OFFSET UNITYSDK_OFFSET(0x1EC654A0)
#define CRIWARE_CRIATOMSERVER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1EC62710)
#define CRIWARE_CRIATOMSERVER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC654B0)
#define CRIWARE_CRIATOMSERVER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC65270)
#define CRIWARE_CRIATOMSERVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC65600)
#define CRIWARE_CRIATOMSERVER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1EC62880)
#define CRIWARE_CRIATOMSERVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1EC64FC0)
#define CRIWARE_CRIATOMSERVER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EC654C0)
#define CRIWARE_CRIATOMSERVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EC651B0)
#define CRIWARE_CRIATOMSERVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC65160)
#define CRIWARE_CRIATOMSERVER_PROCESSAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EC65560)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomServer_TypeDefinitionIndex = 40915;

	class CriAtomServer : public ::CriWare::CriMonoBehaviour
	{
	public:
		::System::Action_1<::System::Boolean>* onApplicationPausePreProcess; // 0x28
		::System::Action_1<::System::Boolean>* onApplicationPausePostProcess; // 0x30
		static ::CriWare::CriAtomServer** StaticGet__instance()
		{
			return (::CriWare::CriAtomServer**)UnitySDK::FromName("CriWare", "CriAtomServer")->GetStaticField(0x5C880);
		}

		static ::System::Boolean* StaticGet_KeepPlayingSoundOnPause()
		{
			return (::System::Boolean*)UnitySDK::FromName("CriWare", "CriAtomServer")->GetStaticField(0x133B0);
		}

		static ::System::Boolean* StaticGet_EnableAutoConsumePcmOutput()
		{
			return (::System::Boolean*)UnitySDK::FromName("CriWare", "CriAtomServer")->GetStaticField(0x133B1);
		}

		static ::System::Boolean* StaticGet_EnableBackgroundPlayback_ANDROID()
		{
			return (::System::Boolean*)UnitySDK::FromName("CriWare", "CriAtomServer")->GetStaticField(0x133B2);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_CCTOR_OFFSET))();
		}

		static ::CriWare::CriAtomServer* get_instance()
		{
			return ((::CriWare::CriAtomServer*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void CreateInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_CREATEINSTANCE_OFFSET))();
		}

		static ::System::Void DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_DESTROYINSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_ONDISABLE_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void ConsumePcmOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_CONSUMEPCMOUTPUT_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void ProcessApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_PROCESSAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

	};
}
