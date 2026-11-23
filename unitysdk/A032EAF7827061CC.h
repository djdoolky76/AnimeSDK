#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A032EAF7827061CC_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x22DA650)
#define A032EAF7827061CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A032EAF7827061CC_TypeDefinitionIndex = 7294;

class A032EAF7827061CC : public ::System::Object
{
public:
	::System::UInt32 F6DB1DF39B5DB8AB; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A032EAF7827061CC* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A032EAF7827061CC*))((::PBYTE)hIl2Cpp + A032EAF7827061CC_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A032EAF7827061CC__CTOR_OFFSET))(this);
	}
};
