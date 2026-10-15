#pragma once
#include "unitysdk/unitysdk.h"
class AHOKLDGHMFG;
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	template <typename T>
	struct alignas(8) SwordTrainingStatusChangeInfo_ActiveEffectEnumerator_1
	{
		::System::Collections::Generic::List_1<::AHOKLDGHMFG*>* _InternalEffectList; // 0x0
		::System::Int32 _Index; // 0x0
		::System::Boolean _CheckLimit; // 0x0
		::RPG::Client::SwordTrainingStatusChangeInfo* _Owner; // 0x0
	};
}
