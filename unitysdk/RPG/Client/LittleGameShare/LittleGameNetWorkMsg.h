#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	enum class LittleGameNetWorkMsg : ::System::Byte
	{
		ClientStartInfoReq = 1,
		ClientStartInfoRsp = 2,
		RpcCall = 3,
		Snapshot = 4,
		ClientSnapshotUpdateReq = 5,
	};
}
