#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIHHJPHJELO;
class HNNHKPKCMJD;
class KKMHKKIFFHD;
class LAAOKALNHIO;
class OFKKOGBKOFI;
class PCOMPBCHHKC;
namespace Entitas { template <typename T> class Context_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotInterpolateSystem_1_TypeDefinitionIndex = 36918;

	template <typename T>
	class SnapshotInterpolateSystem_1 : public ::System::Object
	{
	public:
		::System::Object* _State; // 0x0
		::HNNHKPKCMJD* _Instance; // 0x0
		::Entitas::Context_1<T>* _Context; // 0x0
		::PCOMPBCHHKC* _OldFrameSnapShotData; // 0x0
		::PCOMPBCHHKC* _CurrentFrameSnapShotData; // 0x0
		::System::Collections::Generic::Queue_1<::PCOMPBCHHKC*>* _FrameSnapshotQueue; // 0x0
		::BIHHJPHJELO* _NewDataReader; // 0x0
		::BIHHJPHJELO* _OldDataReader; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KKMHKKIFFHD*>*>* _OldComponentSnapShotDic; // 0x0
		::System::Collections::Generic::List_1<::OFKKOGBKOFI*>* _SnapshotLerpList; // 0x0
		::System::Action* OnApplyEntityInterpolateEnd; // 0x0
		::System::Action* OnApplyEntitySpawn; // 0x0
		::System::Action* OnApplyEntityDespawn; // 0x0
		::System::Action* OnApplyNoInterpolateComponent; // 0x0
	};
}
