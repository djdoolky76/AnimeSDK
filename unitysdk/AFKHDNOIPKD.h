#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPBPEMFLLF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFKHDNOIPKD_CACBFNMPGAF_OFFSET UNITYSDK_OFFSET(0x1A5166B0)
#define AFKHDNOIPKD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A516D10)
#define AFKHDNOIPKD_EOIEFMCDAOO_OFFSET UNITYSDK_OFFSET(0x1A516C00)
#define AFKHDNOIPKD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5166A0)
#define AFKHDNOIPKD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A516690)
#define AFKHDNOIPKD_MADMIKPGMFG_OFFSET UNITYSDK_OFFSET(0x1A5167F0)
#define AFKHDNOIPKD_PADAEHJCGFB_OFFSET UNITYSDK_OFFSET(0x1A516930)
#define AFKHDNOIPKD_PFAGDBICMAO_OFFSET UNITYSDK_OFFSET(0x1A516550)
#define AFKHDNOIPKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A516540)

inline static constexpr unsigned int AFKHDNOIPKD_TypeDefinitionIndex = 12710;

class AFKHDNOIPKD : public ::System::Object
{
public:
	::BAPBPEMFLLF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* NIJKIFJKDOJ; // 0x28
	::System::String* GDPCLOMOBGI; // 0x30
	::System::Int32 LHKMNNMFMNJ; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 GKLFDFOFHEC; // 0x40
	::System::Int32 PEPHOJPHBLE; // 0x44

	::System::Void _ctor(::BAPBPEMFLLF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BAPBPEMFLLF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AFKHDNOIPKD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PFAGDBICMAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKHDNOIPKD_PFAGDBICMAO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKHDNOIPKD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFKHDNOIPKD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CACBFNMPGAF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKHDNOIPKD_CACBFNMPGAF_OFFSET))(this);
	}

	::System::Int32 MADMIKPGMFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKHDNOIPKD_MADMIKPGMFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PADAEHJCGFB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKHDNOIPKD_PADAEHJCGFB_OFFSET))(this);
	}

	::System::String* EOIEFMCDAOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKHDNOIPKD_EOIEFMCDAOO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKHDNOIPKD_COFGIJJOFLP_OFFSET))(this);
	}
};
