#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define B3F06E0385F791CE_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x219D290)
#define B3F06E0385F791CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B3F06E0385F791CE_TypeDefinitionIndex = 8826;

class B3F06E0385F791CE : public ::System::Object
{
public:
	::System::String* AEB222EE6A27574B; // 0x10
	::System::UInt32 A08C9940D8549BEB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3F06E0385F791CE__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B3F06E0385F791CE* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B3F06E0385F791CE*))((::PBYTE)hIl2Cpp + B3F06E0385F791CE_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
