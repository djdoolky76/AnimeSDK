#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int PPMPACEPGJB_TypeDefinitionIndex = 43928;

struct alignas(8) PPMPACEPGJB
{
	::System::Int32 BDHFADMIJGL; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* OPIKHFFBMKG; // 0x18
	::System::Single JOFGIANGHMK; // 0x20
};
