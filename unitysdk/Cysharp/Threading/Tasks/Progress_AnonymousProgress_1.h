#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int Progress_AnonymousProgress_1_TypeDefinitionIndex = 38217;

	template <typename T>
	class Progress_AnonymousProgress_1 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x0
	};
}
