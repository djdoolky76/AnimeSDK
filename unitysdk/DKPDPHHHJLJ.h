#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDHLKFJCNLB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DKPDPHHHJLJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F20AA0)
#define DKPDPHHHJLJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F20950)
#define DKPDPHHHJLJ_LHCDCDOMCHC_OFFSET UNITYSDK_OFFSET(0x17F20BA0)
#define DKPDPHHHJLJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F20B90)
#define DKPDPHHHJLJ_LMOGCFLOAEE_OFFSET UNITYSDK_OFFSET(0x17F20960)
#define DKPDPHHHJLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17F20940)

inline static constexpr unsigned int DKPDPHHHJLJ_TypeDefinitionIndex = 17704;

class DKPDPHHHJLJ : public ::System::Object
{
public:
	::DDHLKFJCNLB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 FBEIJODMOOO; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 CGFFOBAFECF; // 0x30

	::System::Void _ctor(::DDHLKFJCNLB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DDHLKFJCNLB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DKPDPHHHJLJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKPDPHHHJLJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LMOGCFLOAEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPDPHHHJLJ_LMOGCFLOAEE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPDPHHHJLJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPDPHHHJLJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LHCDCDOMCHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPDPHHHJLJ_LHCDCDOMCHC_OFFSET))(this);
	}
};
