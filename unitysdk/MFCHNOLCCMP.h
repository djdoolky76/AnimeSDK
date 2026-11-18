#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBOKPINMNOA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFCHNOLCCMP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19109940)
#define MFCHNOLCCMP_DBAOBNPDFMN_OFFSET UNITYSDK_OFFSET(0x19109810)
#define MFCHNOLCCMP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19109930)
#define MFCHNOLCCMP_JBECCIEIHBH_OFFSET UNITYSDK_OFFSET(0x1910A1D0)
#define MFCHNOLCCMP_JPFOIDKIHDO_OFFSET UNITYSDK_OFFSET(0x19109A30)
#define MFCHNOLCCMP_KKHBDKDLIBF_OFFSET UNITYSDK_OFFSET(0x19109E40)
#define MFCHNOLCCMP_LCOPKDAMOAI_OFFSET UNITYSDK_OFFSET(0x1910A0C0)
#define MFCHNOLCCMP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19109920)
#define MFCHNOLCCMP_LMNCLBJKNGF_OFFSET UNITYSDK_OFFSET(0x19109B70)
#define MFCHNOLCCMP_LOEDFABIFEB_OFFSET UNITYSDK_OFFSET(0x19109F80)
#define MFCHNOLCCMP__CTOR_OFFSET UNITYSDK_OFFSET(0x19109800)

inline static constexpr unsigned int MFCHNOLCCMP_TypeDefinitionIndex = 14299;

class MFCHNOLCCMP : public ::System::Object
{
public:
	::LBOKPINMNOA HBDPAIKANDB; // 0x10
	::System::String* DPOBECGGAGH; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* HDBOMPAEPMC; // 0x28
	::System::String* PLFDGECINKF; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 GGFGKMBHAPC; // 0x40
	::System::Int32 NCGCHNJJHPK; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 BPMMNELACLA; // 0x4C
	::System::Int32 HBBHHHPNPJL; // 0x50

	::System::Void _ctor(::LBOKPINMNOA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LBOKPINMNOA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MFCHNOLCCMP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DBAOBNPDFMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCHNOLCCMP_DBAOBNPDFMN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCHNOLCCMP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFCHNOLCCMP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCHNOLCCMP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 JPFOIDKIHDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCHNOLCCMP_JPFOIDKIHDO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LMNCLBJKNGF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCHNOLCCMP_LMNCLBJKNGF_OFFSET))(this);
	}

	::System::Int32 KKHBDKDLIBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCHNOLCCMP_KKHBDKDLIBF_OFFSET))(this);
	}

	::System::Int32 LOEDFABIFEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCHNOLCCMP_LOEDFABIFEB_OFFSET))(this);
	}

	::System::String* LCOPKDAMOAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCHNOLCCMP_LCOPKDAMOAI_OFFSET))(this);
	}

	::System::Int32 JBECCIEIHBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCHNOLCCMP_JBECCIEIHBH_OFFSET))(this);
	}
};
