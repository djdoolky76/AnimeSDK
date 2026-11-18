#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHOBGOIOHGM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KPMPLMIBOMB_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x1AAF4A40)
#define KPMPLMIBOMB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AAF4E00)
#define KPMPLMIBOMB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AAF4EF0)
#define KPMPLMIBOMB_IMDEKKJIOHI_OFFSET UNITYSDK_OFFSET(0x1AAF4CC0)
#define KPMPLMIBOMB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AAF4F00)
#define KPMPLMIBOMB_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x1AAF4B80)
#define KPMPLMIBOMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF4A30)

inline static constexpr unsigned int KPMPLMIBOMB_TypeDefinitionIndex = 15239;

class KPMPLMIBOMB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::LHOBGOIOHGM HBDPAIKANDB; // 0x18
	::System::Int32 AKAAKALMNAJ; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 AICFILHLIPF; // 0x30
	::System::Int32 LNDOJKEIPFI; // 0x34

	::System::Void _ctor(::LHOBGOIOHGM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LHOBGOIOHGM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KPMPLMIBOMB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMPLMIBOMB_BNKPNGANFDN_OFFSET))(this);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMPLMIBOMB_MDPBPBNMKJA_OFFSET))(this);
	}

	::System::Int32 IMDEKKJIOHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMPLMIBOMB_IMDEKKJIOHI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMPLMIBOMB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPMPLMIBOMB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMPLMIBOMB_LJANCIBECFG_OFFSET))(this);
	}
};
