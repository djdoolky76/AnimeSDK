#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFHFBKMAKGK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IPGIPEIJOIB_BCGAMCIHNNH_OFFSET UNITYSDK_OFFSET(0x1B4F2D40)
#define IPGIPEIJOIB_CLLGCKCDAFA_OFFSET UNITYSDK_OFFSET(0x1B4F2C00)
#define IPGIPEIJOIB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4F2E90)
#define IPGIPEIJOIB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4F2BF0)
#define IPGIPEIJOIB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4F2E80)
#define IPGIPEIJOIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F2BE0)

inline static constexpr unsigned int IPGIPEIJOIB_TypeDefinitionIndex = 16399;

class IPGIPEIJOIB : public ::System::Object
{
public:
	::IFHFBKMAKGK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 IMDKEBFBDIE; // 0x2C
	::System::Int32 KHBMBILOMPJ; // 0x30

	::System::Void _ctor(::IFHFBKMAKGK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IFHFBKMAKGK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IPGIPEIJOIB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IPGIPEIJOIB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CLLGCKCDAFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGIPEIJOIB_CLLGCKCDAFA_OFFSET))(this);
	}

	::System::Int32 BCGAMCIHNNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGIPEIJOIB_BCGAMCIHNNH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGIPEIJOIB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGIPEIJOIB_COFGIJJOFLP_OFFSET))(this);
	}
};
