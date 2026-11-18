#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGFMLCGKBK.h"
#include "unitysdk/PALEEFPDEDL.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define BEDCFOONCDF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x604CB0)

inline static constexpr unsigned int BEDCFOONCDF_TypeDefinitionIndex = 56186;

struct alignas(8) BEDCFOONCDF
{
	::Unity::Collections::NativeList_1<::PALEEFPDEDL> OAJILAOAOLB; // 0x10
	::System::Byte _padding0[0x8];
	::Unity::Collections::NativeList_1<::JOGFMLCGKBK> DFKNGAGNDPL; // 0x20

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDCFOONCDF_EXECUTE_OFFSET))(this);
	}
};
