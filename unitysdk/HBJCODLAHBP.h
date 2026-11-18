#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define HBJCODLAHBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B3A1C0)
#define HBJCODLAHBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B3A0D0)
#define HBJCODLAHBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B39F00)
#define HBJCODLAHBP__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3A1B0)

inline static constexpr unsigned int HBJCODLAHBP_TypeDefinitionIndex = 62801;

class HBJCODLAHBP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Text* JHGGHHOJDPF; // 0x20
	::UnityEngine::Transform* ADOHAICELPP; // 0x28
	::UnityEngine::Transform* GJFDNAOFDGF; // 0x30
	::UnityEngine::Transform* JMHAKBJKBIP; // 0x38
	::UnityEngine::UI::Text* EGGHNAPEMLP; // 0x40
	::FGCOIBFFCHB* JLPNOPDJPCH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJCODLAHBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBJCODLAHBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJCODLAHBP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBJCODLAHBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
