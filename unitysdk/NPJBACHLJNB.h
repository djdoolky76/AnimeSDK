#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NPJBACHLJNB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1004AC50)
#define NPJBACHLJNB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1004ABC0)
#define NPJBACHLJNB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1004A8F0)
#define NPJBACHLJNB__CTOR_OFFSET UNITYSDK_OFFSET(0x1004AC40)

inline static constexpr unsigned int NPJBACHLJNB_TypeDefinitionIndex = 52527;

class NPJBACHLJNB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CCIILJMPGGJ; // 0x18
	::UnityEngine::GameObject* MJMGANKGIFM; // 0x20
	::GCIMMDDIFBJ* CFMPIICEHLB; // 0x28
	::UnityEngine::GameObject* BFMAMGICJBF; // 0x30
	::GCIMMDDIFBJ* HKACGONCELL; // 0x38
	::GCIMMDDIFBJ* KDOFOMOEMFH; // 0x40
	::ShaderAniHelp* DPHFHCLFHJF; // 0x48
	::GCIMMDDIFBJ* LEIMMPPKMCP; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58
	::UnityEngine::GameObject* NPPEMICJMMM; // 0x60
	::GCIMMDDIFBJ* AFANPFFLBOO; // 0x68
	::UnityEngine::GameObject* FOCAEOBFMKB; // 0x70
	::UnityEngine::GameObject* COHEINFNMPF; // 0x78
	::ShaderAniHelp* DCGFEKDHDAL; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJBACHLJNB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPJBACHLJNB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJBACHLJNB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPJBACHLJNB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
