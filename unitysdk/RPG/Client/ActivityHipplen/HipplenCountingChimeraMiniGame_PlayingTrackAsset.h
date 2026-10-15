#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENCOUNTINGCHIMERAMINIGAME_PLAYINGTRACKASSET_CTOR_OFFSET UNITYSDK_OFFSET(0xC4302B0)

namespace RPG::Client::ActivityHipplen
{
	class HipplenCountingChimeraMiniGame_PlayingTrackAsset : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ChimeraEntityRef; // 0x10
		::System::String* CharacterUniqueName; // 0x18
		::UnityEngine::Timeline::TrackAsset* TrackAssetRef; // 0x20
		::System::Double Duration; // 0x28
		::System::UInt32 ChimeraID; // 0x30
		::System::Boolean IsFinished; // 0x34
		::System::Boolean IsWorking; // 0x35
		::System::Byte _padding0[0x2];
		::System::Double StartTime; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENCOUNTINGCHIMERAMINIGAME_PLAYINGTRACKASSET_CTOR_OFFSET))(this);
		}

	};
}
