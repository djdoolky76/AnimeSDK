#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client { class QuaternionRotationControlBehavior_SingleRotation; }
namespace System { class String; }

#define RPG_CLIENT_QUATERNIONROTATIONCONTROLMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xDE0EDC0)
#define RPG_CLIENT_QUATERNIONROTATIONCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xDE0ED70)

namespace RPG::Client
{
	class QuaternionRotationControlMonoPlugin
	{
	public:
		::System::Boolean IfSingleRotation; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion Quaternion; // 0x34
		::System::Boolean IfTwoRotationLerp; // 0x44
		::System::Byte _padding1[0x3];
		::System::Single LerpValue; // 0x48
		::System::Byte _padding2[0x4];
		::RPG::Client::QuaternionRotationControlBehavior_SingleRotation* Rotation1; // 0x50
		::RPG::Client::QuaternionRotationControlBehavior_SingleRotation* Rotation2; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUATERNIONROTATIONCONTROLMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUATERNIONROTATIONCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
