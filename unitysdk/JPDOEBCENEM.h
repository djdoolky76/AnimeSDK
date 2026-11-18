#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIMainCitySidebarItemGatherContext; }
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define JPDOEBCENEM_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1A48B7A0)
#define JPDOEBCENEM_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x1A48BB10)
#define JPDOEBCENEM_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x1A48B9F0)
#define JPDOEBCENEM_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x1A48BA80)
#define JPDOEBCENEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48B9A0)

inline static constexpr unsigned int JPDOEBCENEM_TypeDefinitionIndex = 91136;

class JPDOEBCENEM : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIMainCitySidebarItemGatherContext*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDOEBCENEM__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JPDOEBCENEM_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDOEBCENEM_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIMainCitySidebarItemGatherContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemGatherContext*))((::PBYTE)hIl2Cpp + JPDOEBCENEM_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDOEBCENEM_HPPLBNIKOLN_OFFSET))(this);
	}
};
