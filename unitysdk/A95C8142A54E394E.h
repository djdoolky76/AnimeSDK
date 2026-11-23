#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A95C8142A54E394E_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x208FD80)
#define A95C8142A54E394E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A95C8142A54E394E_TypeDefinitionIndex = 8556;

class A95C8142A54E394E : public ::System::Object
{
public:
	::System::Boolean F50846B31D139EB7; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 EA7CFF2710F5BB56; // 0x14
	::System::UInt32 FE2FB0D55556BFD9; // 0x18

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A95C8142A54E394E* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A95C8142A54E394E*))((::PBYTE)hIl2Cpp + A95C8142A54E394E_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A95C8142A54E394E__CTOR_OFFSET))(this);
	}
};
