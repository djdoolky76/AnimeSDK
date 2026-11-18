#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivitySkyPopRewardWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class CBCLGFEGHLJ_1;

#define HJEPMAPAMFP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B052F0)
#define HJEPMAPAMFP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B051F0)
#define HJEPMAPAMFP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B04FD0)
#define HJEPMAPAMFP__CTOR_OFFSET UNITYSDK_OFFSET(0x17B052E0)

inline static constexpr unsigned int HJEPMAPAMFP_TypeDefinitionIndex = 53181;

class HJEPMAPAMFP : public ::GIBMJLOJLKD
{
public:
	::CBCLGFEGHLJ_1<::MoleMole::UIActivitySkyPopRewardWidgetController*>* MENKKIHOPLG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMCHAKNNHCB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* OJJJAKNCNMG; // 0x28
	::CBCLGFEGHLJ_1<::MoleMole::UIActivitySkyPopRewardWidgetController*>* ODEKDEHOPHK; // 0x30
	::MoleMole::MonoGamepadModule* FECAIEJFFLA; // 0x38
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEPMAPAMFP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJEPMAPAMFP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJEPMAPAMFP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEPMAPAMFP_KGEBDLGBGNM_OFFSET))(this);
	}
};
