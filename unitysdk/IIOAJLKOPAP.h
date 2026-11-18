#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNHOJOIJMHO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IIOAJLKOPAP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C1C3E0)
#define IIOAJLKOPAP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C1C4D0)
#define IIOAJLKOPAP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C1C4E0)
#define IIOAJLKOPAP_MCFNHCOCMFL_OFFSET UNITYSDK_OFFSET(0x17C1C4F0)
#define IIOAJLKOPAP__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1C3D0)

inline static constexpr unsigned int IIOAJLKOPAP_TypeDefinitionIndex = 12388;

class IIOAJLKOPAP : public ::System::Object
{
public:
	::GNHOJOIJMHO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 ECIMPMMHPMM; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::GNHOJOIJMHO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GNHOJOIJMHO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IIOAJLKOPAP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOAJLKOPAP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIOAJLKOPAP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOAJLKOPAP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MCFNHCOCMFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOAJLKOPAP_MCFNHCOCMFL_OFFSET))(this);
	}
};
