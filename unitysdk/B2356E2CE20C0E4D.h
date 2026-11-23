#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define B2356E2CE20C0E4D_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28D6160)
#define B2356E2CE20C0E4D__CTOR_OFFSET UNITYSDK_OFFSET(0x28D62C0)

inline static constexpr unsigned int B2356E2CE20C0E4D_TypeDefinitionIndex = 16364;

class B2356E2CE20C0E4D : public ::ABEBA93AD61764EF
{
public:
	::System::Single A90107DE5145EB7A; // 0x18
	::UnityEngine::Vector2 BFBE66CECC696D1A; // 0x1C
	::UnityEngine::Vector2 A8EFA7EC54025C90; // 0x24
	::System::Boolean E6DF9FD318B63A07; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Single BC7360999BE4F84B; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2356E2CE20C0E4D__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::B2356E2CE20C0E4D* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B2356E2CE20C0E4D*))((::PBYTE)hIl2Cpp + B2356E2CE20C0E4D_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
