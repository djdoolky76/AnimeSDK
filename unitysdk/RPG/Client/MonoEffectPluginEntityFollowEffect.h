#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class GIMGIMFGBFF;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FBE50)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xD7FC070)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FBF10)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FBDC0)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD7FC060)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xD7FBFD0)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7FBD60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginEntityFollowEffect_TypeDefinitionIndex = 70056;

	class MonoEffectPluginEntityFollowEffect : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::Transform* FollowNode; // 0x28
		::System::Boolean FollowRotation; // 0x30
		::System::Boolean FollowPositionY; // 0x31
		::System::Byte _padding0[0x6];
		::GIMGIMFGBFF* KADDKEGNCHE; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void OnAnimatorMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_ONANIMATORMOVE_OFFSET))(this);
		}

		::GIMGIMFGBFF* get_Behavior()
		{
			return ((::GIMGIMFGBFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
