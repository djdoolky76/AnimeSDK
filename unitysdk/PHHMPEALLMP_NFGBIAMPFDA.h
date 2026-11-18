#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define PHHMPEALLMP_NFGBIAMPFDA_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x1197D170)
#define PHHMPEALLMP_NFGBIAMPFDA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1197D190)
#define PHHMPEALLMP_NFGBIAMPFDA_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x1197D180)
#define PHHMPEALLMP_NFGBIAMPFDA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1197D0D0)
#define PHHMPEALLMP_NFGBIAMPFDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1197D160)

inline static constexpr unsigned int PHHMPEALLMP_NFGBIAMPFDA_TypeDefinitionIndex = 78079;

class PHHMPEALLMP_NFGBIAMPFDA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* _DEJNOJBAFDE_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHMPEALLMP_NFGBIAMPFDA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHHMPEALLMP_NFGBIAMPFDA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::GameObject* CJBFCLMFDOM()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHMPEALLMP_NFGBIAMPFDA_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PHHMPEALLMP_NFGBIAMPFDA_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHHMPEALLMP_NFGBIAMPFDA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
