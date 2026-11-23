#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A6CB181D1F50973F_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F38DE0)
#define A6CB181D1F50973F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A6CB181D1F50973F_TypeDefinitionIndex = 9082;

class A6CB181D1F50973F : public ::System::Object
{
public:
	::System::UInt32 E0AA7DFDA1447EC1; // 0x10
	::System::UInt32 FE2FB0D55556BFD9; // 0x14

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A6CB181D1F50973F* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A6CB181D1F50973F*))((::PBYTE)hIl2Cpp + A6CB181D1F50973F_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6CB181D1F50973F__CTOR_OFFSET))(this);
	}
};
