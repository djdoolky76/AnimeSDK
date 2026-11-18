#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAEJGDEGEFP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAGMJBCLOPD_BBCMHHAMGII_OFFSET UNITYSDK_OFFSET(0x19DBCAA0)
#define NAGMJBCLOPD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DBCD40)
#define NAGMJBCLOPD_DHDFBPAHADC_OFFSET UNITYSDK_OFFSET(0x19DBCBE0)
#define NAGMJBCLOPD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DBCD30)
#define NAGMJBCLOPD_JFLIEALFHEK_OFFSET UNITYSDK_OFFSET(0x19DBC550)
#define NAGMJBCLOPD_KPOKNPOPDDB_OFFSET UNITYSDK_OFFSET(0x19DBC960)
#define NAGMJBCLOPD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DBCD20)
#define NAGMJBCLOPD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19DBC820)
#define NAGMJBCLOPD__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBC540)

inline static constexpr unsigned int NAGMJBCLOPD_TypeDefinitionIndex = 15871;

class NAGMJBCLOPD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FAEJGDEGEFP HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* BOPANCOCAGK; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 FEPMEGGMJKJ; // 0x34
	::System::Int32 OPGNLANBOML; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 HOGHEGGBOOK; // 0x40

	::System::Void _ctor(::FAEJGDEGEFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FAEJGDEGEFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NAGMJBCLOPD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JFLIEALFHEK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGMJBCLOPD_JFLIEALFHEK_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGMJBCLOPD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 KPOKNPOPDDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGMJBCLOPD_KPOKNPOPDDB_OFFSET))(this);
	}

	::System::Int32 BBCMHHAMGII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGMJBCLOPD_BBCMHHAMGII_OFFSET))(this);
	}

	::System::Int32 DHDFBPAHADC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGMJBCLOPD_DHDFBPAHADC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGMJBCLOPD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAGMJBCLOPD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGMJBCLOPD_COFGIJJOFLP_OFFSET))(this);
	}
};
