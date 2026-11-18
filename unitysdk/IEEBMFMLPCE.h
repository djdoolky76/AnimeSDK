#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IEEBMFMLPCE_TypeDefinitionIndex = 65096;

enum class IEEBMFMLPCE : ::System::Int32
{
	DownloadFirstFile_All = 9,
	DownloadError = 3,
	RegionDispatchError = 2,
	FightServerConnectError = 16,
	UFightServerDisconnectSuccess = 20,
	GateServerSuccess = 8,
	UFightServerConnectError = 19,
	GlobalDispatchError = 1,
	DownloadFirstFile_Silence = 11,
	UFightServerConnectSuccess = 18,
	ServerDisconnectError = 14,
	FightServerConnectSuccess = 15,
	DownloadEndSuccess = 7,
	GateServerError = 4,
	GateServerAutoSuccess = 0,
	GlobalDispatchSuccess = 5,
	RegionDispatchSuccess = 6,
	ServerReconnectError = 13,
	DownloadFirstFile_LanguageAudioPack = 10,
	FightServerDisconnectSuccess = 17,
	ImportantStepFaild = 21,
	DownloadFirstFile_Predownload = 12,
};
