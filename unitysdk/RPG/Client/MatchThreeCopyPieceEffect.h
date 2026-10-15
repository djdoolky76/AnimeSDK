#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JEANAIHDCAA;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreePiece; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xD5858F0)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD5851C0)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0xD584E10)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_GOGBDOGNGHJ_OFFSET UNITYSDK_OFFSET(0xD5856E0)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_OHDPOIHHLCM_OFFSET UNITYSDK_OFFSET(0xD5857D0)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD585200)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xD57E2A0)
#define RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD585180)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeCopyPieceEffect_TypeDefinitionIndex = 65929;

	class MatchThreeCopyPieceEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x18
		::System::Single ALCEJGAKKIE; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x28
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x30
		::UnityEngine::Transform* JDCPIMPNJCD; // 0x38
		::RPG::Client::MatchThreePiece* IOABMCKDNNC; // 0x40
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x48
		// static const ::System::String* MEIDIGCOFMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::JEANAIHDCAA* a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::JEANAIHDCAA*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void GOGBDOGNGHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_GOGBDOGNGHJ_OFFSET))(this);
		}

		::System::Void OHDPOIHHLCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_OHDPOIHHLCM_OFFSET))(this);
		}

		::System::Void EGNMELNENAC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::JEANAIHDCAA* a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::JEANAIHDCAA*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREECOPYPIECEEFFECT_EGNMELNENAC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
}
