#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDDLCEFBIDP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMIKBFEIGCH_CBCLFEIJFGH_OFFSET UNITYSDK_OFFSET(0x17C2D870)
#define JMIKBFEIGCH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C2D4F0)
#define JMIKBFEIGCH_ECDHMPAPPPE_OFFSET UNITYSDK_OFFSET(0x17C2D5F0)
#define JMIKBFEIGCH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C2D5E0)
#define JMIKBFEIGCH_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x17C2DB90)
#define JMIKBFEIGCH_KBFOMAONODF_OFFSET UNITYSDK_OFFSET(0x17C2DA00)
#define JMIKBFEIGCH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C2DCD0)
#define JMIKBFEIGCH_NOKNGIEGNKK_OFFSET UNITYSDK_OFFSET(0x17C2D730)
#define JMIKBFEIGCH_ONFMNJMPBOC_OFFSET UNITYSDK_OFFSET(0x17C2D220)
#define JMIKBFEIGCH__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2D210)

inline static constexpr unsigned int JMIKBFEIGCH_TypeDefinitionIndex = 14811;

class JMIKBFEIGCH : public ::System::Object
{
public:
	::GDDLCEFBIDP HBDPAIKANDB; // 0x10
	::System::String* JOMKKJFCIAF; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* ILIIMDDLNCA; // 0x28
	::System::String* KDGKJIPLJPE; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 ENPHMLPFJHF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 BJANKPMOMPO; // 0x48
	::System::Int32 GPNJCCHKLIP; // 0x4C

	::System::Void _ctor(::GDDLCEFBIDP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GDDLCEFBIDP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JMIKBFEIGCH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ONFMNJMPBOC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIKBFEIGCH_ONFMNJMPBOC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIKBFEIGCH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMIKBFEIGCH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ECDHMPAPPPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIKBFEIGCH_ECDHMPAPPPE_OFFSET))(this);
	}

	::System::Int32 NOKNGIEGNKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIKBFEIGCH_NOKNGIEGNKK_OFFSET))(this);
	}

	::System::String* CBCLFEIJFGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIKBFEIGCH_CBCLFEIJFGH_OFFSET))(this);
	}

	::System::String* KBFOMAONODF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIKBFEIGCH_KBFOMAONODF_OFFSET))(this);
	}

	::System::Int32 GPBFENDAJMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIKBFEIGCH_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIKBFEIGCH_LJANCIBECFG_OFFSET))(this);
	}
};
