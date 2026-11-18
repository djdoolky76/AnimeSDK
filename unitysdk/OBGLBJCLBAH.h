#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APFLNKKMNAP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OBGLBJCLBAH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DCBA00)
#define OBGLBJCLBAH_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x19DCB8F0)
#define OBGLBJCLBAH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DCB550)
#define OBGLBJCLBAH_KALABCCPGGE_OFFSET UNITYSDK_OFFSET(0x19DCB440)
#define OBGLBJCLBAH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DCBAF0)
#define OBGLBJCLBAH_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x19DCB6A0)
#define OBGLBJCLBAH_MGEOBCHPJCF_OFFSET UNITYSDK_OFFSET(0x19DCB300)
#define OBGLBJCLBAH_MKELBHKBKDC_OFFSET UNITYSDK_OFFSET(0x19DCB7E0)
#define OBGLBJCLBAH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19DCB560)
#define OBGLBJCLBAH__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCB2F0)

inline static constexpr unsigned int OBGLBJCLBAH_TypeDefinitionIndex = 10176;

class OBGLBJCLBAH : public ::System::Object
{
public:
	::System::String* BMKCIKMHNPJ; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* OMDLAHBLCAM; // 0x20
	::APFLNKKMNAP HBDPAIKANDB; // 0x28
	::System::String* FDGHICNLCEK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 FDLMOBIFOLL; // 0x44
	::System::Int32 JABJBJHKDMH; // 0x48
	::System::Int32 PCMOJLNOPPM; // 0x4C

	::System::Void _ctor(::APFLNKKMNAP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::APFLNKKMNAP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OBGLBJCLBAH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MGEOBCHPJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGLBJCLBAH_MGEOBCHPJCF_OFFSET))(this);
	}

	::System::String* KALABCCPGGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGLBJCLBAH_KALABCCPGGE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBGLBJCLBAH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGLBJCLBAH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGLBJCLBAH_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::String* MKELBHKBKDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGLBJCLBAH_MKELBHKBKDC_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGLBJCLBAH_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGLBJCLBAH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGLBJCLBAH_LJANCIBECFG_OFFSET))(this);
	}
};
