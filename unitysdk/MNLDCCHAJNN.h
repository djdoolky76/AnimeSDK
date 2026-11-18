#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMDBAFAJMAO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MNLDCCHAJNN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B31C900)
#define MNLDCCHAJNN_DECDHJMJBFM_OFFSET UNITYSDK_OFFSET(0x1B31C6A0)
#define MNLDCCHAJNN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B31C7E0)
#define MNLDCCHAJNN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B31C690)
#define MNLDCCHAJNN_PGFCLLGLOCG_OFFSET UNITYSDK_OFFSET(0x1B31C7F0)
#define MNLDCCHAJNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31C680)

inline static constexpr unsigned int MNLDCCHAJNN_TypeDefinitionIndex = 10394;

class MNLDCCHAJNN : public ::System::Object
{
public:
	::FMDBAFAJMAO HBDPAIKANDB; // 0x10
	::System::String* EIGCFEHJEDC; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 GEDEOJFMAHC; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::FMDBAFAJMAO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FMDBAFAJMAO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MNLDCCHAJNN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLDCCHAJNN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DECDHJMJBFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLDCCHAJNN_DECDHJMJBFM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNLDCCHAJNN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PGFCLLGLOCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLDCCHAJNN_PGFCLLGLOCG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLDCCHAJNN_COFGIJJOFLP_OFFSET))(this);
	}
};
