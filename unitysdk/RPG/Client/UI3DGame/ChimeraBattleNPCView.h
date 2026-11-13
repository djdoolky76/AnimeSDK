#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::UI3DGame { class ChimeraBattleNPCView_EBAFJPCINHG; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0D85B0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D85A0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_DITHER_OFFSET UNITYSDK_OFFSET(0x1A0D8220)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_LEAVE_OFFSET UNITYSDK_OFFSET(0x1A0D7DD0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A0D8320)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A0D8420)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleNPCView_TypeDefinitionIndex = 78099;

	class ChimeraBattleNPCView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x18
		::RPG::Client::UI3DGame::ChimeraBattleNPCView_EBAFJPCINHG* MBOEDFCNCJF; // 0x20
		::System::String* TurnAnimName; // 0x28
		static ::System::Int32* StaticGet_KEBGEGKNBHP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleNPCView")->GetStaticField(0xC840);
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
