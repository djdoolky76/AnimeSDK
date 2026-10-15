#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJJLNLJPGMJ;
class HNNHKPKCMJD;
class LAAOKALNHIO;
class PCOMPBCHHKC;
namespace Entitas { class IContext; }

namespace RPG::Client::LittleGameShare
{
	template <typename T>
	class ClientAutonomousSnapShotSendProcessor_1 : public ::System::Object
	{
	public:
		::Entitas::IContext* _Context; // 0x0
		::HNNHKPKCMJD* _ClientInstance; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
		::PCOMPBCHHKC* _CachedFrameSnapShotData; // 0x0
		::LAAOKALNHIO* _CachedEntitySnapshotData; // 0x0
		::DJJLNLJPGMJ* _ReplicationDataWriter; // 0x0
		::System::Int32 _LastCollectTick; // 0x0
	};
}
