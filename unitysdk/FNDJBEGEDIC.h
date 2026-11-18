#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNFAOLOILOO.h"
#include "unitysdk/GIFOBKBCCMA.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GBMNOPLAEEL.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNDJBEGEDIC_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x682420)
#define FNDJBEGEDIC_EKJAPNEIJMA_OFFSET UNITYSDK_OFFSET(0x116C0AC0)
#define FNDJBEGEDIC_FFHOPONJLDF_OFFSET UNITYSDK_OFFSET(0x682450)
#define FNDJBEGEDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x682410)

inline static constexpr unsigned int FNDJBEGEDIC_TypeDefinitionIndex = 43042;

struct alignas(4) FNDJBEGEDIC
{
	::FNFAOLOILOO GPJDJIOKAOA; // 0x10
	::GIFOBKBCCMA PDPAHPJEHHG; // 0x14

	::System::Void _ctor(::System::String* LMDJIBINHGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FNDJBEGEDIC__CTOR_OFFSET))(this, LMDJIBINHGK);
	}

	/*
	static ::System::Collections::Generic::List_1<::FNDJBEGEDIC>* EKJAPNEIJMA(::System::String* IJKDMGDCAIH)
	{
		return ((::System::Collections::Generic::List_1<::FNDJBEGEDIC>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FNDJBEGEDIC_EKJAPNEIJMA_OFFSET))(IJKDMGDCAIH);
	}
	*/

	::System::Boolean COHDMPBBMPO(::GBMNOPLAEEL FNIOPKPHDEH)
	{
		return ((::System::Boolean(*)(::PVOID, ::GBMNOPLAEEL))((::PBYTE)hIl2Cpp + FNDJBEGEDIC_COHDMPBBMPO_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Boolean FFHOPONJLDF(::GBMNOPLAEEL FNIOPKPHDEH)
	{
		return ((::System::Boolean(*)(::PVOID, ::GBMNOPLAEEL))((::PBYTE)hIl2Cpp + FNDJBEGEDIC_FFHOPONJLDF_OFFSET))(this, FNIOPKPHDEH);
	}
};
