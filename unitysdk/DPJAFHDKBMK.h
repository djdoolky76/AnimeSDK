#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCAOGAAOHLB.h"
#include "unitysdk/IKOPEHLPKNG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPJAFHDKBMK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B9AE240)
#define DPJAFHDKBMK_DABPDLIEFLM_OFFSET UNITYSDK_OFFSET(0x1B9AE440)
#define DPJAFHDKBMK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B9AE220)
#define DPJAFHDKBMK_GEAIDCBOJNI_OFFSET UNITYSDK_OFFSET(0x1B9ADE10)
#define DPJAFHDKBMK_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x1B9AE580)
#define DPJAFHDKBMK_HOKNGGDLHDE_OFFSET UNITYSDK_OFFSET(0x1B9ADF50)
#define DPJAFHDKBMK_JNNIOGKJIMO_OFFSET UNITYSDK_OFFSET(0x1B9ADB90)
#define DPJAFHDKBMK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B9AE230)
#define DPJAFHDKBMK_NDDMOGPKLKA_OFFSET UNITYSDK_OFFSET(0x1B9AE330)
#define DPJAFHDKBMK_NFOJBBGFGLE_OFFSET UNITYSDK_OFFSET(0x1B9AE6C0)
#define DPJAFHDKBMK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B9ADCD0)
#define DPJAFHDKBMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9ADB80)

inline static constexpr unsigned int DPJAFHDKBMK_TypeDefinitionIndex = 17570;

class DPJAFHDKBMK : public ::System::Object
{
public:
	::HCAOGAAOHLB HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* HENJMKEPPBG; // 0x20
	::System::Collections::Generic::List_1<::IKOPEHLPKNG>* BFJMPGDIKJI; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* GIFALKJAEMN; // 0x38
	::System::Int32 ONPMJGJBNOA; // 0x40
	::System::Int32 IMILANBFCND; // 0x44
	::System::Int32 BEADEIDMLFH; // 0x48
	::System::Byte GCHCDJCFCEG; // 0x4C
	::System::Byte CNIAANMNOCF; // 0x4D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4E
	::System::Byte ACIOBDEBDNK; // 0x4F
	::System::Int32 PCMOJLNOPPM; // 0x50
	::System::Int32 CIFAJAPDAEL; // 0x54

	::System::Void _ctor(::HCAOGAAOHLB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HCAOGAAOHLB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DPJAFHDKBMK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JNNIOGKJIMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_JNNIOGKJIMO_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 GEAIDCBOJNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_GEAIDCBOJNI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HOKNGGDLHDE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_HOKNGGDLHDE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* NDDMOGPKLKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_NDDMOGPKLKA_OFFSET))(this);
	}

	::System::Int32 DABPDLIEFLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_DABPDLIEFLM_OFFSET))(this);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::IKOPEHLPKNG>* NFOJBBGFGLE()
	{
		return ((::System::Collections::Generic::List_1<::IKOPEHLPKNG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAFHDKBMK_NFOJBBGFGLE_OFFSET))(this);
	}
};
