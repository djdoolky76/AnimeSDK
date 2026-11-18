#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAKMCMBCDIN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKFCMBOFLKF_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x15A8C790)
#define HKFCMBOFLKF_CAGLLHANEFD_OFFSET UNITYSDK_OFFSET(0x15A8C300)
#define HKFCMBOFLKF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A8C210)
#define HKFCMBOFLKF_EEEOKMOHKDJ_OFFSET UNITYSDK_OFFSET(0x15A8C680)
#define HKFCMBOFLKF_FGIIMCDKFGC_OFFSET UNITYSDK_OFFSET(0x15A8C410)
#define HKFCMBOFLKF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A8CA10)
#define HKFCMBOFLKF_FOPPBEKBKEL_OFFSET UNITYSDK_OFFSET(0x15A8C8D0)
#define HKFCMBOFLKF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A8C670)
#define HKFCMBOFLKF_PLIKHNIFEEI_OFFSET UNITYSDK_OFFSET(0x15A8C100)
#define HKFCMBOFLKF__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8C0F0)

inline static constexpr unsigned int HKFCMBOFLKF_TypeDefinitionIndex = 17435;

class HKFCMBOFLKF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* BILDJMLCBJP; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* PNLKOJMCJGE; // 0x20
	::System::String* BPMMMOOMOAN; // 0x28
	::System::String* CGOKKMDMHFK; // 0x30
	::HAKMCMBCDIN HBDPAIKANDB; // 0x38
	::System::Int32 BPMHKHIBGEJ; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x4C
	::System::Byte CNIAANMNOCF; // 0x4D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 DBNDKPFCEBJ; // 0x50

	::System::Void _ctor(::HAKMCMBCDIN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HAKMCMBCDIN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HKFCMBOFLKF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* PLIKHNIFEEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFCMBOFLKF_PLIKHNIFEEI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFCMBOFLKF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* CAGLLHANEFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFCMBOFLKF_CAGLLHANEFD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* FGIIMCDKFGC()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFCMBOFLKF_FGIIMCDKFGC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFCMBOFLKF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* EEEOKMOHKDJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFCMBOFLKF_EEEOKMOHKDJ_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFCMBOFLKF_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Int32 FOPPBEKBKEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFCMBOFLKF_FOPPBEKBKEL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKFCMBOFLKF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
