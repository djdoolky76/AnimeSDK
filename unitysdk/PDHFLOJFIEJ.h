#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define PDHFLOJFIEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x75C5B0)

inline static constexpr unsigned int PDHFLOJFIEJ_TypeDefinitionIndex = 78672;

struct alignas(8) PDHFLOJFIEJ
{
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x10
	::System::Single JNOMOFOMFEK; // 0x18
	::System::Single FINIAEFOGIK; // 0x1C
	::System::Single BGPJHNJKHIN; // 0x20
	::System::Single PMEHNJABPAN; // 0x24
	::System::Single LFGNKEBFFBB; // 0x28
	::System::Single BGBHKDIAHJH; // 0x2C

	::System::Void _ctor(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single JNOMOFOMFEK, ::System::Single FINIAEFOGIK, ::System::Single BGPJHNJKHIN, ::System::Single PMEHNJABPAN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PDHFLOJFIEJ__CTOR_OFFSET))(this, GKBJOPJKCLB, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN);
	}
};
