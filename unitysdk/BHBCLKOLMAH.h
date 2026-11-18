#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPGBLEOAIEH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BHBCLKOLMAH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EF43B0)
#define BHBCLKOLMAH_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x17EF4600)
#define BHBCLKOLMAH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EF45F0)
#define BHBCLKOLMAH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EF44A0)
#define BHBCLKOLMAH_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x17EF44B0)
#define BHBCLKOLMAH__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF43A0)

inline static constexpr unsigned int BHBCLKOLMAH_TypeDefinitionIndex = 11773;

class BHBCLKOLMAH : public ::System::Object
{
public:
	::JPGBLEOAIEH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 JEDEMPHDCAK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 COHJGPCKEIH; // 0x30

	::System::Void _ctor(::JPGBLEOAIEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JPGBLEOAIEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BHBCLKOLMAH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBCLKOLMAH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBCLKOLMAH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBCLKOLMAH_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHBCLKOLMAH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBCLKOLMAH_DPCDIABPPEE_OFFSET))(this);
	}
};
