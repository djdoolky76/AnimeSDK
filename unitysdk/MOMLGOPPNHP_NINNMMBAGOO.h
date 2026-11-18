#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOMLGOPPNHP_NINNMMBAGOO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6FF400)

inline static constexpr unsigned int MOMLGOPPNHP_NINNMMBAGOO_TypeDefinitionIndex = 50863;

struct alignas(4) MOMLGOPPNHP_NINNMMBAGOO
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_NINNMMBAGOO_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
