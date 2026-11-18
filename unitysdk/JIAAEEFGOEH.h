#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EALGMECCPDN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JIAAEEFGOEH_ABGCNKNMEDG_OFFSET UNITYSDK_OFFSET(0x17C28500)
#define JIAAEEFGOEH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C288E0)
#define JIAAEEFGOEH_EDHJFNPKHOO_OFFSET UNITYSDK_OFFSET(0x17C28650)
#define JIAAEEFGOEH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C28640)
#define JIAAEEFGOEH_GMNIEHMKHKL_OFFSET UNITYSDK_OFFSET(0x17C289D0)
#define JIAAEEFGOEH_KIMIFBKMAAC_OFFSET UNITYSDK_OFFSET(0x17C28790)
#define JIAAEEFGOEH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C288D0)
#define JIAAEEFGOEH_NJOEBCJMFDE_OFFSET UNITYSDK_OFFSET(0x17C28C50)
#define JIAAEEFGOEH_OBIAJEKOKGL_OFFSET UNITYSDK_OFFSET(0x17C28B10)
#define JIAAEEFGOEH__CTOR_OFFSET UNITYSDK_OFFSET(0x17C284F0)

inline static constexpr unsigned int JIAAEEFGOEH_TypeDefinitionIndex = 14622;

class JIAAEEFGOEH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::EALGMECCPDN HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 GJFDHJAKLBF; // 0x2C
	::System::Int32 EMLGEDOMOEP; // 0x30
	::System::Int32 BOMBMDCIGIA; // 0x34
	::System::Int32 BFAHECGBGLA; // 0x38
	::System::Int32 HFOCIADFGAE; // 0x3C
	::System::Int32 HNECGGPCDNC; // 0x40

	::System::Void _ctor(::EALGMECCPDN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EALGMECCPDN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JIAAEEFGOEH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ABGCNKNMEDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAAEEFGOEH_ABGCNKNMEDG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JIAAEEFGOEH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EDHJFNPKHOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAAEEFGOEH_EDHJFNPKHOO_OFFSET))(this);
	}

	::System::Int32 KIMIFBKMAAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAAEEFGOEH_KIMIFBKMAAC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAAEEFGOEH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAAEEFGOEH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GMNIEHMKHKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAAEEFGOEH_GMNIEHMKHKL_OFFSET))(this);
	}

	::System::Int32 OBIAJEKOKGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAAEEFGOEH_OBIAJEKOKGL_OFFSET))(this);
	}

	::System::Int32 NJOEBCJMFDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAAEEFGOEH_NJOEBCJMFDE_OFFSET))(this);
	}
};
