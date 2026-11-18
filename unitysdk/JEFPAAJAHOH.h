#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JEFPAAJAHOH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1944FE60)
#define JEFPAAJAHOH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1944FD90)
#define JEFPAAJAHOH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1944FBF0)
#define JEFPAAJAHOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1944FE50)

inline static constexpr unsigned int JEFPAAJAHOH_TypeDefinitionIndex = 67107;

class JEFPAAJAHOH : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* KHOJKFHFKIJ; // 0x18
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x30
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFPAAJAHOH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEFPAAJAHOH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEFPAAJAHOH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFPAAJAHOH_KGEBDLGBGNM_OFFSET))(this);
	}
};
