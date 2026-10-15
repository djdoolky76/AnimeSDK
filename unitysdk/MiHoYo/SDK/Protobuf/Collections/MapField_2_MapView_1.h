#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	template <typename T1, typename T2>
	class MapField_2_MapView_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Collections::MapField_2<T1, T2>* parent; // 0x0
		::System::Func_2<::System::Collections::Generic::KeyValuePair*, T2>* projection; // 0x0
		::System::Func_2<T2, ::System::Boolean>* containsCheck; // 0x0
	};
}
