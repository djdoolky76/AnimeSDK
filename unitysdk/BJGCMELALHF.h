#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapMissionProgressRowContext; }
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define BJGCMELALHF_AMABEFBJFAA_OFFSET UNITYSDK_OFFSET(0x128ACC50)
#define BJGCMELALHF_EHEKAHIIGEH_OFFSET UNITYSDK_OFFSET(0x128ACA60)
#define BJGCMELALHF_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x128AC1A0)
#define BJGCMELALHF_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x128AC740)
#define BJGCMELALHF_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x128ACB10)
#define BJGCMELALHF_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x128AC630)
#define BJGCMELALHF_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x128AC8C0)
#define BJGCMELALHF_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x128AC950)
#define BJGCMELALHF__CTOR_OFFSET UNITYSDK_OFFSET(0x128AC5E0)

inline static constexpr unsigned int BJGCMELALHF_TypeDefinitionIndex = 40767;

class BJGCMELALHF : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapMissionProgressRowContext*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGCMELALHF__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + BJGCMELALHF_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGCMELALHF_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGCMELALHF_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapMissionProgressRowContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapMissionProgressRowContext*))((::PBYTE)hIl2Cpp + BJGCMELALHF_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean LOPABKBANAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGCMELALHF_LOPABKBANAN_OFFSET))(this);
	}

	::System::String* EHEKAHIIGEH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGCMELALHF_EHEKAHIIGEH_OFFSET))(this);
	}

	::System::String* IPCDDNMMKPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGCMELALHF_IPCDDNMMKPF_OFFSET))(this);
	}

	::System::String* AMABEFBJFAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGCMELALHF_AMABEFBJFAA_OFFSET))(this);
	}
};
