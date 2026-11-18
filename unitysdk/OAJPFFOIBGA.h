#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDisplayCaseEditWidgetController; }
namespace MoleMole { class UIDisplayCasePreviewWidgetController; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define OAJPFFOIBGA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13663110)
#define OAJPFFOIBGA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13662FA0)
#define OAJPFFOIBGA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13662CF0)
#define OAJPFFOIBGA__CTOR_OFFSET UNITYSDK_OFFSET(0x13663100)

inline static constexpr unsigned int OAJPFFOIBGA_TypeDefinitionIndex = 53960;

class OAJPFFOIBGA : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* JIKEHPNIEBP; // 0x18
	::LGINJIKKBJA* EFDPCMCGGLH; // 0x20
	::LGINJIKKBJA* LIJEBPIEEDJ; // 0x28
	::LGINJIKKBJA* DNNFJGBMMAM; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIDisplayCasePreviewWidgetController*>* BKGCAPKCJIH; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIDisplayCaseEditWidgetController*>* FMPMOEIHCHG; // 0x40
	::MoleMole::MonoGamepadVirtualCursor* LCAFDIBAPDA; // 0x48
	::LGINJIKKBJA* ILFJBJGDOIN; // 0x50
	::UnityEngine::UI::Extension::UIImgEventTrigger* KNHLOHIEIIL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJPFFOIBGA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAJPFFOIBGA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAJPFFOIBGA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJPFFOIBGA_KGEBDLGBGNM_OFFSET))(this);
	}
};
