#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define APMDKBIOKII_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143BDB20)
#define APMDKBIOKII_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x143BDA90)
#define APMDKBIOKII_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143BD920)
#define APMDKBIOKII__CTOR_OFFSET UNITYSDK_OFFSET(0x143BDB10)

inline static constexpr unsigned int APMDKBIOKII_TypeDefinitionIndex = 72674;

class APMDKBIOKII : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButton* HJDAMCBKNEI; // 0x18
	::UnityEngine::Transform* IMDLHCPGEDN; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMDKBIOKII__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APMDKBIOKII_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APMDKBIOKII_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMDKBIOKII_KGEBDLGBGNM_OFFSET))(this);
	}
};
