#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapRightListRowProgressWidgetContext; }
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define GNIOHIFLNAJ_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x17A1A900)
#define GNIOHIFLNAJ_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x17A1AE00)
#define GNIOHIFLNAJ_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x17A1AE90)
#define GNIOHIFLNAJ_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x17A1ACE0)
#define GNIOHIFLNAJ_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x17A1AD70)
#define GNIOHIFLNAJ_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x17A1AC50)
#define GNIOHIFLNAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1AC00)

inline static constexpr unsigned int GNIOHIFLNAJ_TypeDefinitionIndex = 79934;

class GNIOHIFLNAJ : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapRightListRowProgressWidgetContext*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOHIFLNAJ__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + GNIOHIFLNAJ_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* LOPABKBANAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOHIFLNAJ_LOPABKBANAN_OFFSET))(this);
	}

	::System::String* JHMPNJLFHKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOHIFLNAJ_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapRightListRowProgressWidgetContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightListRowProgressWidgetContext*))((::PBYTE)hIl2Cpp + GNIOHIFLNAJ_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOHIFLNAJ_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::Single IPCDDNMMKPF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOHIFLNAJ_IPCDDNMMKPF_OFFSET))(this);
	}
};
