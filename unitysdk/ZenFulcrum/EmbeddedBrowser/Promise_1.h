#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/PromiseState.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/RejectHandler.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IRejectable; }

namespace ZenFulcrum::EmbeddedBrowser
{
	template <typename T>
	class Promise_1 : public ::System::Object
	{
	public:
		::System::Exception* rejectionException; // 0x0
		T resolveValue; // 0x0
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::RejectHandler>* rejectHandlers; // 0x0
		::System::Collections::Generic::List_1<::System::Action*>* resolveCallbacks; // 0x0
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::IRejectable*>* resolveRejectables; // 0x0
		::System::Int32 _Id_k__BackingField; // 0x0
		::System::String* _Name_k__BackingField; // 0x0
		::ZenFulcrum::EmbeddedBrowser::PromiseState _CurState_k__BackingField; // 0x0
	};
}
