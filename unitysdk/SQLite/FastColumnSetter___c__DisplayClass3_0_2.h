#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace SQLite
{
	inline static constexpr unsigned int FastColumnSetter___c__DisplayClass3_0_2_TypeDefinitionIndex = 37075;

	template <typename T1, typename T2>
	class FastColumnSetter___c__DisplayClass3_0_2 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Object*, ::System::Object*>* setProperty; // 0x0
		::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Object*>* getColumnValue; // 0x0
	};
}
