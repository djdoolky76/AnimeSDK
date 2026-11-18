#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapRoleCardRowItemWidgetContext; }
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define HLBOIMCHHLP_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x140BEEF0)
#define HLBOIMCHHLP_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x140BF3F0)
#define HLBOIMCHHLP_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x140BF1D0)
#define HLBOIMCHHLP_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x140BF2A0)
#define HLBOIMCHHLP_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x140BF330)
#define HLBOIMCHHLP__CTOR_OFFSET UNITYSDK_OFFSET(0x140BF180)

inline static constexpr unsigned int HLBOIMCHHLP_TypeDefinitionIndex = 88380;

class HLBOIMCHHLP : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBOIMCHHLP__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + HLBOIMCHHLP_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBOIMCHHLP_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*))((::PBYTE)hIl2Cpp + HLBOIMCHHLP_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean LOPABKBANAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBOIMCHHLP_LOPABKBANAN_OFFSET))(this);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBOIMCHHLP_HPPLBNIKOLN_OFFSET))(this);
	}
};
