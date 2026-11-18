#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBGABOFHFHL.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define NOHOHLMKMGG_NCONPHBDMGI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x6FE3C0)

inline static constexpr unsigned int NOHOHLMKMGG_NCONPHBDMGI_TypeDefinitionIndex = 47824;

struct alignas(8) NOHOHLMKMGG_NCONPHBDMGI
{
	::EBGABOFHFHL CCBCKDMNLBE; // 0x10
	::UnityEngine::Vector3 BEPMDFENBMH; // 0x14
	::System::Single CCNBONGLPPH; // 0x20
	::System::Single KKAMDFNMMJH; // 0x24
	::System::Int32 HCMHGMADHCN; // 0x28
	::System::Byte _padding0[0x4];
	::UnityEngine::Transform* CBOMBHILAEA; // 0x30
	::UnityEngine::Vector3 MPLDDNMCECG; // 0x38

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOHLMKMGG_NCONPHBDMGI_PHOADBJGFBE_OFFSET))(this);
	}
};
