#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODEGPOLCEDP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHDHCAFJNKD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DDBAA0)
#define PHDHCAFJNKD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DDB560)
#define PHDHCAFJNKD_HGKHMLCEAOL_OFFSET UNITYSDK_OFFSET(0x19DDB200)
#define PHDHCAFJNKD_JDHMPLEHHCB_OFFSET UNITYSDK_OFFSET(0x19DDB0C0)
#define PHDHCAFJNKD_KDLCMCHAAIP_OFFSET UNITYSDK_OFFSET(0x19DDB7D0)
#define PHDHCAFJNKD_KONFKHPMCAJ_OFFSET UNITYSDK_OFFSET(0x19DDB580)
#define PHDHCAFJNKD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DDB570)
#define PHDHCAFJNKD_NEJJCPAJBKH_OFFSET UNITYSDK_OFFSET(0x19DDB340)
#define PHDHCAFJNKD_OBALGJECHBK_OFFSET UNITYSDK_OFFSET(0x19DDB450)
#define PHDHCAFJNKD_OJONDCEKEHC_OFFSET UNITYSDK_OFFSET(0x19DDB6C0)
#define PHDHCAFJNKD__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDB0B0)

inline static constexpr unsigned int PHDHCAFJNKD_TypeDefinitionIndex = 14121;

class PHDHCAFJNKD : public ::System::Object
{
public:
	::ODEGPOLCEDP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* DMIKNIACCJN; // 0x28
	::System::String* BJCONLKNNKN; // 0x30
	::System::String* HCJOBLFNCCJ; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* EBNABKEHMOO; // 0x40
	::System::String* FCGIICPLKCG; // 0x48
	::System::Byte CNIAANMNOCF; // 0x50
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x51
	::System::Byte ACIOBDEBDNK; // 0x52
	::System::Byte _padding0[0x1];
	::System::Int32 CLLBKLBBOGB; // 0x54
	::System::Int32 EKFMNDCLKLN; // 0x58
	::System::Int32 CECGPJBLLPH; // 0x5C

	::System::Void _ctor(::ODEGPOLCEDP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ODEGPOLCEDP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PHDHCAFJNKD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JDHMPLEHHCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHCAFJNKD_JDHMPLEHHCB_OFFSET))(this);
	}

	::System::Int32 HGKHMLCEAOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHCAFJNKD_HGKHMLCEAOL_OFFSET))(this);
	}

	::System::String* NEJJCPAJBKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHCAFJNKD_NEJJCPAJBKH_OFFSET))(this);
	}

	::System::String* OBALGJECHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHCAFJNKD_OBALGJECHBK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PHDHCAFJNKD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHCAFJNKD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KONFKHPMCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHCAFJNKD_KONFKHPMCAJ_OFFSET))(this);
	}

	::System::String* OJONDCEKEHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHCAFJNKD_OJONDCEKEHC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KDLCMCHAAIP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHCAFJNKD_KDLCMCHAAIP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHCAFJNKD_COFGIJJOFLP_OFFSET))(this);
	}
};
