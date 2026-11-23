#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define B4B1736384FCF2C6_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2202D60)
#define B4B1736384FCF2C6_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2202B40)
#define B4B1736384FCF2C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B4B1736384FCF2C6_TypeDefinitionIndex = 9024;

class B4B1736384FCF2C6 : public ::System::Object
{
public:
	::System::UInt32 E33014E273F03BD2; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* BF6DA1849B20F910; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B4B1736384FCF2C6*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B4B1736384FCF2C6*&))((::PBYTE)hIl2Cpp + B4B1736384FCF2C6_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B4B1736384FCF2C6* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B4B1736384FCF2C6*))((::PBYTE)hIl2Cpp + B4B1736384FCF2C6_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4B1736384FCF2C6__CTOR_OFFSET))(this);
	}
};
