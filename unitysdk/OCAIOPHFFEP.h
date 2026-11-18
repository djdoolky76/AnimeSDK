#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CNLNPKGHGBI;
class IOOIHHOJOPI;
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define OCAIOPHFFEP_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1842D8C0)
#define OCAIOPHFFEP_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x1842DF00)
#define OCAIOPHFFEP_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x1842DDC0)
#define OCAIOPHFFEP_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x1842DCE0)
#define OCAIOPHFFEP_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1842DE70)
#define OCAIOPHFFEP_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x1842DC00)
#define OCAIOPHFFEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1842DBB0)

inline static constexpr unsigned int OCAIOPHFFEP_TypeDefinitionIndex = 82108;

class OCAIOPHFFEP : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::CNLNPKGHGBI*>* JMINOGAOFIL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIOPHFFEP__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + OCAIOPHFFEP_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* LOPABKBANAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIOPHFFEP_LOPABKBANAN_OFFSET))(this);
	}

	::System::String* JHMPNJLFHKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIOPHFFEP_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Boolean IPCDDNMMKPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIOPHFFEP_IPCDDNMMKPF_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::CNLNPKGHGBI* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::CNLNPKGHGBI*))((::PBYTE)hIl2Cpp + OCAIOPHFFEP_KDGMEFEJMGJ_OFFSET))(this, LJBPECKCCEA);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIOPHFFEP_HPPLBNIKOLN_OFFSET))(this);
	}
};
