#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }

#define A8F6B1B5F3877394_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F51A50)
#define A8F6B1B5F3877394__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8F6B1B5F3877394_TypeDefinitionIndex = 7700;

class A8F6B1B5F3877394 : public ::System::Object
{
public:
	::System::UInt32 EA419ACEC47ED087; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* A963FD20EE294E1C; // 0x18

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A8F6B1B5F3877394* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A8F6B1B5F3877394*))((::PBYTE)hIl2Cpp + A8F6B1B5F3877394_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8F6B1B5F3877394__CTOR_OFFSET))(this);
	}
};
