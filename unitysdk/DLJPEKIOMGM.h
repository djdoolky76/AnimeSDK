#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define DLJPEKIOMGM__CTOR_OFFSET UNITYSDK_OFFSET(0x7CA860)

inline static constexpr unsigned int DLJPEKIOMGM_TypeDefinitionIndex = 82411;

struct alignas(8) DLJPEKIOMGM
{
	::System::Boolean IJIIOGHDFKG; // 0x10
	::System::Byte _padding0[0x7];
	::UnityEngine::Material* KLDNLOILIEN; // 0x18
	::UnityEngine::Material* HDOCNBODKGI; // 0x20

	::System::Void _ctor(::UnityEngine::Material* OKIOOOJNAKF, ::UnityEngine::Material* ELBIFBIGPNO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DLJPEKIOMGM__CTOR_OFFSET))(this, OKIOOOJNAKF, ELBIFBIGPNO);
	}
};
