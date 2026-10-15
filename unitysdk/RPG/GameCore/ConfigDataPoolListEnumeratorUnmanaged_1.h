#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolListEnumeratorUnmanaged_1_TypeDefinitionIndex = 10766;

	template <typename T>
	struct alignas(8) ConfigDataPoolListEnumeratorUnmanaged_1
	{
		::LELCKJPOPAO* _Pool; // 0x0
		::System::UInt32 _Offset; // 0x0
		::System::Int32 _Count; // 0x0
		::System::Int32 _CurrentIndex; // 0x0
	};
}
