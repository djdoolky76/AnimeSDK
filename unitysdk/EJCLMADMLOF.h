#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define EJCLMADMLOF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFE16D40)
#define EJCLMADMLOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFE169F0)
#define EJCLMADMLOF__CTOR_OFFSET UNITYSDK_OFFSET(0xFE16D30)

inline static constexpr unsigned int EJCLMADMLOF_TypeDefinitionIndex = 58205;

class EJCLMADMLOF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FJGPOOLCOEP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ADEPIHHHGEP; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x28
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::UnityEngine::GameObject* KNCAPNAHGPP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCLMADMLOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJCLMADMLOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJCLMADMLOF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
