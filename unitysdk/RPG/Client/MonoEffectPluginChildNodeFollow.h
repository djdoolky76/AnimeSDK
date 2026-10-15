#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class ICGFMLLBJMJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F0BB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0xD7F0DF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F0C90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F0B20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7F0D50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD7F0DE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F0A90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginChildNodeFollow_TypeDefinitionIndex = 70050;

	class MonoEffectPluginChildNodeFollow : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ChildNodeList; // 0x28
		::System::Boolean FollowPosition; // 0x30
		::System::Boolean FollowRotation; // 0x31
		::System::Byte _padding0[0x6];
		::ICGFMLLBJMJ* KADDKEGNCHE; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::ICGFMLLBJMJ* get_Behavior()
		{
			return ((::ICGFMLLBJMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
