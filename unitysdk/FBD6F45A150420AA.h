#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define FBD6F45A150420AA_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EF1510)
#define FBD6F45A150420AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FBD6F45A150420AA_TypeDefinitionIndex = 8951;

class FBD6F45A150420AA : public ::System::Object
{
public:
	::System::UInt32 A0C23437A80792C9; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBD6F45A150420AA__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FBD6F45A150420AA* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FBD6F45A150420AA*))((::PBYTE)hIl2Cpp + FBD6F45A150420AA_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
