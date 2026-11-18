#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NNPFAIBHCMC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DMAEGJPAOGD_BOFDALMMALN_OFFSET UNITYSDK_OFFSET(0x7FC3A70)
#define DMAEGJPAOGD_FAMKKNANKCE_OFFSET UNITYSDK_OFFSET(0x7FC3B60)
#define DMAEGJPAOGD_GLLIJALGJEM_OFFSET UNITYSDK_OFFSET(0x7FC3720)
#define DMAEGJPAOGD_NBIEMLOOFCG_OFFSET UNITYSDK_OFFSET(0x7FC33F0)
#define DMAEGJPAOGD__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FC3290)

inline static constexpr unsigned int DMAEGJPAOGD_TypeDefinitionIndex = 38576;

class DMAEGJPAOGD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Single>** StaticGet_IPCJDPJENAC()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(DMAEGJPAOGD_TypeDefinitionIndex)->GetStaticField(0x51310);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_PJOLOCOCDPL()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(DMAEGJPAOGD_TypeDefinitionIndex)->GetStaticField(0x51318);
	}
	// static const ::System::Single HALJIPAAJPJ; // 0x0
	// static const ::System::Single BBPFHJGKBHF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMAEGJPAOGD__CCTOR_OFFSET))();
	}

	static ::System::Boolean NBIEMLOOFCG(::UnityEngine::Vector3 JDJFPEDKLHE, ::UnityEngine::Vector3 MKNKNMLEJFM, ::UnityEngine::Vector3 JBCNPOHMGPE, ::System::Single BDEDDEGJFKL, ::NNPFAIBHCMC& HDDJBJKIMIJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::NNPFAIBHCMC&))((::PBYTE)hIl2Cpp + DMAEGJPAOGD_NBIEMLOOFCG_OFFSET))(JDJFPEDKLHE, MKNKNMLEJFM, JBCNPOHMGPE, BDEDDEGJFKL, HDDJBJKIMIJ);
	}

	static ::System::Boolean GLLIJALGJEM(::UnityEngine::Vector3 JDJFPEDKLHE, ::UnityEngine::Vector3 MKNKNMLEJFM, ::UnityEngine::Vector3 DLAFOCCLAKG, ::NNPFAIBHCMC& HDDJBJKIMIJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::NNPFAIBHCMC&))((::PBYTE)hIl2Cpp + DMAEGJPAOGD_GLLIJALGJEM_OFFSET))(JDJFPEDKLHE, MKNKNMLEJFM, DLAFOCCLAKG, HDDJBJKIMIJ);
	}

	static ::UnityEngine::Vector3 BOFDALMMALN(::UnityEngine::Vector3 CFJFMMGPGKE)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DMAEGJPAOGD_BOFDALMMALN_OFFSET))(CFJFMMGPGKE);
	}

	static ::System::Boolean FAMKKNANKCE(::UnityEngine::Vector3 JDJFPEDKLHE, ::UnityEngine::Vector3 MKNKNMLEJFM, ::NNPFAIBHCMC& HDDJBJKIMIJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::NNPFAIBHCMC&))((::PBYTE)hIl2Cpp + DMAEGJPAOGD_FAMKKNANKCE_OFFSET))(JDJFPEDKLHE, MKNKNMLEJFM, HDDJBJKIMIJ);
	}
};
