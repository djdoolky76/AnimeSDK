#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define AHAOOPGIBHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12655D10)
#define AHAOOPGIBHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12655C60)
#define AHAOOPGIBHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12655AC0)
#define AHAOOPGIBHA__CTOR_OFFSET UNITYSDK_OFFSET(0x12655D00)

inline static constexpr unsigned int AHAOOPGIBHA_TypeDefinitionIndex = 52987;

class AHAOOPGIBHA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* IMDLHCPGEDN; // 0x18
	::UnityEngine::Transform* DOFPEODKDLK; // 0x20
	::UnityEngine::UI::Button* OEPAJHOAAAI; // 0x28
	::FGCOIBFFCHB* LICINCMCCCN; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAOOPGIBHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHAOOPGIBHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAOOPGIBHA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHAOOPGIBHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
