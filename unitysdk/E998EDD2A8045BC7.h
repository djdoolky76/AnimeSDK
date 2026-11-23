#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define E998EDD2A8045BC7_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x224B350)
#define E998EDD2A8045BC7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E998EDD2A8045BC7_TypeDefinitionIndex = 6916;

class E998EDD2A8045BC7 : public ::System::Object
{
public:
	::System::UInt32 EA419ACEC47ED087; // 0x10
	::System::UInt32 EB57988CFFC144ED; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E998EDD2A8045BC7__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E998EDD2A8045BC7* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E998EDD2A8045BC7*))((::PBYTE)hIl2Cpp + E998EDD2A8045BC7_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
