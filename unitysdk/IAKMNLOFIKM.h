#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define IAKMNLOFIKM_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1608CA20)
#define IAKMNLOFIKM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1608C980)
#define IAKMNLOFIKM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1608C810)
#define IAKMNLOFIKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1608CBD0)

inline static constexpr unsigned int IAKMNLOFIKM_TypeDefinitionIndex = 71219;

class IAKMNLOFIKM : public ::IOOIHHOJOPI
{
public:
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKMNLOFIKM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAKMNLOFIKM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKMNLOFIKM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKMNLOFIKM_EFKGNFCEENK_OFFSET))(this);
	}
};
