#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PacketSendResult_1_TypeDefinitionIndex = 69412;

	template <typename T>
	struct alignas(8) PacketSendResult_1
	{
		::System::Collections::Generic::List_1<::System::Object*>* _Notifies; // 0x0
		T _Rsp_k__BackingField; // 0x0
		::System::UInt32 _Retcode_k__BackingField; // 0x0
	};
}
