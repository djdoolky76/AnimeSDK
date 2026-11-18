#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNFKJAFMFLI.h"
#include "unitysdk/System/Attribute.h"

#define JIDCEGDLJCC_OMINLALLINK_OFFSET UNITYSDK_OFFSET(0x198CB4C0)
#define JIDCEGDLJCC__CTOR_OFFSET UNITYSDK_OFFSET(0x198CB4B0)

inline static constexpr unsigned int JIDCEGDLJCC_TypeDefinitionIndex = 64723;

class JIDCEGDLJCC : public ::System::Attribute
{
public:
	::NNFKJAFMFLI _EGKKFKGCDDA_k__BackingField; // 0x10

	::System::Void _ctor(::NNFKJAFMFLI IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::NNFKJAFMFLI))((::PBYTE)hIl2Cpp + JIDCEGDLJCC__CTOR_OFFSET))(this, IMLLDOHDCNC);
	}

	::NNFKJAFMFLI OMINLALLINK()
	{
		return ((::NNFKJAFMFLI(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDCEGDLJCC_OMINLALLINK_OFFSET))(this);
	}
};
