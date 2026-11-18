#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGIIKAACAGN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EEAJPMKNGKA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B9B3BF0)
#define EEAJPMKNGKA_FCMMOGBIAJK_OFFSET UNITYSDK_OFFSET(0x1B9B3D00)
#define EEAJPMKNGKA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B9B3CF0)
#define EEAJPMKNGKA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B9B3CE0)
#define EEAJPMKNGKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B3BE0)

inline static constexpr unsigned int EEAJPMKNGKA_TypeDefinitionIndex = 15666;

class EEAJPMKNGKA : public ::System::Object
{
public:
	::System::String* OGGPFHHOKKH; // 0x10
	::BGIIKAACAGN HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::BGIIKAACAGN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BGIIKAACAGN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EEAJPMKNGKA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAJPMKNGKA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAJPMKNGKA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEAJPMKNGKA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* FCMMOGBIAJK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAJPMKNGKA_FCMMOGBIAJK_OFFSET))(this);
	}
};
