#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGKIKKOLLFA;
namespace RPG::Client { class MonsterHPBarStyle; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IIOGEFLNOCE_CTOR_OFFSET UNITYSDK_OFFSET(0x16454C70)

	class IIOGEFLNOCE : public ::System::Object
	{
	public:
		::UnityEngine::Transform* EGMMEEKIKMA; // 0x10
		::UnityEngine::Transform* MJPMAPNJMNE; // 0x18
		::HGKIKKOLLFA* IDJEEOFELEJ; // 0x20
		::RPG::Client::MonsterHPBarStyle* AFKBNHEDIFB; // 0x28
		::UnityEngine::UI::Text* IABIKOKLBLJ; // 0x30
		::RPG::GameCore::LevelUIComponent* DFHKMAHPJIB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOGEFLNOCE_CTOR_OFFSET))(this);
		}

	};
