#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NALFJGBLGHD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKIDNCBAAMM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4C70C0)
#define FKIDNCBAAMM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4C72F0)
#define FKIDNCBAAMM_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1A4C6A90)
#define FKIDNCBAAMM_IDBOEPGLMNK_OFFSET UNITYSDK_OFFSET(0x1A4C6950)
#define FKIDNCBAAMM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4C7440)
#define FKIDNCBAAMM_MBJIJBEEMHD_OFFSET UNITYSDK_OFFSET(0x1A4C6E70)
#define FKIDNCBAAMM_MKNHOJHFFKI_OFFSET UNITYSDK_OFFSET(0x1A4C7300)
#define FKIDNCBAAMM_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x1A4C71B0)
#define FKIDNCBAAMM_MLPMMNEOJHH_OFFSET UNITYSDK_OFFSET(0x1A4C6FB0)
#define FKIDNCBAAMM_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x1A4C6D60)
#define FKIDNCBAAMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C6940)

inline static constexpr unsigned int FKIDNCBAAMM_TypeDefinitionIndex = 16499;

class FKIDNCBAAMM : public ::System::Object
{
public:
	::System::String* GOPJMACDEGO; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* ADLMAEAOJOB; // 0x20
	::NALFJGBLGHD HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* OKBBGPGIODD; // 0x38
	::System::Int32 PNHIMPBNMIH; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 JEBNEDEKCBJ; // 0x48
	::System::Int32 HDDMLDDOMFD; // 0x4C
	::System::Int32 LDMGNFDLNNK; // 0x50

	::System::Void _ctor(::NALFJGBLGHD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NALFJGBLGHD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FKIDNCBAAMM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 IDBOEPGLMNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDNCBAAMM_IDBOEPGLMNK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GKAMCMIJFHJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDNCBAAMM_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDNCBAAMM_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Int32 MBJIJBEEMHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDNCBAAMM_MBJIJBEEMHD_OFFSET))(this);
	}

	::System::String* MLPMMNEOJHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDNCBAAMM_MLPMMNEOJHH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDNCBAAMM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDNCBAAMM_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKIDNCBAAMM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MKNHOJHFFKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDNCBAAMM_MKNHOJHFFKI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIDNCBAAMM_LJANCIBECFG_OFFSET))(this);
	}
};
