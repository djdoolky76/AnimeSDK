#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define EC1F5DCE9B2CF18D_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x22A9F90)
#define EC1F5DCE9B2CF18D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC1F5DCE9B2CF18D_TypeDefinitionIndex = 7116;

class EC1F5DCE9B2CF18D : public ::System::Object
{
public:
	::System::UInt32 EA7CFF2710F5BB56; // 0x10
	::System::UInt32 A35E61455FB5F910; // 0x14
	::System::Boolean F50846B31D139EB7; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 FE2FB0D55556BFD9; // 0x1C

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::EC1F5DCE9B2CF18D* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::EC1F5DCE9B2CF18D*))((::PBYTE)hIl2Cpp + EC1F5DCE9B2CF18D_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC1F5DCE9B2CF18D__CTOR_OFFSET))(this);
	}
};
