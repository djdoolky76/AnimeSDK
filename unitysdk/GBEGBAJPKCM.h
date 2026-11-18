#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLPFNHCNPEN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GBEGBAJPKCM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A7E9B0)
#define GBEGBAJPKCM_COKGJGBCFPC_OFFSET UNITYSDK_OFFSET(0x15A7EBC0)
#define GBEGBAJPKCM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A7E9A0)
#define GBEGBAJPKCM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A7EBB0)
#define GBEGBAJPKCM_MMADJDBLGNG_OFFSET UNITYSDK_OFFSET(0x15A7EAA0)
#define GBEGBAJPKCM_NEGPHBCKLNA_OFFSET UNITYSDK_OFFSET(0x15A7E860)
#define GBEGBAJPKCM__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7E850)

inline static constexpr unsigned int GBEGBAJPKCM_TypeDefinitionIndex = 11050;

class GBEGBAJPKCM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* PEMEAMBOGFM; // 0x18
	::KLPFNHCNPEN HBDPAIKANDB; // 0x20
	::System::Int32 CHPHIADOKLN; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 LICKFKNCEIA; // 0x38

	::System::Void _ctor(::KLPFNHCNPEN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KLPFNHCNPEN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GBEGBAJPKCM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NEGPHBCKLNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGBAJPKCM_NEGPHBCKLNA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBEGBAJPKCM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGBAJPKCM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MMADJDBLGNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGBAJPKCM_MMADJDBLGNG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGBAJPKCM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 COKGJGBCFPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGBAJPKCM_COKGJGBCFPC_OFFSET))(this);
	}
};
