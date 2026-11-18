#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLBOCPNMMOH.h"
#include "unitysdk/NAGMJBCLOPD.h"
#include "unitysdk/FAEJGDEGEFP.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNOJEIILPJB_GCKODMBAFCK_OFFSET UNITYSDK_OFFSET(0x1A4CD100)
#define FNOJEIILPJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4CCF60)

inline static constexpr unsigned int FNOJEIILPJB_TypeDefinitionIndex = 15260;

class FNOJEIILPJB : public ::NAGMJBCLOPD
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FHAJJPJJFPE; // 0x48

	::System::Void _ctor(::FAEJGDEGEFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FAEJGDEGEFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FNOJEIILPJB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GCKODMBAFCK(::DLBOCPNMMOH BGJOPBCCMOC)
	{
		return ((::System::Int32(*)(::PVOID, ::DLBOCPNMMOH))((::PBYTE)hIl2Cpp + FNOJEIILPJB_GCKODMBAFCK_OFFSET))(this, BGJOPBCCMOC);
	}
};
