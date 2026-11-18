#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBDCBAKJEGD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DFIHNHGJHMJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19509920)
#define DFIHNHGJHMJ_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x19509B70)
#define DFIHNHGJHMJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19509A20)
#define DFIHNHGJHMJ_FOJAIEALOLG_OFFSET UNITYSDK_OFFSET(0x19509A30)
#define DFIHNHGJHMJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19509A10)
#define DFIHNHGJHMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19509910)

inline static constexpr unsigned int DFIHNHGJHMJ_TypeDefinitionIndex = 11253;

class DFIHNHGJHMJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DBDCBAKJEGD HBDPAIKANDB; // 0x18
	::System::Int32 GFLICNGMFCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 PCCPGAMLEMB; // 0x30

	::System::Void _ctor(::DBDCBAKJEGD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DBDCBAKJEGD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DFIHNHGJHMJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIHNHGJHMJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIHNHGJHMJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFIHNHGJHMJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FOJAIEALOLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIHNHGJHMJ_FOJAIEALOLG_OFFSET))(this);
	}

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIHNHGJHMJ_FIGNOOEDDNC_OFFSET))(this);
	}
};
