#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class Texture2D; }

#define EA2DC760BCBA6D91_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x286AC20)
#define EA2DC760BCBA6D91__CTOR_OFFSET UNITYSDK_OFFSET(0x286AE10)

inline static constexpr unsigned int EA2DC760BCBA6D91_TypeDefinitionIndex = 15991;

class EA2DC760BCBA6D91 : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::Texture2D* AC7A5D74E319C1FE; // 0x18
	::UnityEngine::E46B881AA2636190 AC3F252B647E79B3; // 0x20
	::UnityEngine::E46B881AA2636190 EB09725AA4094215; // 0x30
	::System::Single B893109FDE880DE4; // 0x40
	::System::Single A36292A2AACE7FCB; // 0x44
	::System::Single F8FBDCD18692F52C; // 0x48
	::System::Single F4CD5CE4BD9102F7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA2DC760BCBA6D91__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::EA2DC760BCBA6D91* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::EA2DC760BCBA6D91*))((::PBYTE)hIl2Cpp + EA2DC760BCBA6D91_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
