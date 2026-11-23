#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F550345D32DDCC17_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define F550345D32DDCC17__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F550345D32DDCC17_TypeDefinitionIndex = 6813;

class F550345D32DDCC17 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F550345D32DDCC17__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F550345D32DDCC17* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F550345D32DDCC17*))((::PBYTE)hIl2Cpp + F550345D32DDCC17_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
