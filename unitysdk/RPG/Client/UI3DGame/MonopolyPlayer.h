#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Spine::Unity { class SkeletonMecanim; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0xE362660)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_DLMDLOIBMCH_OFFSET UNITYSDK_OFFSET(0xE3621F0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_GETWORLDPOS_OFFSET UNITYSDK_OFFSET(0xE362240)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0xE360C60)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_PMMCBJLCDBI_OFFSET UNITYSDK_OFFSET(0xE3621A0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMBOOLPARAM_OFFSET UNITYSDK_OFFSET(0xE362040)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMFLOATPARAM_OFFSET UNITYSDK_OFFSET(0xE3620B0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xE362130)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_START_OFFSET UNITYSDK_OFFSET(0xE3622E0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE362530)

namespace RPG::Client::UI3DGame
{
	class MonopolyPlayer : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x30
		::Spine::Unity::SkeletonMecanim* BDOOGHPIGIM; // 0x38
		::UnityEngine::Animator* EDLPLCCOOEP; // 0x40
		::System::String* DOOOGDBEJHB; // 0x48
		::UnityEngine::Transform* AvatarGirlRoot; // 0x50
		::UnityEngine::Transform* AvatarBoyRoot; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_CTOR_OFFSET))(this);
		}

		::System::Void SetAnimBoolParam(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMBOOLPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimFloatParam(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMFLOATPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_SETANIMTRIGGER_OFFSET))(this, a1);
		}

		::System::Void PMMCBJLCDBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_PMMCBJLCDBI_OFFSET))(this);
		}

		::System::Void DLMDLOIBMCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_DLMDLOIBMCH_OFFSET))(this);
		}

		::System::Void PlayAnim(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_PLAYANIM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetWorldPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_GETWORLDPOS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYPLAYER_UPDATE_OFFSET))(this);
		}

	};
}
