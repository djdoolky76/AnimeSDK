#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Material; }

#define KJPDFGGPLKH__CTOR_OFFSET UNITYSDK_OFFSET(0x771BC0)

inline static constexpr unsigned int KJPDFGGPLKH_TypeDefinitionIndex = 51847;

struct alignas(8) KJPDFGGPLKH
{
	::System::Boolean IJIIOGHDFKG; // 0x10
	::System::Byte _padding0[0x7];
	::UnityEngine::Material* KLDNLOILIEN; // 0x18
	::UnityEngine::Material* HDOCNBODKGI; // 0x20
	::System::Single AJNLNLOJOFC; // 0x28
	::System::Byte _padding1[0x4];
	::System::Func_1<::System::Boolean>* AHPHIJBOEMO; // 0x30

	::System::Void _ctor(::UnityEngine::Material* OKIOOOJNAKF, ::UnityEngine::Material* ELBIFBIGPNO, ::System::Single NMFKFIELPLF, ::System::Func_1<::System::Boolean>* NADFCINMAMK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Single, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + KJPDFGGPLKH__CTOR_OFFSET))(this, OKIOOOJNAKF, ELBIFBIGPNO, NMFKFIELPLF, NADFCINMAMK);
	}
};
