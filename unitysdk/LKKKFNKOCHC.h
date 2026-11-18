#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHJENJCMDLK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LKKKFNKOCHC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19591910)
#define LKKKFNKOCHC_DOHANFCIALC_OFFSET UNITYSDK_OFFSET(0x19591A20)
#define LKKKFNKOCHC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19591A00)
#define LKKKFNKOCHC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19591A10)
#define LKKKFNKOCHC_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x19591C40)
#define LKKKFNKOCHC_NOGPEGNPCGM_OFFSET UNITYSDK_OFFSET(0x19591B30)
#define LKKKFNKOCHC__CTOR_OFFSET UNITYSDK_OFFSET(0x19591900)

inline static constexpr unsigned int LKKKFNKOCHC_TypeDefinitionIndex = 16173;

class LKKKFNKOCHC : public ::System::Object
{
public:
	::System::String* PKLMFLOBGNH; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::IHJENJCMDLK HBDPAIKANDB; // 0x20
	::System::String* BIIHOFJDFAD; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 FEIOEHMLAIM; // 0x3C

	::System::Void _ctor(::IHJENJCMDLK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IHJENJCMDLK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LKKKFNKOCHC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKKFNKOCHC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKKKFNKOCHC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKKFNKOCHC_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DOHANFCIALC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKKFNKOCHC_DOHANFCIALC_OFFSET))(this);
	}

	::System::String* NOGPEGNPCGM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKKFNKOCHC_NOGPEGNPCGM_OFFSET))(this);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKKFNKOCHC_MFLMGECAGIA_OFFSET))(this);
	}
};
