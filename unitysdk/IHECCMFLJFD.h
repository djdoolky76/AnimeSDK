#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOFBPGAMLM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHECCMFLJFD_BDEMCKIHDHM_OFFSET UNITYSDK_OFFSET(0x16108D10)
#define IHECCMFLJFD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16108C10)
#define IHECCMFLJFD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16108820)
#define IHECCMFLJFD_HPEAAJHKPNL_OFFSET UNITYSDK_OFFSET(0x16108940)
#define IHECCMFLJFD_KIHFAPCGIHL_OFFSET UNITYSDK_OFFSET(0x16108830)
#define IHECCMFLJFD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16108D00)
#define IHECCMFLJFD_ODGGIAADMLO_OFFSET UNITYSDK_OFFSET(0x16108E20)
#define IHECCMFLJFD__CTOR_OFFSET UNITYSDK_OFFSET(0x160E8B70)

inline static constexpr unsigned int IHECCMFLJFD_TypeDefinitionIndex = 9166;

class IHECCMFLJFD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* OBKFONNGICH; // 0x18
	::OAOFBPGAMLM HBDPAIKANDB; // 0x20
	::System::String* LMEIFPGHHNG; // 0x30
	::System::String* IDGAADJOMHA; // 0x38
	::System::Int32 FEMJAIBIMDL; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46

	::System::Void _ctor(::OAOFBPGAMLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OAOFBPGAMLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IHECCMFLJFD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHECCMFLJFD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KIHFAPCGIHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHECCMFLJFD_KIHFAPCGIHL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HPEAAJHKPNL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHECCMFLJFD_HPEAAJHKPNL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHECCMFLJFD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHECCMFLJFD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* BDEMCKIHDHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHECCMFLJFD_BDEMCKIHDHM_OFFSET))(this);
	}

	::System::Int32 ODGGIAADMLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHECCMFLJFD_ODGGIAADMLO_OFFSET))(this);
	}
};
