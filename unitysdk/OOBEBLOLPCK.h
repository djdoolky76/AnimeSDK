#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffectPluginMiniEmotion; }
namespace RPG::GameCore { class MiniEmoEffectOverride; }
namespace UnityEngine { class GameObject; }

#define OOBEBLOLPCK_GDGIGAJPDAD_OFFSET UNITYSDK_OFFSET(0xBF62F70)

	class OOBEBLOLPCK : public ::System::Object
	{
	public:
		static ::System::Void GDGIGAJPDAD(::RPG::GameCore::MiniEmoEffectOverride* a1, ::RPG::Client::MonoEffectPluginMiniEmotion* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::MiniEmoEffectOverride*, ::RPG::Client::MonoEffectPluginMiniEmotion*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OOBEBLOLPCK_GDGIGAJPDAD_OFFSET))(a1, a2, a3);
		}

	};
