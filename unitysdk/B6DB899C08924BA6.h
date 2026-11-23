#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B6DB899C08924BA6_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1ECD270)
#define B6DB899C08924BA6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B6DB899C08924BA6_TypeDefinitionIndex = 7374;

class B6DB899C08924BA6 : public ::System::Object
{
public:
	::System::UInt64 E8F57569DEDDD981; // 0x10
	::System::UInt32 B9E54374FA429FF1; // 0x18
	::System::Byte _padding0[0x4];
	::System::UInt64 A17900AB211A7F84; // 0x20

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B6DB899C08924BA6* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B6DB899C08924BA6*))((::PBYTE)hIl2Cpp + B6DB899C08924BA6_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6DB899C08924BA6__CTOR_OFFSET))(this);
	}
};
