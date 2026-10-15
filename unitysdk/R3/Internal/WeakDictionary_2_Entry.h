#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class WeakReference_1; }

namespace R3::Internal
{
	inline static constexpr unsigned int WeakDictionary_2_Entry_TypeDefinitionIndex = 35978;

	template <typename T1, typename T2>
	class WeakDictionary_2_Entry : public ::System::Object
	{
	public:
		::System::WeakReference_1<T1>* Key; // 0x0
		T2 Value; // 0x0
		::System::Int32 Hash; // 0x0
		::System::Object* Prev; // 0x0
		::System::Object* Next; // 0x0
	};
}
