#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1_Enumerated_1_TypeDefinitionIndex = 39518;

	template <typename T>
	class Promise_1_Enumerated_1 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise* promise; // 0x0
		::System::Boolean abortOnFail; // 0x0
	};
}
