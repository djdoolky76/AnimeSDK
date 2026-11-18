#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPGPENGCNKF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GOKKBAHIDOK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5C4490)
#define GOKKBAHIDOK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5C48F0)
#define GOKKBAHIDOK_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1A5C4580)
#define GOKKBAHIDOK_JCMDFJHACIP_OFFSET UNITYSDK_OFFSET(0x1A5C46D0)
#define GOKKBAHIDOK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5C46C0)
#define GOKKBAHIDOK_MPNFBPKDHLD_OFFSET UNITYSDK_OFFSET(0x1A5C47E0)
#define GOKKBAHIDOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C4480)

inline static constexpr unsigned int GOKKBAHIDOK_TypeDefinitionIndex = 9430;

class GOKKBAHIDOK : public ::System::Object
{
public:
	::System::String* DOBMGHFCEIH; // 0x10
	::System::String* HOPGKHHDBDL; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::FPGPENGCNKF HBDPAIKANDB; // 0x28
	::System::Int32 POKJNGILNLB; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte GCHCDJCFCEG; // 0x3E
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3F

	::System::Void _ctor(::FPGPENGCNKF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FPGPENGCNKF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GOKKBAHIDOK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKKBAHIDOK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKKBAHIDOK_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKKBAHIDOK_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* JCMDFJHACIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKKBAHIDOK_JCMDFJHACIP_OFFSET))(this);
	}

	::System::String* MPNFBPKDHLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKKBAHIDOK_MPNFBPKDHLD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOKKBAHIDOK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
