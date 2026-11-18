#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BABCHPPGEBP.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCAFLFPLDLC__CTOR_OFFSET UNITYSDK_OFFSET(0x7C4A50)

inline static constexpr unsigned int OCAFLFPLDLC_TypeDefinitionIndex = 9265;

struct alignas(8) OCAFLFPLDLC
{
	::System::Collections::Generic::List_1<::BABCHPPGEBP>* HNCFODNFLGM; // 0x10

	::System::Void _ctor(::System::String* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCAFLFPLDLC__CTOR_OFFSET))(this, DFMKILICPFB);
	}
};
