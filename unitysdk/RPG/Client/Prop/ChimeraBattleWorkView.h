#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC53800)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDC537F0)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYBREAK_OFFSET UNITYSDK_OFFSET(0xDC53600)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYDITHER_OFFSET UNITYSDK_OFFSET(0xDC534E0)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYOPENBOX_OFFSET UNITYSDK_OFFSET(0xDC53530)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_SETATTACHPOINTACTIVE_OFFSET UNITYSDK_OFFSET(0xDC53700)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_START_OFFSET UNITYSDK_OFFSET(0xDC53440)

namespace RPG::Client::Prop
{
	class ChimeraBattleWorkView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::BaseShaderPropertyTransition* DitherHandler; // 0x18
		::UnityEngine::Animator* Animator; // 0x20
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x28
		static ::System::Int32* StaticGet_BCFAEFDMCGH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraBattleWorkView")->GetStaticField(0x115B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_START_OFFSET))(this);
		}

		::System::Void PlayDither()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYDITHER_OFFSET))(this);
		}

		::System::Void PlayOpenBox()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYOPENBOX_OFFSET))(this);
		}

		::System::Void PlayBreak()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYBREAK_OFFSET))(this);
		}

		::System::Void SetAttachPointActive(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_SETATTACHPOINTACTIVE_OFFSET))(this, a1, a2);
		}

	};
}
