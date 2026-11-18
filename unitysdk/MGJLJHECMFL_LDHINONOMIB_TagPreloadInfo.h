#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int MGJLJHECMFL_LDHINONOMIB_TagPreloadInfo_TypeDefinitionIndex = 80062;

struct alignas(8) MGJLJHECMFL_LDHINONOMIB_TagPreloadInfo
{
	::System::Int32 monsterId; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Object*>* tagInfos; // 0x18
};
