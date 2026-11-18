#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPMANAELFGE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FEDPPLLNCIG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A72C90)
#define FEDPPLLNCIG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A72ED0)
#define FEDPPLLNCIG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A72EC0)
#define FEDPPLLNCIG_MCAEFJKLPLH_OFFSET UNITYSDK_OFFSET(0x15A72D80)
#define FEDPPLLNCIG_NIDLOJNGEAK_OFFSET UNITYSDK_OFFSET(0x15A72B50)
#define FEDPPLLNCIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15A72B40)

inline static constexpr unsigned int FEDPPLLNCIG_TypeDefinitionIndex = 14810;

class FEDPPLLNCIG : public ::System::Object
{
public:
	::JPMANAELFGE HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 JMOBFGMMBKC; // 0x2C
	::System::Int32 MKOEINIDOHH; // 0x30

	::System::Void _ctor(::JPMANAELFGE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JPMANAELFGE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FEDPPLLNCIG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NIDLOJNGEAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPPLLNCIG_NIDLOJNGEAK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPPLLNCIG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MCAEFJKLPLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPPLLNCIG_MCAEFJKLPLH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPPLLNCIG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FEDPPLLNCIG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
