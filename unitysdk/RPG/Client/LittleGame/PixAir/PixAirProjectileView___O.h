#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Action; }

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirProjectileView___O_TypeDefinitionIndex = 77327;

	class PixAirProjectileView___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0____OnTrackedHitEffectRemoved()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "<>O")->GetStaticField(0x371B0);
		}

	};
}
