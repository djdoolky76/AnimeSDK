#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFCGCGNAFAK.h"
#include "unitysdk/Share/ENpcType.h"
#include "unitysdk/JCLEIOJJIHC.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OJGOIAPCKBN_ALGDLJGCEHD_OFFSET UNITYSDK_OFFSET(0x1C1A0510)
#define OJGOIAPCKBN_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1C1A0460)
#define OJGOIAPCKBN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1C1A0450)
#define OJGOIAPCKBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A0410)

inline static constexpr unsigned int OJGOIAPCKBN_TypeDefinitionIndex = 17490;

class OJGOIAPCKBN : public ::FFCGCGNAFAK
{
public:
	::System::String* GMBFBHEEKAI; // 0x70
	::System::Int32 _HHNNKGPFJNO_k__BackingField; // 0x78
	::Share::ENpcType PGBPFNKMLJF; // 0x7C

	::System::Void _ctor(::JCLEIOJJIHC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JCLEIOJJIHC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OJGOIAPCKBN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOIAPCKBN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOIAPCKBN_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void ALGDLJGCEHD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJGOIAPCKBN_ALGDLJGCEHD_OFFSET))(this, EGEGIMGMJHN);
	}
};
