#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define LMBDOICOCKL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x151A7D00)
#define LMBDOICOCKL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x151A7C10)
#define LMBDOICOCKL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x151A7A20)
#define LMBDOICOCKL__CTOR_OFFSET UNITYSDK_OFFSET(0x151A7CF0)

inline static constexpr unsigned int LMBDOICOCKL_TypeDefinitionIndex = 92470;

class LMBDOICOCKL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::UnityEngine::UI::Extension::UIToggleButton* HJDAMCBKNEI; // 0x20
	::FGCOIBFFCHB* NJCJOIPGDAG; // 0x28
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x30
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x38
	::FGCOIBFFCHB* KJOFEBFGGLA; // 0x40
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x48
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBDOICOCKL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LMBDOICOCKL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBDOICOCKL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LMBDOICOCKL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
