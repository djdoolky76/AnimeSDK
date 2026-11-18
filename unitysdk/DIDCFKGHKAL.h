#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCBBDPAAIPI.h"
#include "unitysdk/OICFHEBNAEE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIDCFKGHKAL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19ADB1A0)
#define DIDCFKGHKAL_FABDOLIPEJK_OFFSET UNITYSDK_OFFSET(0x19ADB290)
#define DIDCFKGHKAL_FGIKHFLANGN_OFFSET UNITYSDK_OFFSET(0x19ADAE80)
#define DIDCFKGHKAL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19ADB190)
#define DIDCFKGHKAL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19ADB180)
#define DIDCFKGHKAL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19ADAD40)
#define DIDCFKGHKAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADAD30)

inline static constexpr unsigned int DIDCFKGHKAL_TypeDefinitionIndex = 10460;

class DIDCFKGHKAL : public ::System::Object
{
public:
	::System::String* BFNNKJDOPKP; // 0x10
	::OCBBDPAAIPI HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* JPNOHBLNEMO; // 0x30
	::System::String* IENCBDEPMFJ; // 0x38
	::System::Collections::Generic::List_1<::OICFHEBNAEE>* LEOEBNELFOM; // 0x40
	::System::String* OMDLAHBLCAM; // 0x48
	::System::Collections::Generic::List_1<::OICFHEBNAEE>* LBCHMJDKFGI; // 0x50
	::System::String* NHAEGFPJEGH; // 0x58
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x60
	::System::Byte ACIOBDEBDNK; // 0x61
	::System::Byte CNIAANMNOCF; // 0x62
	::System::Byte GCHCDJCFCEG; // 0x63
	::System::Int32 MGDKBEIAJCN; // 0x64
	::System::Int32 KONMKBLFOHA; // 0x68
	::System::Int32 BNGOKFCHPDP; // 0x6C
	::System::Int32 PCMOJLNOPPM; // 0x70
	::System::Int32 KEDGPOHAECG; // 0x74

	::System::Void _ctor(::OCBBDPAAIPI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OCBBDPAAIPI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DIDCFKGHKAL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDCFKGHKAL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::OICFHEBNAEE>* FGIKHFLANGN()
	{
		return ((::System::Collections::Generic::List_1<::OICFHEBNAEE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDCFKGHKAL_FGIKHFLANGN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDCFKGHKAL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIDCFKGHKAL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDCFKGHKAL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FABDOLIPEJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDCFKGHKAL_FABDOLIPEJK_OFFSET))(this);
	}
};
