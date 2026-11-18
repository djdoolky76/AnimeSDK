#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define GCKIHKGNLHO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x165E5E10)
#define GCKIHKGNLHO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x165E5D20)
#define GCKIHKGNLHO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x165E5B90)
#define GCKIHKGNLHO__CTOR_OFFSET UNITYSDK_OFFSET(0x165E5E00)

inline static constexpr unsigned int GCKIHKGNLHO_TypeDefinitionIndex = 84148;

class GCKIHKGNLHO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* HJDAMCBKNEI; // 0x18
	::FGCOIBFFCHB* LICINCMCCCN; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKIHKGNLHO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCKIHKGNLHO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKIHKGNLHO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCKIHKGNLHO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
