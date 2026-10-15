#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/QingQueEnergyBarIconType.h"
#include "unitysdk/System/Nullable_1.h"
class KJEDLCJFCOJ;
namespace RPG::Client { class Effect_MahJongAutoLayout; }
namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F7D20)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD7F7F30)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F7DD0)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F7CD0)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F7C80)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD7F7F20)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F7C20)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_TICK_OFFSET UNITYSDK_OFFSET(0xD7F7E80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginMahJongItem_TypeDefinitionIndex = 70075;

	class MonoEffectPluginMahJongItem : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::QingQueEnergyBarIconType MahJongTypeID; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* MahJongAutoLayoutUniqueName; // 0x30
		::System::Int32 PosLayoutIndex; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::Client::Effect_MahJongAutoLayout* OwnerLayoutRef; // 0x40
		::System::Int32 MahjongTypeCount; // 0x48
		::System::Nullable_1<::System::Boolean> IsForceHide; // 0x4C
		::System::Boolean IsZoombie; // 0x4E
		::System::Byte _padding2[0x1];
		::System::Int32 FollowLayoutIndex; // 0x50
		::System::Byte _padding3[0x4];
		::RPG::Client::MonoEffectPluginMahJongItem* FollowItem; // 0x58
		::UnityEngine::Animator* AnimatorCompt; // 0x60
		::UnityEngine::Animation* AnimationCompt; // 0x68
		::UnityEngine::Renderer* ScalePropertyRenderrer; // 0x70
		::KJEDLCJFCOJ* KADDKEGNCHE; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_TICK_OFFSET))(this, a1);
		}

		::KJEDLCJFCOJ* get_Behavior()
		{
			return ((::KJEDLCJFCOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
