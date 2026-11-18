#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLHLLJLOGBJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NFIOCKGIAPK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF6B130)
#define NFIOCKGIAPK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF6B470)
#define NFIOCKGIAPK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF6B120)
#define NFIOCKGIAPK_MLBLHAFPBHE_OFFSET UNITYSDK_OFFSET(0x1BF6B360)
#define NFIOCKGIAPK_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x1BF6B220)
#define NFIOCKGIAPK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BF6B480)
#define NFIOCKGIAPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6B110)

inline static constexpr unsigned int NFIOCKGIAPK_TypeDefinitionIndex = 15357;

class NFIOCKGIAPK : public ::System::Object
{
public:
	::GLHLLJLOGBJ HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* IHEFHNPNBEE; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 JBOHPKLIGCE; // 0x38

	::System::Void _ctor(::GLHLLJLOGBJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GLHLLJLOGBJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NFIOCKGIAPK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIOCKGIAPK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIOCKGIAPK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIOCKGIAPK_OKGKODNEICJ_OFFSET))(this);
	}

	::System::String* MLBLHAFPBHE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIOCKGIAPK_MLBLHAFPBHE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFIOCKGIAPK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIOCKGIAPK_PPIFNHNGCGO_OFFSET))(this);
	}
};
