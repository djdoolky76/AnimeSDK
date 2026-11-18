#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPGKHKMMOON.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MDCAOFPMMCM_ACCJFBKHGJJ_OFFSET UNITYSDK_OFFSET(0x1C083D90)
#define MDCAOFPMMCM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C0838F0)
#define MDCAOFPMMCM_DOJLGGLKOKO_OFFSET UNITYSDK_OFFSET(0x1C0839F0)
#define MDCAOFPMMCM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C083B30)
#define MDCAOFPMMCM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C0839E0)
#define MDCAOFPMMCM_MBJIJBEEMHD_OFFSET UNITYSDK_OFFSET(0x1C083C50)
#define MDCAOFPMMCM_PDPABEEMJNK_OFFSET UNITYSDK_OFFSET(0x1C083B40)
#define MDCAOFPMMCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0838E0)

inline static constexpr unsigned int MDCAOFPMMCM_TypeDefinitionIndex = 13874;

class MDCAOFPMMCM : public ::System::Object
{
public:
	::KPGKHKMMOON HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* EJLMIAFJEGH; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* DLBHHMLAIKF; // 0x30
	::System::Int32 PNHIMPBNMIH; // 0x38
	::System::Int32 EFHDPNNONDD; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::KPGKHKMMOON LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KPGKHKMMOON, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MDCAOFPMMCM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCAOFPMMCM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCAOFPMMCM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DOJLGGLKOKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCAOFPMMCM_DOJLGGLKOKO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDCAOFPMMCM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PDPABEEMJNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCAOFPMMCM_PDPABEEMJNK_OFFSET))(this);
	}

	::System::Int32 MBJIJBEEMHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCAOFPMMCM_MBJIJBEEMHD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ACCJFBKHGJJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCAOFPMMCM_ACCJFBKHGJJ_OFFSET))(this);
	}
};
