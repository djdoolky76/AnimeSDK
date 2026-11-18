#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define IEDJGCKDLBG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140DAED0)
#define IEDJGCKDLBG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140DAE40)
#define IEDJGCKDLBG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140DABD0)
#define IEDJGCKDLBG__CTOR_OFFSET UNITYSDK_OFFSET(0x140DAEC0)

inline static constexpr unsigned int IEDJGCKDLBG_TypeDefinitionIndex = 64671;

class IEDJGCKDLBG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* JHLNILOJCCC; // 0x18
	::FGCOIBFFCHB* MKKBLIFPING; // 0x20
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x28
	::UnityEngine::GameObject* GDPGMKJEDIC; // 0x30
	::UnityEngine::GameObject* GJFKDEHNOFK; // 0x38
	::UnityEngine::GameObject* GHAJPGIDPHA; // 0x40
	::UnityEngine::GameObject* LBMPDPJKNJH; // 0x48
	::UnityEngine::GameObject* IBAPFELBGGL; // 0x50
	::UnityEngine::GameObject* DLNONMIBDBC; // 0x58
	::UnityEngine::GameObject* MALDPDBOIKO; // 0x60
	::UnityEngine::GameObject* IBPJBPNOCJK; // 0x68
	::UnityEngine::GameObject* BOCABGIOELL; // 0x70
	::UnityEngine::GameObject* HPHMIOBGEKE; // 0x78
	::UnityEngine::GameObject* GOBLKNCNLFA; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDJGCKDLBG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEDJGCKDLBG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEDJGCKDLBG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDJGCKDLBG_KGEBDLGBGNM_OFFSET))(this);
	}
};
