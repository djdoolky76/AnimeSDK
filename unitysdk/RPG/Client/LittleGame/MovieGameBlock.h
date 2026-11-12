#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameProp.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KHPOKIKCOFO;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0xDEE2F60)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xDEE2EC0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_ONHIT_OFFSET UNITYSDK_OFFSET(0xDEE2D50)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameBlock_TypeDefinitionIndex = 78933;

	class MovieGameBlock : public ::RPG::Client::LittleGame::MovieGameProp
	{
	public:
		::UnityEngine::Transform* CenterTrans; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_CTOR_OFFSET))(this);
		}

		::System::Void OnHit(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_ONHIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_GETCENTERPOSITION_OFFSET))(this);
		}

	};
}
