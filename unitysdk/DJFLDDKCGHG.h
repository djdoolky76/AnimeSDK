#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIBPItemIconRowWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
template <typename T> class MEKABAIJMNM_1;

#define DJFLDDKCGHG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x148AB690)
#define DJFLDDKCGHG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x148AB580)
#define DJFLDDKCGHG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x148AB380)
#define DJFLDDKCGHG__CTOR_OFFSET UNITYSDK_OFFSET(0x148AB680)

inline static constexpr unsigned int DJFLDDKCGHG_TypeDefinitionIndex = 71660;

class DJFLDDKCGHG : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnWidgetController*>* IOKMAADCDAO; // 0x18
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIBPItemIconRowWidgetController*>* HEGBABBMDJJ; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::UnityEngine::GameObject* IMDLHCPGEDN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFLDDKCGHG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJFLDDKCGHG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFLDDKCGHG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJFLDDKCGHG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
