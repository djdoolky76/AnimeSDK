#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLDKGPADHFC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OCHAPFJJJMF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF76E50)
#define OCHAPFJJJMF_DKNEFMDCANB_OFFSET UNITYSDK_OFFSET(0x1BF76F50)
#define OCHAPFJJJMF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF771D0)
#define OCHAPFJJJMF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF76F40)
#define OCHAPFJJJMF_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1BF771E0)
#define OCHAPFJJJMF_MJPFEJBMGLF_OFFSET UNITYSDK_OFFSET(0x1BF77090)
#define OCHAPFJJJMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF76E40)

inline static constexpr unsigned int OCHAPFJJJMF_TypeDefinitionIndex = 17593;

class OCHAPFJJJMF : public ::System::Object
{
public:
	::HLDKGPADHFC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 NDHALENBPJG; // 0x2C
	::System::Int32 GAAEEJAGKMG; // 0x30
	::System::Int32 JEDEMPHDCAK; // 0x34

	::System::Void _ctor(::HLDKGPADHFC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HLDKGPADHFC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OCHAPFJJJMF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHAPFJJJMF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHAPFJJJMF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DKNEFMDCANB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHAPFJJJMF_DKNEFMDCANB_OFFSET))(this);
	}

	::System::Int32 MJPFEJBMGLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHAPFJJJMF_MJPFEJBMGLF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCHAPFJJJMF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHAPFJJJMF_LPFMNKEFPMM_OFFSET))(this);
	}
};
