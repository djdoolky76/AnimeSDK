#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAJHEJINMDF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IMPPFEHHIMI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C20360)
#define IMPPFEHHIMI_DIJJMHNLOHC_OFFSET UNITYSDK_OFFSET(0x17C20230)
#define IMPPFEHHIMI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C20350)
#define IMPPFEHHIMI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C20340)
#define IMPPFEHHIMI__CTOR_OFFSET UNITYSDK_OFFSET(0x17C20220)

inline static constexpr unsigned int IMPPFEHHIMI_TypeDefinitionIndex = 11719;

class IMPPFEHHIMI : public ::System::Object
{
public:
	::CAJHEJINMDF HBDPAIKANDB; // 0x10
	::System::String* AOAHPCCAMMP; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::CAJHEJINMDF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CAJHEJINMDF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMPPFEHHIMI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DIJJMHNLOHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPPFEHHIMI_DIJJMHNLOHC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPPFEHHIMI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMPPFEHHIMI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPPFEHHIMI_COFGIJJOFLP_OFFSET))(this);
	}
};
