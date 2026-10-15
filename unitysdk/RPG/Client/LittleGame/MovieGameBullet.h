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
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_CTOR_OFFSET UNITYSDK_OFFSET(0xD476AB0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xD476330)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xD475F30)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_ONHIT_OFFSET UNITYSDK_OFFSET(0xD476640)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0xD4764D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xD476430)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xD4763D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xD4765C0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xD476530)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameBullet_TypeDefinitionIndex = 76604;

	class MovieGameBullet : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::UnityEngine::Transform* CenterTrans; // 0x18
		::FDPALAEIHPB* FKINCGODJEP; // 0x20
		::KHPOKIKCOFO* KAKEIDJDNHJ; // 0x28
		::OAFCCICMILM* PDENFEFCAGN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::PLAGENLANML* a1, ::EMJIDLCDFMI* a2, ::KHPOKIKCOFO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::EMJIDLCDFMI*, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void RegisterListeners(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_REGISTERLISTENERS_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void OnHit(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_ONHIT_OFFSET))(this, a1);
		}

	};
}
