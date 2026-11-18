#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define PEKDKFNADFL__CTOR_OFFSET UNITYSDK_OFFSET(0x746290)

inline static constexpr unsigned int PEKDKFNADFL_TypeDefinitionIndex = 73229;

struct alignas(8) PEKDKFNADFL
{
	::System::Boolean IJIIOGHDFKG; // 0x10
	::System::Byte _padding0[0x7];
	::UnityEngine::Material* EIHICLBDHCB; // 0x18

	::System::Void _ctor(::UnityEngine::Material* AEIHFBNNLBP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + PEKDKFNADFL__CTOR_OFFSET))(this, AEIHFBNNLBP);
	}
};
