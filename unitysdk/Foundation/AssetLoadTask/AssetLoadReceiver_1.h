#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadReceiver_1_TypeDefinitionIndex = 8519;

	template <typename T>
	class AssetLoadReceiver_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* _onValue; // 0x0
		::System::Action_1<::System::Exception*>* _onError; // 0x0
		::System::Action* _onStopped; // 0x0
	};
}
