#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOKMMFNIAM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CPAONIIODLJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A182D10)
#define CPAONIIODLJ_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1A1831D0)
#define CPAONIIODLJ_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1A182C00)
#define CPAONIIODLJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A1832E0)
#define CPAONIIODLJ_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x1A1832F0)
#define CPAONIIODLJ_KOOEDFDEMDF_OFFSET UNITYSDK_OFFSET(0x1A182F40)
#define CPAONIIODLJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A183080)
#define CPAONIIODLJ_NLDJKBEHCAJ_OFFSET UNITYSDK_OFFSET(0x1A182E00)
#define CPAONIIODLJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A183090)
#define CPAONIIODLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A182BF0)

inline static constexpr unsigned int CPAONIIODLJ_TypeDefinitionIndex = 12628;

class CPAONIIODLJ : public ::System::Object
{
public:
	::System::String* IENCBDEPMFJ; // 0x10
	::System::String* EOALHEEBMKM; // 0x18
	::System::String* OMDLAHBLCAM; // 0x20
	::AIOKMMFNIAM HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 HMLGICGPPDG; // 0x40
	::System::Int32 HEPFOMMDGIA; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x4C

	::System::Void _ctor(::AIOKMMFNIAM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AIOKMMFNIAM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CPAONIIODLJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAONIIODLJ_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAONIIODLJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NLDJKBEHCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAONIIODLJ_NLDJKBEHCAJ_OFFSET))(this);
	}

	::System::Int32 KOOEDFDEMDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAONIIODLJ_KOOEDFDEMDF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAONIIODLJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAONIIODLJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAONIIODLJ_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPAONIIODLJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAONIIODLJ_IFDIOIOCGDP_OFFSET))(this);
	}
};
