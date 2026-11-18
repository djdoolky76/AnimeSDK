#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKHLDBAOHDC.h"
#include "unitysdk/NMLKPKGOIAN.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Diagnostics { class Stopwatch; }

#define GNLJFIBOOKE_EEDIOKMLFHL_OFFSET UNITYSDK_OFFSET(0x10F0A8D0)
#define GNLJFIBOOKE_EICNKPECNDB_OFFSET UNITYSDK_OFFSET(0x10F0A980)
#define GNLJFIBOOKE_MFAGGAKCHDB_OFFSET UNITYSDK_OFFSET(0x10F0A600)
#define GNLJFIBOOKE_PCHJHBILFMC_OFFSET UNITYSDK_OFFSET(0x10F0A760)
#define GNLJFIBOOKE__CTOR_OFFSET UNITYSDK_OFFSET(0x10F0A3F0)

inline static constexpr unsigned int GNLJFIBOOKE_TypeDefinitionIndex = 78815;

class GNLJFIBOOKE : public ::System::Object
{
public:
	static ::GNLJFIBOOKE** StaticGet_AANEAIBBDKM()
	{
		return (::GNLJFIBOOKE**)Il2CppClass::FromTypeDefinitionIndex(GNLJFIBOOKE_TypeDefinitionIndex)->GetStaticField(0x4BA20);
	}
	::System::Diagnostics::Stopwatch* EGIPEHIGBLO; // 0x10
	::Il2CppArray<::NMLKPKGOIAN>* AJIJBHEMOJA; // 0x18
	::Il2CppArray<::NMLKPKGOIAN>* MHJCCMHKOJA; // 0x20
	::System::Collections::Generic::Stack_1<::MKHLDBAOHDC>* LOHBLPNBOOB; // 0x28
	::MKHLDBAOHDC DGDENJKAJDB; // 0x30
	::System::Int32 NGIOLDNOHOF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLJFIBOOKE__CTOR_OFFSET))(this);
	}

	::System::Void MFAGGAKCHDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLJFIBOOKE_MFAGGAKCHDB_OFFSET))(this);
	}

	::System::Void PCHJHBILFMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLJFIBOOKE_PCHJHBILFMC_OFFSET))(this);
	}

	::System::Void EEDIOKMLFHL(::System::UInt16 HOBKINFOOPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + GNLJFIBOOKE_EEDIOKMLFHL_OFFSET))(this, HOBKINFOOPB);
	}

	static ::System::Void EICNKPECNDB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLJFIBOOKE_EICNKPECNDB_OFFSET))();
	}
};
