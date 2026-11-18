#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define EAEOPOJCHOA_KFPLGFBGMEF_EBABNBAGDOD_OFFSET UNITYSDK_OFFSET(0x7A2520)
#define EAEOPOJCHOA_KFPLGFBGMEF_GBBNKBBDLGM_OFFSET UNITYSDK_OFFSET(0x7A2430)

inline static constexpr unsigned int EAEOPOJCHOA_KFPLGFBGMEF_TypeDefinitionIndex = 93198;

struct alignas(8) EAEOPOJCHOA_KFPLGFBGMEF
{
	::Il2CppArray<::System::Object*>* OPCMGALKGKJ; // 0x10
	::UnityEngine::Vector3 KKOGANALONO; // 0x18
	::System::Single KMKBJKOEBMF; // 0x24
	::System::Single JBCNPOHMGPE; // 0x28

	::UnityEngine::Vector3 GBBNKBBDLGM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEOPOJCHOA_KFPLGFBGMEF_GBBNKBBDLGM_OFFSET))(this);
	}

	::UnityEngine::Vector3 EBABNBAGDOD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEOPOJCHOA_KFPLGFBGMEF_EBABNBAGDOD_OFFSET))(this);
	}
};
