#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapLeftTastListRow02Context; }
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define PLMPHHLENGM_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x150D8540)
#define PLMPHHLENGM_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x150D8A60)
#define PLMPHHLENGM_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x150D8AF0)
#define PLMPHHLENGM_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x150D8920)
#define PLMPHHLENGM_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x150D8880)
#define PLMPHHLENGM_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x150D89C0)
#define PLMPHHLENGM__CTOR_OFFSET UNITYSDK_OFFSET(0x150D8830)

inline static constexpr unsigned int PLMPHHLENGM_TypeDefinitionIndex = 58666;

class PLMPHHLENGM : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapLeftTastListRow02Context*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPHHLENGM__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + PLMPHHLENGM_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapLeftTastListRow02Context* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow02Context*))((::PBYTE)hIl2Cpp + PLMPHHLENGM_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::String* JHMPNJLFHKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPHHLENGM_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Void LOPABKBANAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPHHLENGM_LOPABKBANAN_OFFSET))(this);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPHHLENGM_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::Boolean IPCDDNMMKPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPHHLENGM_IPCDDNMMKPF_OFFSET))(this);
	}
};
