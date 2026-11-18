#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DACKJEPHFBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x147BE930)
#define DACKJEPHFBJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x147BE840)
#define DACKJEPHFBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x147BE600)
#define DACKJEPHFBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x147BE920)

inline static constexpr unsigned int DACKJEPHFBJ_TypeDefinitionIndex = 73091;

class DACKJEPHFBJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* MLDHFJKCBBD; // 0x18
	::UnityEngine::GameObject* EOFGGGIGKED; // 0x20
	::UnityEngine::GameObject* HDAELHOLDCI; // 0x28
	::FILNFMCNCFE* DGGGEOCFEPN; // 0x30
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x38
	::UnityEngine::Transform* KBILENLEEOD; // 0x40
	::UnityEngine::Transform* DKGBIHMPDDA; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::UnityEngine::GameObject* FEJBHILJLHB; // 0x58
	::UnityEngine::GameObject* EEOBCOFLEON; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACKJEPHFBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DACKJEPHFBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DACKJEPHFBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACKJEPHFBJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
