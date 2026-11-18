#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAPGOMPLKFB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PAIFGEOOABI_CMEPJFGPMCG_OFFSET UNITYSDK_OFFSET(0x1C0AA640)
#define PAIFGEOOABI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C0AAAC0)
#define PAIFGEOOABI_FJJNOEDNGHI_OFFSET UNITYSDK_OFFSET(0x1C0AA870)
#define PAIFGEOOABI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C0AABB0)
#define PAIFGEOOABI_GFHKDGIIAKB_OFFSET UNITYSDK_OFFSET(0x1C0AA9B0)
#define PAIFGEOOABI_KPMGNOPNGAP_OFFSET UNITYSDK_OFFSET(0x1C0AA760)
#define PAIFGEOOABI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C0AA750)
#define PAIFGEOOABI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0AA630)

inline static constexpr unsigned int PAIFGEOOABI_TypeDefinitionIndex = 14931;

class PAIFGEOOABI : public ::System::Object
{
public:
	::System::String* KEKBCAKDANJ; // 0x10
	::OAPGOMPLKFB HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* EJJDOIOIBNP; // 0x30
	::System::String* DKGDAOJEHJO; // 0x38
	::System::Int32 CCEKPAKIENJ; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46

	::System::Void _ctor(::OAPGOMPLKFB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OAPGOMPLKFB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PAIFGEOOABI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CMEPJFGPMCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIFGEOOABI_CMEPJFGPMCG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIFGEOOABI_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* KPMGNOPNGAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIFGEOOABI_KPMGNOPNGAP_OFFSET))(this);
	}

	::System::Int32 FJJNOEDNGHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIFGEOOABI_FJJNOEDNGHI_OFFSET))(this);
	}

	::System::String* GFHKDGIIAKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIFGEOOABI_GFHKDGIIAKB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIFGEOOABI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PAIFGEOOABI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
