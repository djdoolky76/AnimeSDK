#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EMJIDLCDFMI;
class FDPALAEIHPB;
class KHPOKIKCOFO;
class OAFCCICMILM;
class PLAGENLANML;
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_CTOR_OFFSET UNITYSDK_OFFSET(0xD474FF0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xD478C00)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xD478AF0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_ONHIT_OFFSET UNITYSDK_OFFSET(0xD478F00)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0xD478D90)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xD478CA0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xD478D40)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xD478E80)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xD478DF0)

namespace RPG::Client::LittleGame
{
	class MovieGameProp : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::KHPOKIKCOFO* KAKEIDJDNHJ; // 0x20
		::OAFCCICMILM* PDENFEFCAGN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::PLAGENLANML* a1, ::EMJIDLCDFMI* a2, ::KHPOKIKCOFO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::EMJIDLCDFMI*, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void RegisterListeners(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_REGISTERLISTENERS_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void OnHit(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEPROP_ONHIT_OFFSET))(this, a1);
		}

	};
}
