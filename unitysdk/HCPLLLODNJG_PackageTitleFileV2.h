#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int HCPLLLODNJG_PackageTitleFileV2_TypeDefinitionIndex = 49893;

struct alignas(8) HCPLLLODNJG_PackageTitleFileV2
{
	::System::Int32 version; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Int32>* delete_; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* download; // 0x20
};
