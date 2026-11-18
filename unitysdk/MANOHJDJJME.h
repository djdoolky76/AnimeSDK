#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEOMJEAOGIJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MANOHJDJJME_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B30E2C0)
#define MANOHJDJJME_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x1B30E620)
#define MANOHJDJJME_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B30E500)
#define MANOHJDJJME_GOAGNLBGLNL_OFFSET UNITYSDK_OFFSET(0x1B30E070)
#define MANOHJDJJME_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1B30E730)
#define MANOHJDJJME_KKOIHBOCFEP_OFFSET UNITYSDK_OFFSET(0x1B30E180)
#define MANOHJDJJME_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B30E4F0)
#define MANOHJDJJME_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x1B30E510)
#define MANOHJDJJME_PMEDDKBGPOD_OFFSET UNITYSDK_OFFSET(0x1B30E3B0)
#define MANOHJDJJME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30E060)

inline static constexpr unsigned int MANOHJDJJME_TypeDefinitionIndex = 9984;

class MANOHJDJJME : public ::System::Object
{
public:
	::DEOMJEAOGIJ HBDPAIKANDB; // 0x10
	::System::String* FGECIGPJPCF; // 0x20
	::System::String* EMDOKBMBFAB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* LOMDLHMEHPB; // 0x38
	::System::Int32 OGBHEKMCFON; // 0x40
	::System::Int32 BHBEMLKCMNA; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 POKJNGILNLB; // 0x4C

	::System::Void _ctor(::DEOMJEAOGIJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DEOMJEAOGIJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MANOHJDJJME__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GOAGNLBGLNL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANOHJDJJME_GOAGNLBGLNL_OFFSET))(this);
	}

	::System::Int32 KKOIHBOCFEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANOHJDJJME_KKOIHBOCFEP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANOHJDJJME_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PMEDDKBGPOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANOHJDJJME_PMEDDKBGPOD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MANOHJDJJME_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MANOHJDJJME_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANOHJDJJME_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANOHJDJJME_DCGJGALIIHB_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANOHJDJJME_HKELPCLHLEC_OFFSET))(this);
	}
};
