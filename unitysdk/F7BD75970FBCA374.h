#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F7BD75970FBCA374_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1ECE230)
#define F7BD75970FBCA374__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F7BD75970FBCA374_TypeDefinitionIndex = 7364;

class F7BD75970FBCA374 : public ::System::Object
{
public:
	::System::UInt32 F15DED49F43372B1; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F7BD75970FBCA374* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F7BD75970FBCA374*))((::PBYTE)hIl2Cpp + F7BD75970FBCA374_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7BD75970FBCA374__CTOR_OFFSET))(this);
	}
};
