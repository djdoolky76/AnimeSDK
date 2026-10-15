#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___InvokeAfterFramesPromise_d__30_1_TypeDefinitionIndex = 35229;

	template <typename T>
	class CoroutineUtils___InvokeAfterFramesPromise_d__30_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		::System::Int32 frames; // 0x0
		::System::Action* resolve; // 0x0
		T returnVal; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
