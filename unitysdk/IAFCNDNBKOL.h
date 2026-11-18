#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBPCoreRewardShowWidgetWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define IAFCNDNBKOL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1819F660)
#define IAFCNDNBKOL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1819F5D0)
#define IAFCNDNBKOL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1819F2A0)
#define IAFCNDNBKOL_PKCGGBJEPCB_OFFSET UNITYSDK_OFFSET(0x1819F3F0)
#define IAFCNDNBKOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1819F650)

inline static constexpr unsigned int IAFCNDNBKOL_TypeDefinitionIndex = 59527;

class IAFCNDNBKOL : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadCustomList* NGELIGHHNGF; // 0x18
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>*>* GBLDMPPMIML; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFCNDNBKOL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAFCNDNBKOL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAFCNDNBKOL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>*>* PKCGGBJEPCB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAFCNDNBKOL_PKCGGBJEPCB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFCNDNBKOL_KGEBDLGBGNM_OFFSET))(this);
	}
};
