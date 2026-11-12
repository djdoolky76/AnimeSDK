#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0xE6F0670)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F0660)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYBREAK_OFFSET UNITYSDK_OFFSET(0xE6F0470)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYDITHER_OFFSET UNITYSDK_OFFSET(0xE6F0350)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYOPENBOX_OFFSET UNITYSDK_OFFSET(0xE6F03A0)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_SETATTACHPOINTACTIVE_OFFSET UNITYSDK_OFFSET(0xE6F0570)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_START_OFFSET UNITYSDK_OFFSET(0xE6F02B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattleWorkView_TypeDefinitionIndex = 81180;

	class ChimeraBattleWorkView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::BaseShaderPropertyTransition* DitherHandler; // 0x18
		::UnityEngine::Animator* Animator; // 0x20
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x28
		static ::System::Int32* StaticGet_BCFAEFDMCGH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraBattleWorkView")->GetStaticField(0x100C0);
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
