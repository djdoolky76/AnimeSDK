#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DBGHLMAANFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12BA2030)
#define DBGHLMAANFJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12BA1F60)
#define DBGHLMAANFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BA1DE0)
#define DBGHLMAANFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA2020)

inline static constexpr unsigned int DBGHLMAANFJ_TypeDefinitionIndex = 43316;

class DBGHLMAANFJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NCMBJPNBOBD; // 0x18
	::FGCOIBFFCHB* PMKFHIFIBPM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BIOGEIHKABE; // 0x28
	::UnityEngine::Transform* IPJFNLGKFKK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHLMAANFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBGHLMAANFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBGHLMAANFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHLMAANFJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
