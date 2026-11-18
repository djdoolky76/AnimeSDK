#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMNIMDFIMCC.h"
#include "unitysdk/JIKJBAEJNEN.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DEEHDIGBJNL_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7E7B20)
#define DEEHDIGBJNL_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x7E7BB0)
#define DEEHDIGBJNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7E7B10)
#define DEEHDIGBJNL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19744D90)
#define DEEHDIGBJNL__CTOR_OFFSET UNITYSDK_OFFSET(0x7E7AD0)

inline static constexpr unsigned int DEEHDIGBJNL_TypeDefinitionIndex = 55928;

struct alignas(4) DEEHDIGBJNL
{
	static ::System::Int32* StaticGet_FGNFMKKMOOL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DEEHDIGBJNL_TypeDefinitionIndex)->GetStaticField(0xE5C0);
	}
	::System::Int32 OCGCEMPIBBK; // 0x10
	::System::Int32 AOMNLPIHOIP; // 0x14
	::System::Int32 KJMFNCNFNLJ; // 0x18
	::System::Int32 PADMMLMDJAM; // 0x1C
	::JIKJBAEJNEN PFNBAOGCMCO; // 0x20
	::AMNIMDFIMCC HCHECDDBBFA; // 0x24

	::System::Void _ctor(::System::Int32& AJCDOGILCKH, ::System::Int32& JOOIIHLOHOG, ::System::Int32& LDCIDHKFBOF, ::System::Int32& AMKBLKPDDKH, ::JIKJBAEJNEN& POJBADOCDFM, ::AMNIMDFIMCC& NJABPNPJIKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::JIKJBAEJNEN&, ::AMNIMDFIMCC&))((::PBYTE)hIl2Cpp + DEEHDIGBJNL__CTOR_OFFSET))(this, AJCDOGILCKH, JOOIIHLOHOG, LDCIDHKFBOF, AMKBLKPDDKH, POJBADOCDFM, NJABPNPJIKA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEEHDIGBJNL__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEHDIGBJNL_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEHDIGBJNL_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEHDIGBJNL_PNNJKJEOHAL_OFFSET))(this);
	}
};
