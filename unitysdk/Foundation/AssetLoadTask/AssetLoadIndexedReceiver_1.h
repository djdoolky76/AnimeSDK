#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadIndexedReceiver_1_TypeDefinitionIndex = 8042;

	template <typename T>
	class AssetLoadIndexedReceiver_1 : public ::System::Object
	{
	public:
		::System::Int32 _index; // 0x0
		::System::Action_2<::System::Int32, T>* _onValue; // 0x0
		::System::Action_1<::System::Exception*>* _onError; // 0x0
		::System::Action* _onStopped; // 0x0
	};
}
