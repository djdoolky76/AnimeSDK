#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B7B8795FB90C86A7.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define F12CE9B420D62F67_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2491DA0)
#define F12CE9B420D62F67__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F12CE9B420D62F67_TypeDefinitionIndex = 4661;

class F12CE9B420D62F67 : public ::B7B8795FB90C86A7
{
public:
	::System::Single B9F150B6045A3586; // 0x10
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x14
	::UnityEngine::Vector3 A0FE9BD88AEBF8D9; // 0x20
	::System::Boolean A8E30DC4508875CE; // 0x2C
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 FFF299FAC6915F64; // 0x30
	::UnityEngine::Vector3 A11869566437F4B0; // 0x3C

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F12CE9B420D62F67*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F12CE9B420D62F67*&))((::PBYTE)hIl2Cpp + F12CE9B420D62F67_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F12CE9B420D62F67__CTOR_OFFSET))(this);
	}
};
