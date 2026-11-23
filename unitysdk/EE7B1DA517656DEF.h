#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define EE7B1DA517656DEF_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FB2E20)
#define EE7B1DA517656DEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EE7B1DA517656DEF_TypeDefinitionIndex = 6881;

class EE7B1DA517656DEF : public ::System::Object
{
public:
	::System::Boolean BEAD1912A7DA0ECE; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 FE0E81BB2A5BB5F4; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE7B1DA517656DEF__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::EE7B1DA517656DEF* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::EE7B1DA517656DEF*))((::PBYTE)hIl2Cpp + EE7B1DA517656DEF_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
