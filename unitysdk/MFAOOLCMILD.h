#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMEKFNOLPND.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MFAOOLCMILD__CTOR_OFFSET UNITYSDK_OFFSET(0x753620)

inline static constexpr unsigned int MFAOOLCMILD_TypeDefinitionIndex = 42335;

struct alignas(4) MFAOOLCMILD
{
	::System::Int32 HBIHLKHJKGF; // 0x10
	::GMEKFNOLPND FJNEIEJIIKG; // 0x14
	::System::Boolean FFCPIEDHBDP; // 0x18
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x1C

	::System::Void _ctor(::System::Int32 IIFMJFJOOCK, ::GMEKFNOLPND NFKAJAIMGJM, ::System::Boolean GIPECNMEEPB, ::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::GMEKFNOLPND, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MFAOOLCMILD__CTOR_OFFSET))(this, IIFMJFJOOCK, NFKAJAIMGJM, GIPECNMEEPB, OHOGDOMNHNK);
	}
};
