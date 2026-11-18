#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define LHGFENOFEAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x794F70)

inline static constexpr unsigned int LHGFENOFEAI_TypeDefinitionIndex = 65666;

struct alignas(4) LHGFENOFEAI
{
	::System::Single JEJMGCNBMAD; // 0x10
	::UnityEngine::Vector2 FDEMMNCMLGD; // 0x14
	::UnityEngine::Vector2 BOKMJMOAONH; // 0x1C
	::System::Int32 KNLPBKDIJCO; // 0x24
	::System::Int32 CMAGKICODDF; // 0x28
	::System::Int32 DNNCGFJKFDN; // 0x2C

	/*
	::System::Boolean Equals(::LHGFENOFEAI LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LHGFENOFEAI))((::PBYTE)hIl2Cpp + LHGFENOFEAI_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
