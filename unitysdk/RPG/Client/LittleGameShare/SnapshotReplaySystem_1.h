#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNNHKPKCMJD;
class PCOMPBCHHKC;
namespace Entitas { template <typename T> class IContext_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotReplaySystem_1_TypeDefinitionIndex = 36935;

	template <typename T>
	class SnapshotReplaySystem_1 : public ::System::Object
	{
	public:
		::System::Action_1<::PCOMPBCHHKC*>* OnFullFrameSnapshot; // 0x0
		::System::Action_1<::PCOMPBCHHKC*>* OnApplyFrameSnapshot; // 0x0
		::HNNHKPKCMJD* _Instance; // 0x0
		::Entitas::IContext_1<T>* _Context; // 0x0
		::System::Collections::Generic::List_1<::PCOMPBCHHKC*>* _RecordHistory; // 0x0
		::System::Int32 _TickCount; // 0x0
	};
}
