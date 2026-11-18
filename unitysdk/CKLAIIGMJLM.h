#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Spline { class NAPPointMeta; }

#define CKLAIIGMJLM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x78E110)
#define CKLAIIGMJLM__CTOR_OFFSET UNITYSDK_OFFSET(0x362170)

inline static constexpr unsigned int CKLAIIGMJLM_TypeDefinitionIndex = 59464;

struct alignas(4) CKLAIIGMJLM
{
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::UnityEngine::Quaternion IFEFGIHOKOC; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CKLAIIGMJLM__CTOR_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::System::Void _ctor_1(::MoleMole::Spline::NAPPointMeta* LDGFBEOMGAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Spline::NAPPointMeta*))((::PBYTE)hIl2Cpp + CKLAIIGMJLM__CTOR_1_OFFSET))(this, LDGFBEOMGAN);
	}
};
