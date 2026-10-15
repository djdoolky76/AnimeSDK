#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::UI3DGame { class ChimeraBattleNPCView_EBAFJPCINHG; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0xE359E50)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xE359E40)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_DITHER_OFFSET UNITYSDK_OFFSET(0xE359AC0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_LEAVE_OFFSET UNITYSDK_OFFSET(0xE359670)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE359BC0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xE359CC0)

namespace RPG::Client::UI3DGame
{
	class ChimeraBattleNPCView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x18
		::RPG::Client::UI3DGame::ChimeraBattleNPCView_EBAFJPCINHG* MBOEDFCNCJF; // 0x20
		::System::String* TurnAnimName; // 0x28
		static ::System::Int32* StaticGet_KEBGEGKNBHP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleNPCView")->GetStaticField(0xA4F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CCTOR_OFFSET))();
		}

		::System::Void Leave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_LEAVE_OFFSET))(this);
		}

		::System::Void Dither()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_DITHER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_UPDATE_OFFSET))(this);
		}

	};
}
