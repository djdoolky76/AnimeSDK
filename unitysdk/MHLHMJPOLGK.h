#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHGKNHBEKPE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MHLHMJPOLGK_AIOLKBHCJAO_OFFSET UNITYSDK_OFFSET(0x18E0DC30)
#define MHLHMJPOLGK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E0DDA0)
#define MHLHMJPOLGK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E0DE90)
#define MHLHMJPOLGK_GNLBPCGFALA_OFFSET UNITYSDK_OFFSET(0x18E0DB20)
#define MHLHMJPOLGK_KCKKBIKMELG_OFFSET UNITYSDK_OFFSET(0x18E0DA10)
#define MHLHMJPOLGK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E0DD90)
#define MHLHMJPOLGK__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0DA00)

inline static constexpr unsigned int MHLHMJPOLGK_TypeDefinitionIndex = 10438;

class MHLHMJPOLGK : public ::System::Object
{
public:
	::System::String* EBAFHOFCOAL; // 0x10
	::CHGKNHBEKPE HBDPAIKANDB; // 0x18
	::System::String* DDCILKOBDHM; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* EBFAPIIABCJ; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Single LMOCKGMEFNF; // 0x48

	::System::Void _ctor(::CHGKNHBEKPE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CHGKNHBEKPE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHLHMJPOLGK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* KCKKBIKMELG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLHMJPOLGK_KCKKBIKMELG_OFFSET))(this);
	}

	::System::String* GNLBPCGFALA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLHMJPOLGK_GNLBPCGFALA_OFFSET))(this);
	}

	::System::Single AIOLKBHCJAO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLHMJPOLGK_AIOLKBHCJAO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLHMJPOLGK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLHMJPOLGK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHLHMJPOLGK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
