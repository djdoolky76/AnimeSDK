#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/AFD17A2A1E653FDB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define EACA0DCC0C36CED8_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FE2450)
#define EACA0DCC0C36CED8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EACA0DCC0C36CED8_TypeDefinitionIndex = 8106;

class EACA0DCC0C36CED8 : public ::System::Object
{
public:
	::System::String* F258AD03B91FDB8E; // 0x10
	::E68AA4EB51923C98::AFD17A2A1E653FDB FF1EEDF9C05EC40E; // 0x18
	::System::UInt32 BEE61BB8F133C0E0; // 0x1C

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::EACA0DCC0C36CED8* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::EACA0DCC0C36CED8*))((::PBYTE)hIl2Cpp + EACA0DCC0C36CED8_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACA0DCC0C36CED8__CTOR_OFFSET))(this);
	}
};
