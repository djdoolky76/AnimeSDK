#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Promises/ProgressHandler.h"
#include "unitysdk/RPG/Client/Promises/PromiseState.h"
#include "unitysdk/RPG/Client/Promises/RejectHandler.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IRejectable; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1_TypeDefinitionIndex = 9876;

	template <typename T>
	class Promise_1 : public ::System::Object
	{
	public:
		::System::Exception* rejectionException; // 0x0
		T resolveValue; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::Promises::RejectHandler>* rejectHandlers; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::Promises::ProgressHandler>* progressHandlers; // 0x0
		::System::Collections::Generic::List_1<::System::Action_1<::System::Object*>*>* resolveCallbacks; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::Promises::IRejectable*>* resolveRejectables; // 0x0
		::System::Int32 id; // 0x0
		::System::String* _Name_k__BackingField; // 0x0
		::RPG::Client::Promises::PromiseState _CurState_k__BackingField; // 0x0
	};
}
