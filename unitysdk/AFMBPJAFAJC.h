#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/IGBEOBJDCJM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFMBPJAFAJC_CEBHDNOJHON_OFFSET UNITYSDK_OFFSET(0x1ADA52C0)
#define AFMBPJAFAJC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADA5540)
#define AFMBPJAFAJC_DBBHCKCDMMP_OFFSET UNITYSDK_OFFSET(0x1ADA5020)
#define AFMBPJAFAJC_EDBJMMCOKIL_OFFSET UNITYSDK_OFFSET(0x1ADA5160)
#define AFMBPJAFAJC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADA4EF0)
#define AFMBPJAFAJC_FPEMHOOAHFH_OFFSET UNITYSDK_OFFSET(0x1ADA4AD0)
#define AFMBPJAFAJC_JJDKLGFBHGO_OFFSET UNITYSDK_OFFSET(0x1ADA4F00)
#define AFMBPJAFAJC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADA5010)
#define AFMBPJAFAJC_MJJAPMGFHCE_OFFSET UNITYSDK_OFFSET(0x1ADA4C20)
#define AFMBPJAFAJC_PDDEINKLCCC_OFFSET UNITYSDK_OFFSET(0x1ADA5400)
#define AFMBPJAFAJC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA4AC0)

inline static constexpr unsigned int AFMBPJAFAJC_TypeDefinitionIndex = 16392;

class AFMBPJAFAJC : public ::System::Object
{
public:
	::IGBEOBJDCJM HBDPAIKANDB; // 0x10
	::System::String* HKPDBNNFJCB; // 0x20
	::Foundation::AssetPath DCFNJALGGHO; // 0x28
	::System::String* FJLIEPPJIDD; // 0x38
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* KJFGIFGFCFF; // 0x48
	::System::Int32 OLFPCGKLMKF; // 0x50
	::System::Int32 CDGFLCOCMBC; // 0x54
	::System::Int32 JDDHNEOHKHK; // 0x58
	::System::Int32 GCBFPMOBAJN; // 0x5C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x60
	::System::Byte CNIAANMNOCF; // 0x61
	::System::Byte ACIOBDEBDNK; // 0x62
	::System::Byte _padding0[0x5];
	::System::UInt64 FLFEJJOCMOI; // 0x68

	::System::Void _ctor(::IGBEOBJDCJM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IGBEOBJDCJM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AFMBPJAFAJC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::UInt64 FPEMHOOAHFH()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMBPJAFAJC_FPEMHOOAHFH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MJJAPMGFHCE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMBPJAFAJC_MJJAPMGFHCE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFMBPJAFAJC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* JJDKLGFBHGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMBPJAFAJC_JJDKLGFBHGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMBPJAFAJC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DBBHCKCDMMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMBPJAFAJC_DBBHCKCDMMP_OFFSET))(this);
	}

	::Foundation::AssetPath EDBJMMCOKIL()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMBPJAFAJC_EDBJMMCOKIL_OFFSET))(this);
	}

	::System::Int32 CEBHDNOJHON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMBPJAFAJC_CEBHDNOJHON_OFFSET))(this);
	}

	::System::Int32 PDDEINKLCCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMBPJAFAJC_PDDEINKLCCC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMBPJAFAJC_COFGIJJOFLP_OFFSET))(this);
	}
};
