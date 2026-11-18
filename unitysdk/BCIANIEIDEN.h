#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BCIANIEIDEN__CTOR_OFFSET UNITYSDK_OFFSET(0x7479E0)

inline static constexpr unsigned int BCIANIEIDEN_TypeDefinitionIndex = 69492;

struct alignas(4) BCIANIEIDEN
{
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::UnityEngine::Vector3 NFMFDJDFCFM; // 0x1C
	::System::Single PFPNPKNBNFI; // 0x28
	::System::Int32 ODLHMLGNMNJ; // 0x2C

	::System::Void _ctor(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 DAAEHEHLLLD, ::System::Single BDEDDEGJFKL, ::System::Int32 FBNGKPGLADH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BCIANIEIDEN__CTOR_OFFSET))(this, OHOGDOMNHNK, DAAEHEHLLLD, BDEDDEGJFKL, FBNGKPGLADH);
	}
};
