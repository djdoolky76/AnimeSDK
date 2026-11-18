#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMCLDJAKANK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NOLMMGOBEKP_AEILINHNONN_OFFSET UNITYSDK_OFFSET(0x17FD96A0)
#define NOLMMGOBEKP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FD95B0)
#define NOLMMGOBEKP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FD95A0)
#define NOLMMGOBEKP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FD97E0)
#define NOLMMGOBEKP_PIIGHFMBJOF_OFFSET UNITYSDK_OFFSET(0x17FD97F0)
#define NOLMMGOBEKP__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD9590)

inline static constexpr unsigned int NOLMMGOBEKP_TypeDefinitionIndex = 13913;

class NOLMMGOBEKP : public ::System::Object
{
public:
	::DMCLDJAKANK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* LHCJDFOGFKB; // 0x28
	::System::Int32 PICKBAGEOGP; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::DMCLDJAKANK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DMCLDJAKANK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NOLMMGOBEKP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOLMMGOBEKP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLMMGOBEKP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 AEILINHNONN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLMMGOBEKP_AEILINHNONN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLMMGOBEKP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PIIGHFMBJOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLMMGOBEKP_PIIGHFMBJOF_OFFSET))(this);
	}
};
