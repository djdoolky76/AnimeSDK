#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/CHLLIMBNFLF.h"

class BBNKLHCDAGB;
class FAECECHKCII;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIHDKBNPLJF_LAFNIPKOMKG_1_OFFSET UNITYSDK_OFFSET(0x11F80CA0)
#define NIHDKBNPLJF_LAFNIPKOMKG_OFFSET UNITYSDK_OFFSET(0x11F80A20)
#define NIHDKBNPLJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F80820)

inline static constexpr unsigned int NIHDKBNPLJF_TypeDefinitionIndex = 49948;

class NIHDKBNPLJF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::FAECECHKCII*>** StaticGet_KKGGDJJLAOM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::FAECECHKCII*>**)Il2CppClass::FromTypeDefinitionIndex(NIHDKBNPLJF_TypeDefinitionIndex)->GetStaticField(0x519B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIHDKBNPLJF__CCTOR_OFFSET))();
	}

	static ::CHLLIMBNFLF LAFNIPKOMKG(::BBNKLHCDAGB* KDEHMPGOCEP, ::BBNKLHCDAGB* PADJNMGMGHO)
	{
		return ((::CHLLIMBNFLF(*)(::BBNKLHCDAGB*, ::BBNKLHCDAGB*))((::PBYTE)hIl2Cpp + NIHDKBNPLJF_LAFNIPKOMKG_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO);
	}

	static ::CHLLIMBNFLF LAFNIPKOMKG_1(::BBNKLHCDAGB* CDBMHJGCCEB)
	{
		return ((::CHLLIMBNFLF(*)(::BBNKLHCDAGB*))((::PBYTE)hIl2Cpp + NIHDKBNPLJF_LAFNIPKOMKG_1_OFFSET))(CDBMHJGCCEB);
	}
};
