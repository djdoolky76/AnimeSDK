#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BINGPDLFKIK_NIEPMBKBFDK.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BINGPDLFKIK_CGHNIIDHPFC__CTOR_OFFSET UNITYSDK_OFFSET(0x78DD10)

inline static constexpr unsigned int BINGPDLFKIK_CGHNIIDHPFC_TypeDefinitionIndex = 61271;

struct alignas(8) BINGPDLFKIK_CGHNIIDHPFC
{
	::System::Collections::Generic::List_1<::System::String*>* FBDLJCNBJEO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* BPIKEDKEBIC; // 0x18
	::BINGPDLFKIK_NIEPMBKBFDK IGDOPOJIKFC; // 0x20

	::System::Void _ctor(::BINGPDLFKIK_NIEPMBKBFDK IGDOPOJIKFC)
	{
		return ((::System::Void(*)(::PVOID, ::BINGPDLFKIK_NIEPMBKBFDK))((::PBYTE)hIl2Cpp + BINGPDLFKIK_CGHNIIDHPFC__CTOR_OFFSET))(this, IGDOPOJIKFC);
	}
};
