#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class ANNCCNAPKLE;
class LMFNACONGJN;
class NINDEKGFFHP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int CombineTriggerListenParam_TypeDefinitionIndex = 54221;

	struct alignas(8) CombineTriggerListenParam
	{
		::System::String* TriggerName; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* ColliderNames; // 0x18
		::NINDEKGFFHP* Filter; // 0x20
		::LMFNACONGJN* Resolver; // 0x28
		::ANNCCNAPKLE* Creator; // 0x30
		::System::Boolean OnceTrigger; // 0x38
		::System::Boolean KeepFloorTriggerOnSuiteChange; // 0x39
	};
}
