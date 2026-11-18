#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IAPOCHDBOII;
class IOOIHHOJOPI;
namespace MoleMole { class MainCitySidebarItemConfig; }
namespace MoleMole { class UIMainCitySidebarItemContext; }
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class JIOLFCAGOFH_1;

#define DCLDBLFKACH_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x168A5630)
#define DCLDBLFKACH_GBHNCEECJKM_OFFSET UNITYSDK_OFFSET(0x168A6C30)
#define DCLDBLFKACH_GFBJLHMNBAD_OFFSET UNITYSDK_OFFSET(0x168A7250)
#define DCLDBLFKACH_IBIKKADEEMD_OFFSET UNITYSDK_OFFSET(0x168A70E0)
#define DCLDBLFKACH_JKKAAHEBJPC_OFFSET UNITYSDK_OFFSET(0x168A6F90)
#define DCLDBLFKACH_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x168A5D60)
#define DCLDBLFKACH_KFGFIPGNNNO_OFFSET UNITYSDK_OFFSET(0x168A7360)
#define DCLDBLFKACH_MHPJAOMKDNH_OFFSET UNITYSDK_OFFSET(0x168A5CE0)
#define DCLDBLFKACH_OOBDNMFCPCE_OFFSET UNITYSDK_OFFSET(0x168A7260)
#define DCLDBLFKACH_PAHCOLNGAID_OFFSET UNITYSDK_OFFSET(0x168A6D10)
#define DCLDBLFKACH_PEPDPCGBKIB_OFFSET UNITYSDK_OFFSET(0x168A71C0)
#define DCLDBLFKACH__CTOR_OFFSET UNITYSDK_OFFSET(0x168A5C90)

inline static constexpr unsigned int DCLDBLFKACH_TypeDefinitionIndex = 38363;

class DCLDBLFKACH : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIMainCitySidebarItemContext*>* DAAAEJDBNFI; // 0x50
	::MoleMole::MainCitySidebarItemConfig* IGGJKIJIJIA; // 0x58
	::JIOLFCAGOFH_1<::IAPOCHDBOII*>* CEJENBBHBBG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLDBLFKACH__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + DCLDBLFKACH_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void MHPJAOMKDNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLDBLFKACH_MHPJAOMKDNH_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIMainCitySidebarItemContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemContext*))((::PBYTE)hIl2Cpp + DCLDBLFKACH_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean GBHNCEECJKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLDBLFKACH_GBHNCEECJKM_OFFSET))(this);
	}

	::System::String* PAHCOLNGAID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLDBLFKACH_PAHCOLNGAID_OFFSET))(this);
	}

	::IAPOCHDBOII* JKKAAHEBJPC()
	{
		return ((::IAPOCHDBOII*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLDBLFKACH_JKKAAHEBJPC_OFFSET))(this);
	}

	::System::Boolean IBIKKADEEMD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLDBLFKACH_IBIKKADEEMD_OFFSET))(this);
	}

	::System::Boolean PEPDPCGBKIB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLDBLFKACH_PEPDPCGBKIB_OFFSET))(this);
	}

	::DBMAHDDGMHM_1<::MoleMole::UIMainCitySidebarItemContext*>* GFBJLHMNBAD()
	{
		return ((::DBMAHDDGMHM_1<::MoleMole::UIMainCitySidebarItemContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLDBLFKACH_GFBJLHMNBAD_OFFSET))(this);
	}

	::System::String* OOBDNMFCPCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLDBLFKACH_OOBDNMFCPCE_OFFSET))(this);
	}

	::System::Boolean KFGFIPGNNNO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLDBLFKACH_KFGFIPGNNNO_OFFSET))(this);
	}
};
