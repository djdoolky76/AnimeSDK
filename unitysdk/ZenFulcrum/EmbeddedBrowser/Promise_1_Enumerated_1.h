#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

namespace ZenFulcrum::EmbeddedBrowser
{
	template <typename T>
	class Promise_1_Enumerated_1 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise* promise; // 0x0
		::System::Boolean abortOnFail; // 0x0
	};
}
