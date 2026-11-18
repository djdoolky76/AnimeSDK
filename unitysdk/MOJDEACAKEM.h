#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEOEPFHLLKB.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MOJDEACAKEM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1734BFB0)
#define MOJDEACAKEM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1734BFA0)
#define MOJDEACAKEM_KEGPJIPHJJE_OFFSET UNITYSDK_OFFSET(0x1734BE40)
#define MOJDEACAKEM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1734BF90)
#define MOJDEACAKEM_PAGIPLHAPJA_OFFSET UNITYSDK_OFFSET(0x1734BCE0)
#define MOJDEACAKEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1734BCD0)

inline static constexpr unsigned int MOJDEACAKEM_TypeDefinitionIndex = 10235;

class MOJDEACAKEM : public ::System::Object
{
public:
	::AEOEPFHLLKB HBDPAIKANDB; // 0x10
	::Foundation::AssetPath DMDDLGJDIGJ; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* MBDOJBIHJLB; // 0x38
	::System::UInt64 CKIBFLOFHBE; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 KMFADHNDNGL; // 0x4C

	::System::Void _ctor(::AEOEPFHLLKB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AEOEPFHLLKB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOJDEACAKEM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::Foundation::AssetPath PAGIPLHAPJA()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJDEACAKEM_PAGIPLHAPJA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJDEACAKEM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOJDEACAKEM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt64 KEGPJIPHJJE()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJDEACAKEM_KEGPJIPHJJE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJDEACAKEM_COFGIJJOFLP_OFFSET))(this);
	}
};
