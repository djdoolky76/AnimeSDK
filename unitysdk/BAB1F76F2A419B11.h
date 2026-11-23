#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define BAB1F76F2A419B11_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x219E620)
#define BAB1F76F2A419B11__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BAB1F76F2A419B11_TypeDefinitionIndex = 8828;

class BAB1F76F2A419B11 : public ::System::Object
{
public:
	::System::UInt32 F427B6B5276F2F26; // 0x10
	::System::UInt32 FE2FB0D55556BFD9; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAB1F76F2A419B11__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::BAB1F76F2A419B11* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::BAB1F76F2A419B11*))((::PBYTE)hIl2Cpp + BAB1F76F2A419B11_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
