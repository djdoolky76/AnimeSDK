#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class OIFFHDLKJIF;
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define BDGOAAJEOKG_AMABEFBJFAA_OFFSET UNITYSDK_OFFSET(0x12D1ABC0)
#define BDGOAAJEOKG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x12D1A6B0)
#define BDGOAAJEOKG_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x12D1AA80)
#define BDGOAAJEOKG_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x12D1AE40)
#define BDGOAAJEOKG_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x12D1ACF0)
#define BDGOAAJEOKG_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x12D1B0C0)
#define BDGOAAJEOKG_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x12D1AF70)
#define BDGOAAJEOKG__CTOR_OFFSET UNITYSDK_OFFSET(0x12D1AA30)

inline static constexpr unsigned int BDGOAAJEOKG_TypeDefinitionIndex = 68330;

class BDGOAAJEOKG : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::OIFFHDLKJIF*>* EJANOMALBNM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGOAAJEOKG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + BDGOAAJEOKG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGOAAJEOKG_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::Boolean AMABEFBJFAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGOAAJEOKG_AMABEFBJFAA_OFFSET))(this);
	}

	::System::String* JHMPNJLFHKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGOAAJEOKG_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Boolean IPCDDNMMKPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGOAAJEOKG_IPCDDNMMKPF_OFFSET))(this);
	}

	::System::String* LOPABKBANAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGOAAJEOKG_LOPABKBANAN_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::OIFFHDLKJIF* EJANOMALBNM)
	{
		return ((::System::Void(*)(::PVOID, ::OIFFHDLKJIF*))((::PBYTE)hIl2Cpp + BDGOAAJEOKG_KDGMEFEJMGJ_OFFSET))(this, EJANOMALBNM);
	}
};
