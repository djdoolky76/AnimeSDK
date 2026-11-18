#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_LNKGCGDKHHA;
namespace MoleMole { class CDN_DispatchData; }
namespace MoleMole { class ServerDispatchData; }
namespace System { class Exception; }
namespace System { class String; }

#define CHFJLNEHAAF_PNEJDCLKPKF_DHHLDMDBEIG_OFFSET UNITYSDK_OFFSET(0x19A05510)
#define CHFJLNEHAAF_PNEJDCLKPKF_EMOKIEBCLFI_OFFSET UNITYSDK_OFFSET(0x19A05550)
#define CHFJLNEHAAF_PNEJDCLKPKF_GCCKJLOPNDC_OFFSET UNITYSDK_OFFSET(0x19A05530)
#define CHFJLNEHAAF_PNEJDCLKPKF_HDGIHHEHJMP_OFFSET UNITYSDK_OFFSET(0x19A055B0)
#define CHFJLNEHAAF_PNEJDCLKPKF_LMDNGNJGJKB_OFFSET UNITYSDK_OFFSET(0x19A05540)
#define CHFJLNEHAAF_PNEJDCLKPKF_NDPJBAGBBFI_OFFSET UNITYSDK_OFFSET(0x19A05520)
#define CHFJLNEHAAF_PNEJDCLKPKF__CTOR_OFFSET UNITYSDK_OFFSET(0x19A05500)

inline static constexpr unsigned int CHFJLNEHAAF_PNEJDCLKPKF_TypeDefinitionIndex = 87348;

class CHFJLNEHAAF_PNEJDCLKPKF : public ::System::Object
{
public:
	::System::Exception* BENPBLMOAKD; // 0x10
	::System::String* BLLNHDIDKPA; // 0x18
	::MoleMole::ServerDispatchData* OPDPGAFHDMP; // 0x20
	::CHFJLNEHAAF_LNKGCGDKHHA* CAOMDIOGDHL; // 0x28
	::MoleMole::CDN_DispatchData* _KPMOHINNFJO_k__BackingField; // 0x30
	::System::Boolean _FCNHBDGINGK_k__BackingField; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 GOCLGFBDADB; // 0x3C
	::System::Int32 BAENMAHANME; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_PNEJDCLKPKF__CTOR_OFFSET))(this);
	}

	::System::Void DHHLDMDBEIG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_PNEJDCLKPKF_DHHLDMDBEIG_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::CDN_DispatchData* NDPJBAGBBFI()
	{
		return ((::MoleMole::CDN_DispatchData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_PNEJDCLKPKF_NDPJBAGBBFI_OFFSET))(this);
	}

	::System::Void GCCKJLOPNDC(::MoleMole::CDN_DispatchData* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CDN_DispatchData*))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_PNEJDCLKPKF_GCCKJLOPNDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LMDNGNJGJKB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_PNEJDCLKPKF_LMDNGNJGJKB_OFFSET))(this);
	}

	::System::Boolean EMOKIEBCLFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_PNEJDCLKPKF_EMOKIEBCLFI_OFFSET))(this);
	}

	::System::Int32 HDGIHHEHJMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_PNEJDCLKPKF_HDGIHHEHJMP_OFFSET))(this);
	}
};
