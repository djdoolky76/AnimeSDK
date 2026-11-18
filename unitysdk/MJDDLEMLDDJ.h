#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define MJDDLEMLDDJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11A05CA0)
#define MJDDLEMLDDJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11A05BD0)
#define MJDDLEMLDDJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11A05A00)
#define MJDDLEMLDDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11A05C90)

inline static constexpr unsigned int MJDDLEMLDDJ_TypeDefinitionIndex = 88957;

class MJDDLEMLDDJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Button* OEPAJHOAAAI; // 0x18
	::UnityEngine::Transform* DOFPEODKDLK; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::FGCOIBFFCHB* LICINCMCCCN; // 0x30
	::FGCOIBFFCHB* KEHPAOOHNOI; // 0x38
	::UnityEngine::Transform* IMDLHCPGEDN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDDLEMLDDJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJDDLEMLDDJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJDDLEMLDDJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDDLEMLDDJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
