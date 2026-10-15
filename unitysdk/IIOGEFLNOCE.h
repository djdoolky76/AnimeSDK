#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGKIKKOLLFA;
namespace RPG::Client { class MonsterHPBarStyle; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IIOGEFLNOCE_CTOR_OFFSET UNITYSDK_OFFSET(0x16447880)

inline static constexpr unsigned int IIOGEFLNOCE_TypeDefinitionIndex = 71823;

	class IIOGEFLNOCE : public ::System::Object
	{
	public:
		::HGKIKKOLLFA* IDJEEOFELEJ; // 0x10
		::UnityEngine::Transform* EGMMEEKIKMA; // 0x18
		::UnityEngine::Transform* MJPMAPNJMNE; // 0x20
		::UnityEngine::UI::Text* IABIKOKLBLJ; // 0x28
		::RPG::GameCore::LevelUIComponent* DFHKMAHPJIB; // 0x30
		::RPG::Client::MonsterHPBarStyle* AFKBNHEDIFB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOGEFLNOCE_CTOR_OFFSET))(this);
		}

	};
