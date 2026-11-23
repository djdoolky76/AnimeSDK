#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define BD591599A2B2D453_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x22A6BE0)
#define BD591599A2B2D453__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BD591599A2B2D453_TypeDefinitionIndex = 7115;

class BD591599A2B2D453 : public ::System::Object
{
public:
	::System::Boolean E75D5ACD709677B7; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD591599A2B2D453__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::BD591599A2B2D453* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::BD591599A2B2D453*))((::PBYTE)hIl2Cpp + BD591599A2B2D453_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
