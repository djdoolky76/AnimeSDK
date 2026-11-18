#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HOJJEACCIMM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12E925D0)
#define HOJJEACCIMM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E92490)
#define HOJJEACCIMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E92290)
#define HOJJEACCIMM__CTOR_OFFSET UNITYSDK_OFFSET(0x12E925C0)

inline static constexpr unsigned int HOJJEACCIMM_TypeDefinitionIndex = 58719;

class HOJJEACCIMM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* FCPPEFBBJDK; // 0x18
	::FGCOIBFFCHB* JBDJKCHKEDN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x30
	::MoleMole::NotificationBadge* IDPCIDBALIB; // 0x38
	::FGCOIBFFCHB* KDENFANHNPI; // 0x40
	::UnityEngine::Transform* LFGIFBDIFKI; // 0x48
	::FGCOIBFFCHB* ACAINPAEELA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJJEACCIMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOJJEACCIMM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOJJEACCIMM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJJEACCIMM_KGEBDLGBGNM_OFFSET))(this);
	}
};
