#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNLHGLKJOHH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CLFCGEDMDHF_ABPICCJELOM_OFFSET UNITYSDK_OFFSET(0x1A588550)
#define CLFCGEDMDHF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5887A0)
#define CLFCGEDMDHF_FADPBKFIBDD_OFFSET UNITYSDK_OFFSET(0x1A5889E0)
#define CLFCGEDMDHF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5889D0)
#define CLFCGEDMDHF_IOHGNAGDKGK_OFFSET UNITYSDK_OFFSET(0x1A588890)
#define CLFCGEDMDHF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A588540)
#define CLFCGEDMDHF_PLOGCCIGCFG_OFFSET UNITYSDK_OFFSET(0x1A588660)
#define CLFCGEDMDHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A588530)

inline static constexpr unsigned int CLFCGEDMDHF_TypeDefinitionIndex = 11337;

class CLFCGEDMDHF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* BHMOGLIOECA; // 0x18
	::System::String* IMAFCDDJOME; // 0x20
	::System::String* NIMJPIMANAC; // 0x28
	::CNLHGLKJOHH HBDPAIKANDB; // 0x30
	::System::Int32 HCAJIDPDDGH; // 0x40
	::System::Int32 KMLCPKOKGLF; // 0x44
	::System::Int32 OIOAFIIOGHE; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x4C
	::System::Byte CNIAANMNOCF; // 0x4D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4E

	::System::Void _ctor(::CNLHGLKJOHH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CNLHGLKJOHH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CLFCGEDMDHF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFCGEDMDHF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ABPICCJELOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFCGEDMDHF_ABPICCJELOM_OFFSET))(this);
	}

	::System::Int32 PLOGCCIGCFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFCGEDMDHF_PLOGCCIGCFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFCGEDMDHF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 IOHGNAGDKGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFCGEDMDHF_IOHGNAGDKGK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLFCGEDMDHF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* FADPBKFIBDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFCGEDMDHF_FADPBKFIBDD_OFFSET))(this);
	}
};
