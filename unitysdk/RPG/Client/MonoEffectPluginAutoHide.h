#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectHideCameraMode.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EAIPNIFBLOP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C43F0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_CTOR_OFFSET UNITYSDK_OFFSET(0xD7C4610)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C44D0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C4310)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7C4590)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD7C4600)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C4270)

namespace RPG::Client
{
	class MonoEffectPluginAutoHide : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::EffectHideCameraMode CameraMode; // 0x28
		::System::Boolean HideByTargetScale; // 0x2C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 TargetScale; // 0x30
		::System::Boolean HideByMapRotationSwitch; // 0x3C
		::System::Boolean HideByTargetEffectInvisible; // 0x3D
		::System::Byte _padding1[0x2];
		::System::String* FollowTargetEffectUniqueName; // 0x40
		::System::Boolean HideWhenFollowTargetEffectNotExist; // 0x48
		::System::Boolean HideWhenUIOpen; // 0x49
		::System::Byte _padding2[0x6];
		::System::Collections::Generic::List_1<::System::String*>* HideUIPageList; // 0x50
		::EAIPNIFBLOP* KADDKEGNCHE; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::EAIPNIFBLOP* get_Behavior()
		{
			return ((::EAIPNIFBLOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
