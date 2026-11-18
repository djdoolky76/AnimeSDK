#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJAOPPLDCMA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NBJJGPLOPJM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CCE80A0)
#define NBJJGPLOPJM_EMOACCCKGNN_OFFSET UNITYSDK_OFFSET(0x1CCE8190)
#define NBJJGPLOPJM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CCE8090)
#define NBJJGPLOPJM_KKLEPOENOGC_OFFSET UNITYSDK_OFFSET(0x1CCE7F80)
#define NBJJGPLOPJM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CCE7F70)
#define NBJJGPLOPJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE7F60)

inline static constexpr unsigned int NBJJGPLOPJM_TypeDefinitionIndex = 9865;

class NBJJGPLOPJM : public ::System::Object
{
public:
	::System::String* JGIBGLGPMJB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* JPMKBDEKJNI; // 0x20
	::AJAOPPLDCMA HBDPAIKANDB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::AJAOPPLDCMA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AJAOPPLDCMA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NBJJGPLOPJM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJJGPLOPJM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* KKLEPOENOGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJJGPLOPJM_KKLEPOENOGC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJJGPLOPJM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJJGPLOPJM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* EMOACCCKGNN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJJGPLOPJM_EMOACCCKGNN_OFFSET))(this);
	}
};
