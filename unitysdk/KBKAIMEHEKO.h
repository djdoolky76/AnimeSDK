#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBKAIMEHEKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x771AB0)

inline static constexpr unsigned int KBKAIMEHEKO_TypeDefinitionIndex = 78895;

struct alignas(8) KBKAIMEHEKO
{
	::System::Int32 DNNCGFJKFDN; // 0x10
	::UnityEngine::Bounds IKGHBCFKOOE; // 0x14
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::UnityEngine::Bounds>* NPMNIPIKODB; // 0x30
	::System::Boolean FMBCINIAAAC; // 0x38

	/*
	::System::Boolean Equals(::KBKAIMEHEKO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KBKAIMEHEKO))((::PBYTE)hIl2Cpp + KBKAIMEHEKO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
