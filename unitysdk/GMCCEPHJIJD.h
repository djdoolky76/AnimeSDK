#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapLeftLocationRowContext; }
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define GMCCEPHJIJD_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x14CFD580)
#define GMCCEPHJIJD_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x14CFD950)
#define GMCCEPHJIJD_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x14CFD9E0)
#define GMCCEPHJIJD_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x14CFD8C0)
#define GMCCEPHJIJD_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x14CFDB00)
#define GMCCEPHJIJD_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x14CFDA70)
#define GMCCEPHJIJD__CTOR_OFFSET UNITYSDK_OFFSET(0x14CFD870)

inline static constexpr unsigned int GMCCEPHJIJD_TypeDefinitionIndex = 70882;

class GMCCEPHJIJD : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapLeftLocationRowContext*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCCEPHJIJD__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + GMCCEPHJIJD_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCCEPHJIJD_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCCEPHJIJD_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::String* IPCDDNMMKPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCCEPHJIJD_IPCDDNMMKPF_OFFSET))(this);
	}

	::System::String* LOPABKBANAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCCEPHJIJD_LOPABKBANAN_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapLeftLocationRowContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + GMCCEPHJIJD_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}
};
