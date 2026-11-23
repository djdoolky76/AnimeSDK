#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define E680AEBA3E14CC3D_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FC2B10)
#define E680AEBA3E14CC3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E680AEBA3E14CC3D_TypeDefinitionIndex = 8709;

class E680AEBA3E14CC3D : public ::System::Object
{
public:
	::System::UInt32 F15DED49F43372B1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E680AEBA3E14CC3D__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E680AEBA3E14CC3D* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E680AEBA3E14CC3D*))((::PBYTE)hIl2Cpp + E680AEBA3E14CC3D_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
