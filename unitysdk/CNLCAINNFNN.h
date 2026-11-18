#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/POAGPDPBBEO.h"

class NJBLKIEPLBK;

#define CNLCAINNFNN_BCNNOACPEIH_OFFSET UNITYSDK_OFFSET(0x1A1BE950)
#define CNLCAINNFNN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1BE8D0)

inline static constexpr unsigned int CNLCAINNFNN_TypeDefinitionIndex = 62989;

class CNLCAINNFNN : public ::System::Object
{
public:
	static ::Unity::Profiling::ProfilerMarker* StaticGet_MDEJEFKNLHP()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(CNLCAINNFNN_TypeDefinitionIndex)->GetStaticField(0xE120);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_NBECGAEHMMH()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(CNLCAINNFNN_TypeDefinitionIndex)->GetStaticField(0xE128);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_JICDCCJCPDL()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(CNLCAINNFNN_TypeDefinitionIndex)->GetStaticField(0xE130);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_JMKDCGMBHGM()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(CNLCAINNFNN_TypeDefinitionIndex)->GetStaticField(0xE138);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNLCAINNFNN__CCTOR_OFFSET))();
	}

	static ::System::Boolean BCNNOACPEIH(::NJBLKIEPLBK* CFLAJMMODKB, ::POAGPDPBBEO& PCEFKJHBDDF)
	{
		return ((::System::Boolean(*)(::NJBLKIEPLBK*, ::POAGPDPBBEO&))((::PBYTE)hIl2Cpp + CNLCAINNFNN_BCNNOACPEIH_OFFSET))(CFLAJMMODKB, PCEFKJHBDDF);
	}
};
