#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HarmonySyncMode.h"
#include "unitysdk/RPG/Client/MusicVisualizeDataSourceType.h"
namespace RPG::Client { class StageHarmonyCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE114110)
#define RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN_PLAY_OFFSET UNITYSDK_OFFSET(0xE113F70)
#define RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN_STOP_OFFSET UNITYSDK_OFFSET(0xE114040)

namespace RPG::Client
{
	class StageHarmonySignalControllerMonoPlugin
	{
	public:
		::System::Boolean EnableMusicSync; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::Client::HarmonySyncMode SyncMode; // 0x34
		::System::Int32 SyncCount; // 0x38
		::RPG::Client::MusicVisualizeDataSourceType SourceType; // 0x3C
		::System::Single Progress; // 0x40
		::System::Single Speed; // 0x44
		::System::Single EditorPreviewBeatTime; // 0x48
		::System::Single Signal; // 0x4C
		::System::String* Channle; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::StageHarmonyCurve*>* ControlCurves; // 0x58
		::System::Boolean ChannleNameInvalid; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALCONTROLLERMONOPLUGIN_STOP_OFFSET))(this);
		}

	};
}
