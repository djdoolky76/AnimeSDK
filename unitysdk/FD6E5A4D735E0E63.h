#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define FD6E5A4D735E0E63_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define FD6E5A4D735E0E63__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FD6E5A4D735E0E63_TypeDefinitionIndex = 9200;

class FD6E5A4D735E0E63 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FD6E5A4D735E0E63* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FD6E5A4D735E0E63*))((::PBYTE)hIl2Cpp + FD6E5A4D735E0E63_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD6E5A4D735E0E63__CTOR_OFFSET))(this);
	}
};
