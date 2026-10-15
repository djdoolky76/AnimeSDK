#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisionState.h"
class GDMONJOAKHD;
class OLMJHHNPJJH;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_TypeDefinitionIndex = 73820;

	template <typename T>
	class SceneItemHLODStreamingLayer_1 : public ::GDMONJOAKHD
	{
	public:
		::System::Boolean _NeedFocusInitialize; // 0x0
		::System::Boolean _FocusSolveFinished; // 0x0
		::System::Boolean _FocusRoundFinished; // 0x0
		::System::Int32 _FocusRootCursor; // 0x0
		::System::Single _WatchDelay; // 0x0
		::System::Object* _TransitionMonitor; // 0x0
		::System::Collections::Generic::List_1<::OLMJHHNPJJH*>* _ReadyToShrinkNodes; // 0x0
		::System::Object* _TickCtx; // 0x0
		::System::Func_2<::OLMJHHNPJJH*, ::System::Boolean>* _OnVisitShrinkToExpandTick; // 0x0
		::System::Func_2<::OLMJHHNPJJH*, ::System::Boolean>* _OnVisitExpandToShrinkTick; // 0x0
		::System::Action* _HLODLoadedCallback; // 0x0
		::RPG::Client::OpenWorld::StreamingItemData* _BlockHLODItem; // 0x0
		::OLMJHHNPJJH* _BlockHLODTree; // 0x0
		::System::Collections::Generic::List_1<::OLMJHHNPJJH*>* _HLODGroupTree; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::GDMONJOAKHD*>* _HLODLeafItems; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::OpenWorld::StreamingItemData*>* _HLODLeafItemIndex; // 0x0
		::RPG::Client::OpenWorld::BlockVisionState _LastBlockVisionState; // 0x0
	};
}
