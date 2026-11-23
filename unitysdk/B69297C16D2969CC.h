#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B69297C16D2969CC_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F1AD90)
#define B69297C16D2969CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B69297C16D2969CC_TypeDefinitionIndex = 7017;

class B69297C16D2969CC : public ::System::Object
{
public:
	::System::UInt32 EA7CFF2710F5BB56; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B69297C16D2969CC__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B69297C16D2969CC* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B69297C16D2969CC*))((::PBYTE)hIl2Cpp + B69297C16D2969CC_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
