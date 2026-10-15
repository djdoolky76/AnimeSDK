#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class LELCKJPOPAO;
namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryEnumeratorStringKeyValuePoolMember_1_TypeDefinitionIndex = 10760;

	template <typename T>
	struct alignas(8) ConfigDataPoolDictionaryEnumeratorStringKeyValuePoolMember_1
	{
		::LELCKJPOPAO* _Pool; // 0x0
		::System::UInt32 _Offset; // 0x0
		::System::Int32 _Count; // 0x0
		::System::Boolean _IsHash; // 0x0
		::System::Int32 _Capacity; // 0x0
		::System::Int32 _LinearIndex; // 0x0
		::System::Int32 _BucketIndex; // 0x0
		::System::Int32 _FoundCount; // 0x0
		::System::Collections::Generic::KeyValuePair_2<::System::String*, T> _Current; // 0x0
		::System::Int32 _BucketSize; // 0x0
		::System::UInt32 _DataOffset; // 0x0
	};
}
