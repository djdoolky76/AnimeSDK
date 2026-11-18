#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHGEDMFPMCB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EGIBEHAHLLO_BKFHNBCAIML_OFFSET UNITYSDK_OFFSET(0x1A19CF60)
#define EGIBEHAHLLO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A19CD10)
#define EGIBEHAHLLO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A19CE10)
#define EGIBEHAHLLO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A19CE00)
#define EGIBEHAHLLO_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x1A19CBD0)
#define EGIBEHAHLLO_LOBLDINBMPO_OFFSET UNITYSDK_OFFSET(0x1A19D0A0)
#define EGIBEHAHLLO_NOHKHMNBDMK_OFFSET UNITYSDK_OFFSET(0x1A19CAC0)
#define EGIBEHAHLLO_PIPBFOBLJFJ_OFFSET UNITYSDK_OFFSET(0x1A19CE20)
#define EGIBEHAHLLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A19CAB0)

inline static constexpr unsigned int EGIBEHAHLLO_TypeDefinitionIndex = 12752;

class EGIBEHAHLLO : public ::System::Object
{
public:
	::AHGEDMFPMCB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* CMOGLNNADEP; // 0x28
	::System::String* BCCLJENGLCA; // 0x30
	::System::Int32 EOPCKBHHBEF; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 FHNEAADFFIF; // 0x40
	::System::Int32 NBCBNJBOJJA; // 0x44
	::System::Int32 JABJBJHKDMH; // 0x48

	::System::Void _ctor(::AHGEDMFPMCB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AHGEDMFPMCB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EGIBEHAHLLO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* NOHKHMNBDMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIBEHAHLLO_NOHKHMNBDMK_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIBEHAHLLO_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIBEHAHLLO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIBEHAHLLO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGIBEHAHLLO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PIPBFOBLJFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIBEHAHLLO_PIPBFOBLJFJ_OFFSET))(this);
	}

	::System::Int32 BKFHNBCAIML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIBEHAHLLO_BKFHNBCAIML_OFFSET))(this);
	}

	::System::Int32 LOBLDINBMPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIBEHAHLLO_LOBLDINBMPO_OFFSET))(this);
	}
};
