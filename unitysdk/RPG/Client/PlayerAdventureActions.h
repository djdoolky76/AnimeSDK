#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIJLENHLAIJ.h"
namespace InControl { class PlayerTwoAxisAction; }
namespace InControl { class TwoAxisInputControl; }
namespace System { class String; }

#define RPG_CLIENT_PLAYERADVENTUREACTIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AC1F0)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AB350)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS_GET_CAMERAROTATIONACTION_OFFSET UNITYSDK_OFFSET(0x1E2ABFD0)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS_GET_ISCAMERAACTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1E2AC1E0)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS_INIT_OFFSET UNITYSDK_OFFSET(0x1E2AB390)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS_RESETCAMERAROTATIONACTION_OFFSET UNITYSDK_OFFSET(0x1E2ABF30)
#define RPG_CLIENT_PLAYERADVENTUREACTIONS_SETCAMERAROTATIONACTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1E2ABBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerAdventureActions_TypeDefinitionIndex = 62716;

	class PlayerAdventureActions : public ::IIJLENHLAIJ
	{
	public:
		::InControl::TwoAxisInputControl* _CameraRotationActionOverridePsPlatform; // 0x98
		::InControl::PlayerTwoAxisAction* _CameraRotationActionOverride; // 0xA0
		::InControl::PlayerTwoAxisAction* _CameraRotationAction; // 0xA8
		::System::Boolean _IsCameraRotationActionOverride; // 0xB0
		static ::System::String** StaticGet_RightStickLeft()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PlayerAdventureActions")->GetStaticField(0x49770);
		}

		static ::System::String** StaticGet_LeftStickLeft()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PlayerAdventureActions")->GetStaticField(0x49778);
		}

		static ::System::String** StaticGet_LeftStickUp()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PlayerAdventureActions")->GetStaticField(0x49780);
		}

		static ::System::String** StaticGet_RightStickUp()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PlayerAdventureActions")->GetStaticField(0x49788);
		}

		static ::System::String** StaticGet_RightStickRight()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PlayerAdventureActions")->GetStaticField(0x49790);
		}

		static ::System::String** StaticGet_LeftStickRight()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PlayerAdventureActions")->GetStaticField(0x49798);
		}

		static ::System::String** StaticGet_LeftStickDown()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PlayerAdventureActions")->GetStaticField(0x497A0);
		}

		static ::System::String** StaticGet_RightStickDown()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PlayerAdventureActions")->GetStaticField(0x497A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_INIT_OFFSET))(this);
		}

		::System::Void SetCameraRotationActionOverride(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::InControl::TwoAxisInputControl* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_SETCAMERAROTATIONACTIONOVERRIDE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ResetCameraRotationAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_RESETCAMERAROTATIONACTION_OFFSET))(this);
		}

		::InControl::TwoAxisInputControl* get_CameraRotationAction()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_GET_CAMERAROTATIONACTION_OFFSET))(this);
		}

		::System::Boolean get_IsCameraActionOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERADVENTUREACTIONS_GET_ISCAMERAACTIONOVERRIDE_OFFSET))(this);
		}

	};
}
