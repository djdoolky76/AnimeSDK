#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define BD27F92D36F8407E_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F51740)
#define BD27F92D36F8407E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BD27F92D36F8407E_TypeDefinitionIndex = 7912;

class BD27F92D36F8407E : public ::System::Object
{
public:
	::System::UInt32 FD58A19A41F4FF6B; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD27F92D36F8407E__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::BD27F92D36F8407E* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::BD27F92D36F8407E*))((::PBYTE)hIl2Cpp + BD27F92D36F8407E_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
