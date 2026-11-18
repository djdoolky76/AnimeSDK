#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDOKPOBJGPL.h"
#include "unitysdk/MDCJIGMGBFJ.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

class KGBFLHNJHHN;

#define BIPHANNDLCH_ACPHOAEJGHH_OFFSET UNITYSDK_OFFSET(0x1A534C70)
#define BIPHANNDLCH_GIBNAFKACOO_OFFSET UNITYSDK_OFFSET(0x1A5350A0)
#define BIPHANNDLCH_JMGENDDEBPO_OFFSET UNITYSDK_OFFSET(0x1A534CA0)
#define BIPHANNDLCH_OJPOLHCEAJK_OFFSET UNITYSDK_OFFSET(0x1A534F90)
#define BIPHANNDLCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A534C50)

inline static constexpr unsigned int BIPHANNDLCH_TypeDefinitionIndex = 9681;

class BIPHANNDLCH : public ::NDOKPOBJGPL
{
public:
	::System::Int32 IAPGMMGLNMH; // 0x48
	::System::Int32 FAAJODOGCPG; // 0x4C

	::System::Void _ctor(::MDCJIGMGBFJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MDCJIGMGBFJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BIPHANNDLCH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ACPHOAEJGHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPHANNDLCH_ACPHOAEJGHH_OFFSET))(this);
	}

	::System::Int32 OJPOLHCEAJK(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> OGKEBCPEPED)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + BIPHANNDLCH_OJPOLHCEAJK_OFFSET))(this, OGKEBCPEPED);
	}

	::System::Int32 GIBNAFKACOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPHANNDLCH_GIBNAFKACOO_OFFSET))(this);
	}

	::System::Void JMGENDDEBPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPHANNDLCH_JMGENDDEBPO_OFFSET))(this);
	}
};
