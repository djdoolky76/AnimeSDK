#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECBPHDNCOLO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BPEIMMAPMOP_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x19F25330)
#define BPEIMMAPMOP_CJBMHNCHNHO_OFFSET UNITYSDK_OFFSET(0x19F25220)
#define BPEIMMAPMOP_CNIMPNICLOH_OFFSET UNITYSDK_OFFSET(0x19F24EC0)
#define BPEIMMAPMOP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F25130)
#define BPEIMMAPMOP_FFMBGCLLCIF_OFFSET UNITYSDK_OFFSET(0x19F24FF0)
#define BPEIMMAPMOP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F24FE0)
#define BPEIMMAPMOP_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x19F24D80)
#define BPEIMMAPMOP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F24FD0)
#define BPEIMMAPMOP__CTOR_OFFSET UNITYSDK_OFFSET(0x19F24D70)

inline static constexpr unsigned int BPEIMMAPMOP_TypeDefinitionIndex = 15168;

class BPEIMMAPMOP : public ::System::Object
{
public:
	::System::String* CJLCCJKEHME; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* CKLIGBACBFB; // 0x20
	::ECBPHDNCOLO HBDPAIKANDB; // 0x28
	::System::Int32 KGDNNBIIPIN; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 MFAAMEMILEM; // 0x40
	::System::Int32 AICFILHLIPF; // 0x44

	::System::Void _ctor(::ECBPHDNCOLO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ECBPHDNCOLO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BPEIMMAPMOP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEIMMAPMOP_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::String* CNIMPNICLOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEIMMAPMOP_CNIMPNICLOH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEIMMAPMOP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPEIMMAPMOP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FFMBGCLLCIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEIMMAPMOP_FFMBGCLLCIF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEIMMAPMOP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* CJBMHNCHNHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEIMMAPMOP_CJBMHNCHNHO_OFFSET))(this);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEIMMAPMOP_BNKPNGANFDN_OFFSET))(this);
	}
};
