#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKFOGCDDCEF;
class HNNHKPKCMJD;
class PCOMPBCHHKC;
namespace Entitas { class IContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGameShare
{
	template <typename T>
	class SnapshotRecordHistorySystem_1 : public ::System::Object
	{
	public:
		::System::Boolean _IsRecordingEnabled_k__BackingField; // 0x0
		::System::Boolean _IsAutoSaveRecordOnDestroy_k__BackingField; // 0x0
		::System::Int32 _RecordFrequency_k__BackingField; // 0x0
		::HNNHKPKCMJD* _Instance; // 0x0
		::Entitas::IContext* _Context; // 0x0
		::System::Collections::Generic::List_1<::PCOMPBCHHKC*>* _RecordHistory; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::DKFOGCDDCEF*>* _LoadedRecordCache; // 0x0
		::System::Int32 _FrameCounter; // 0x0
	};
}
