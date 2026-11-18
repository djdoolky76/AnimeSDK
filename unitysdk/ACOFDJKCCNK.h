#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class OIFFHDLKJIF;
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define ACOFDJKCCNK_AMABEFBJFAA_OFFSET UNITYSDK_OFFSET(0x17CB7AD0)
#define ACOFDJKCCNK_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x17CB7700)
#define ACOFDJKCCNK_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x17CB7D30)
#define ACOFDJKCCNK_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x17CB7C00)
#define ACOFDJKCCNK_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x17CB7E70)
#define ACOFDJKCCNK_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x17CB8110)
#define ACOFDJKCCNK_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x17CB7FC0)
#define ACOFDJKCCNK__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB7A80)

inline static constexpr unsigned int ACOFDJKCCNK_TypeDefinitionIndex = 66446;

class ACOFDJKCCNK : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::OIFFHDLKJIF*>* EJANOMALBNM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOFDJKCCNK__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + ACOFDJKCCNK_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean AMABEFBJFAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOFDJKCCNK_AMABEFBJFAA_OFFSET))(this);
	}

	::System::Boolean IPCDDNMMKPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOFDJKCCNK_IPCDDNMMKPF_OFFSET))(this);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOFDJKCCNK_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::String* JHMPNJLFHKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOFDJKCCNK_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::String* LOPABKBANAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOFDJKCCNK_LOPABKBANAN_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::OIFFHDLKJIF* EJANOMALBNM)
	{
		return ((::System::Void(*)(::PVOID, ::OIFFHDLKJIF*))((::PBYTE)hIl2Cpp + ACOFDJKCCNK_KDGMEFEJMGJ_OFFSET))(this, EJANOMALBNM);
	}
};
