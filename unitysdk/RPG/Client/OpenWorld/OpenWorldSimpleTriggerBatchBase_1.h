#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCLMONFLHFP;
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OpenWorldSimpleTriggerBatchBase_1_TypeDefinitionIndex = 73974;

	template <typename T>
	class OpenWorldSimpleTriggerBatchBase_1 : public ::System::Object
	{
	public:
		::System::Int32 SourceEffectType; // 0x0
		::System::Collections::Generic::List_1<T>* _Triggers; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _EmptyTriggerIdList; // 0x0
		::System::Collections::Generic::List_1<T>* _PendingTriggers; // 0x0
		::System::Collections::Generic::List_1<::FCLMONFLHFP*>* _PendingHandlers; // 0x0
	};
}
