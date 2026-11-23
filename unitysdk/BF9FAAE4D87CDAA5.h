#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define BF9FAAE4D87CDAA5_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1ECE230)
#define BF9FAAE4D87CDAA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF9FAAE4D87CDAA5_TypeDefinitionIndex = 7238;

class BF9FAAE4D87CDAA5 : public ::System::Object
{
public:
	::System::UInt32 F6DB1DF39B5DB8AB; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::BF9FAAE4D87CDAA5* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::BF9FAAE4D87CDAA5*))((::PBYTE)hIl2Cpp + BF9FAAE4D87CDAA5_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF9FAAE4D87CDAA5__CTOR_OFFSET))(this);
	}
};
