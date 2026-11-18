#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJLCLJNDDLF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NFGIKJOCFPJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD7D180)
#define NFGIKJOCFPJ_FJNDPALNMOG_OFFSET UNITYSDK_OFFSET(0x1AD7D280)
#define NFGIKJOCFPJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD7D270)
#define NFGIKJOCFPJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD7D170)
#define NFGIKJOCFPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD7D160)

inline static constexpr unsigned int NFGIKJOCFPJ_TypeDefinitionIndex = 13130;

class NFGIKJOCFPJ : public ::System::Object
{
public:
	::BJLCLJNDDLF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* AFBGBPDHLPO; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::BJLCLJNDDLF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BJLCLJNDDLF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NFGIKJOCFPJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGIKJOCFPJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGIKJOCFPJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFGIKJOCFPJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* FJNDPALNMOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGIKJOCFPJ_FJNDPALNMOG_OFFSET))(this);
	}
};
