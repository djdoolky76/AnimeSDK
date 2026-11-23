#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define A06C76BA59B25C5F_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24D2C30)
#define A06C76BA59B25C5F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A06C76BA59B25C5F_TypeDefinitionIndex = 4827;

class A06C76BA59B25C5F : public ::System::Object
{
public:
	::System::Single B9F150B6045A3586; // 0x10
	::UnityEngine::Vector3 E26AE3C940A9D0CA; // 0x14
	::UnityEngine::Vector3 B4A07A3DC5DDF6FD; // 0x20
	::System::Single A7D959ADE7163074; // 0x2C
	::System::Single AFE7B3AAF729AD05; // 0x30

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A06C76BA59B25C5F*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A06C76BA59B25C5F*&))((::PBYTE)hIl2Cpp + A06C76BA59B25C5F_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A06C76BA59B25C5F__CTOR_OFFSET))(this);
	}
};
