#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDNBFFMKLID.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/FLKCLEEJBMI.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FJCBDKKEMMD_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x1A4C5190)
#define FJCBDKKEMMD_MEJOLBCHCMD_OFFSET UNITYSDK_OFFSET(0x1A4C4F80)
#define FJCBDKKEMMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C4F70)

inline static constexpr unsigned int FJCBDKKEMMD_TypeDefinitionIndex = 17291;

class FJCBDKKEMMD : public ::NDNBFFMKLID
{
public:
	::System::DateTime FJHCBEKJFJB; // 0x58
	::System::DateTime DIAMKNBBJFC; // 0x60

	::System::Void _ctor(::FLKCLEEJBMI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FLKCLEEJBMI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FJCBDKKEMMD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::DateTime MEJOLBCHCMD(::System::String* LCEGOBBEECM)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + FJCBDKKEMMD_MEJOLBCHCMD_OFFSET))(LCEGOBBEECM);
	}

	::System::Void GIAOBHOJCDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCBDKKEMMD_GIAOBHOJCDP_OFFSET))(this);
	}
};
