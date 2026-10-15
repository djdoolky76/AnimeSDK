#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryEnumeratorKeyValuePoolMember_2_TypeDefinitionIndex = 10782;

	template <typename T1, typename T2>
	struct alignas(8) ConfigDataPoolDictionaryEnumeratorKeyValuePoolMember_2
	{
		::LELCKJPOPAO* _Pool; // 0x0
		::System::UInt32 _Offset; // 0x0
		::System::Int32 _Count; // 0x0
		::System::Object* _StorageType; // 0x0
		::System::Int32 _Capacity; // 0x0
		::System::Int32 _CurrentIndex; // 0x0
		::System::Int32 _FoundCount; // 0x0
		::System::Collections::Generic::KeyValuePair* _Current_k__BackingField; // 0x0
	};
}
