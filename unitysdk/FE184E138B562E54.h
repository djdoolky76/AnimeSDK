#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define FE184E138B562E54_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FC2B10)
#define FE184E138B562E54__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE184E138B562E54_TypeDefinitionIndex = 8934;

class FE184E138B562E54 : public ::System::Object
{
public:
	::System::UInt32 B0F7112F6783445E; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FE184E138B562E54* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FE184E138B562E54*))((::PBYTE)hIl2Cpp + FE184E138B562E54_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE184E138B562E54__CTOR_OFFSET))(this);
	}
};
