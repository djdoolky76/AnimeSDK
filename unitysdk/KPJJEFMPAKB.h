#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KPJJEFMPAKB__CTOR_OFFSET UNITYSDK_OFFSET(0x71F5D0)

inline static constexpr unsigned int KPJJEFMPAKB_TypeDefinitionIndex = 63505;

struct alignas(4) KPJJEFMPAKB
{
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::UnityEngine::Vector3 NFMFDJDFCFM; // 0x1C
	::System::Single AFIKJAIPLNG; // 0x28
	::System::Single PFPNPKNBNFI; // 0x2C
	::System::Int32 ODLHMLGNMNJ; // 0x30

	::System::Void _ctor(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 DAAEHEHLLLD, ::System::Single NCCDJLDKFGA, ::System::Single BDEDDEGJFKL, ::System::Int32 FBNGKPGLADH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + KPJJEFMPAKB__CTOR_OFFSET))(this, OHOGDOMNHNK, DAAEHEHLLLD, NCCDJLDKFGA, BDEDDEGJFKL, FBNGKPGLADH);
	}
};
