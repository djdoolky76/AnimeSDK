#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace CloudGame::MailBox { class Mailbox; }
namespace CloudGame::MailBox { class Mailbox_ReceiveCallbackHandler; }
namespace System { template <typename T> class Action_1; }

#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDA7A50)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_CONNECT_OFFSET UNITYSDK_OFFSET(0x1CDA7120)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA7A40)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GAMECONTROLRECEIVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CDA6C00)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1CDA6D10)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_GYRO_OFFSET UNITYSDK_OFFSET(0x1CDA6DF0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEQUATERNION_OFFSET UNITYSDK_OFFSET(0x1CDA7000)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEVECTOR3_OFFSET UNITYSDK_OFFSET(0x1CDA6F10)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SEND_OFFSET UNITYSDK_OFFSET(0x1CDA7840)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SETIMUENABLED_OFFSET UNITYSDK_OFFSET(0x1CDA7620)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1CDA6D80)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_GYRO_OFFSET UNITYSDK_OFFSET(0x1CDA6E70)

namespace CloudGame::MailBox::GameControl
{
	inline static constexpr unsigned int GameControl_TypeDefinitionIndex = 7558;

	class GameControl : public ::System::Object
	{
	public:
		static ::CloudGame::MailBox::Mailbox** StaticGet_mailbox()
		{
			return (::CloudGame::MailBox::Mailbox**)UnitySDK::FromName("CloudGame.MailBox.GameControl", "GameControl")->GetStaticField(0x50BC0);
		}

		static ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler** StaticGet_receiveCallback()
		{
			return (::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler**)UnitySDK::FromName("CloudGame.MailBox.GameControl", "GameControl")->GetStaticField(0x50BC8);
		}

		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet_OnReceiveData()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)UnitySDK::FromName("CloudGame.MailBox.GameControl", "GameControl")->GetStaticField(0x50BD0);
		}

		static ::CloudGame::MailBox::GameControl::Gyroscope* StaticGet__gyro_k__BackingField()
		{
			return (::CloudGame::MailBox::GameControl::Gyroscope*)UnitySDK::FromName("CloudGame.MailBox.GameControl", "GameControl")->GetStaticField(0xFF40);
		}

		static ::UnityEngine::Vector3* StaticGet__acceleration_k__BackingField()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("CloudGame.MailBox.GameControl", "GameControl")->GetStaticField(0xFF80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_acceleration()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_ACCELERATION_OFFSET))();
		}

		static ::System::Void set_acceleration(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_ACCELERATION_OFFSET))(a1);
		}

		static ::CloudGame::MailBox::GameControl::Gyroscope get_gyro()
		{
			return ((::CloudGame::MailBox::GameControl::Gyroscope(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_GYRO_OFFSET))();
		}

		static ::System::Void set_gyro(::CloudGame::MailBox::GameControl::Gyroscope a1)
		{
			return ((::System::Void(*)(::CloudGame::MailBox::GameControl::Gyroscope))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_GYRO_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 parseVector3(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEVECTOR3_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion parseQuaternion(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEQUATERNION_OFFSET))(a1, a2);
		}

		static ::System::Boolean Connect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_CONNECT_OFFSET))();
		}

		static ::System::Void GameControlReceiveCallback(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GAMECONTROLRECEIVECALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void SetImuEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SETIMUENABLED_OFFSET))(a1);
		}

		static ::System::Int64 Send(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SEND_OFFSET))(a1);
		}

	};
}
