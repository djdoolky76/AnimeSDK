#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIHHPIABODE.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int ILMKONAJBGC_CFBPHFJJEFC_TypeDefinitionIndex = 88929;

struct alignas(8) ILMKONAJBGC_CFBPHFJJEFC
{
	::System::Int32 DJBOAHHAEIO; // 0x10
	::System::Int32 MAOCFFFKJCF; // 0x14
	::System::Boolean ICBINDHBDLH; // 0x18
	::System::Byte _padding0[0x3];
	::MIHHPIABODE EDFDNEGONOK; // 0x1C
	::System::Int32 FFFPALEOBEB; // 0x20
	::System::Byte _padding1[0x4];
	::System::Collections::Generic::List_1<::System::Int32>* DDLJGOAFGBP; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OHNFCMMHAEM; // 0x30
};
