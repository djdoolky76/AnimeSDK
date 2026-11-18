#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GOPIDEDEMDN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10FF9C00)
#define GOPIDEDEMDN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10FF9B30)
#define GOPIDEDEMDN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FF9960)
#define GOPIDEDEMDN__CTOR_OFFSET UNITYSDK_OFFSET(0x10FF9BF0)

inline static constexpr unsigned int GOPIDEDEMDN_TypeDefinitionIndex = 41808;

class GOPIDEDEMDN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MFKBCHAJOGK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* OAKAIIJLMIL; // 0x20
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x28
	::UnityEngine::UI::Button* HJDAMCBKNEI; // 0x30
	::UnityEngine::GameObject* OGDHHANGGIG; // 0x38
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPIDEDEMDN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOPIDEDEMDN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOPIDEDEMDN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPIDEDEMDN_KGEBDLGBGNM_OFFSET))(this);
	}
};
