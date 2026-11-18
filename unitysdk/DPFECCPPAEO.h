#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMHIFBAABEJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPFECCPPAEO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A9F190)
#define DPFECCPPAEO_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x17A9F3D0)
#define DPFECCPPAEO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A9F3C0)
#define DPFECCPPAEO_JLJMKCHHIAH_OFFSET UNITYSDK_OFFSET(0x17A9F280)
#define DPFECCPPAEO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A9F040)
#define DPFECCPPAEO_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x17A9F510)
#define DPFECCPPAEO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17A9F050)
#define DPFECCPPAEO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A9F030)

inline static constexpr unsigned int DPFECCPPAEO_TypeDefinitionIndex = 11802;

class DPFECCPPAEO : public ::System::Object
{
public:
	::OMHIFBAABEJ HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* FEIOEHMLAIM; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 JMCDNAHGIGC; // 0x34
	::System::Int32 KEKAONNNOBF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E

	::System::Void _ctor(::OMHIFBAABEJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OMHIFBAABEJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DPFECCPPAEO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFECCPPAEO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFECCPPAEO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFECCPPAEO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 JLJMKCHHIAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFECCPPAEO_JLJMKCHHIAH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DPFECCPPAEO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFECCPPAEO_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MFLMGECAGIA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFECCPPAEO_MFLMGECAGIA_OFFSET))(this);
	}
};
