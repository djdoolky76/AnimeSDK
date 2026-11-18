#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DACHBCNPGPJ.h"
#include "unitysdk/EBDKCHECNEH.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHDJFIFKIBP__CTOR_OFFSET UNITYSDK_OFFSET(0x57ABD0)

inline static constexpr unsigned int KHDJFIFKIBP_TypeDefinitionIndex = 62480;

struct alignas(8) KHDJFIFKIBP
{
	::System::String* DBHBCDIKIDD; // 0x10
	::System::UInt32 MMOOPLMAFAD; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::EBDKCHECNEH>* GHGAJFEFKFF; // 0x20
	::System::Collections::Generic::List_1<::DACHBCNPGPJ>* BDFPGDEAJPD; // 0x28

	::System::Void _ctor(::System::String* DBHBCDIKIDD, ::System::UInt32 MMOOPLMAFAD, ::System::Collections::Generic::List_1<::EBDKCHECNEH>* GHGAJFEFKFF, ::System::Collections::Generic::List_1<::DACHBCNPGPJ>* BDFPGDEAJPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Collections::Generic::List_1<::EBDKCHECNEH>*, ::System::Collections::Generic::List_1<::DACHBCNPGPJ>*))((::PBYTE)hIl2Cpp + KHDJFIFKIBP__CTOR_OFFSET))(this, DBHBCDIKIDD, MMOOPLMAFAD, GHGAJFEFKFF, BDFPGDEAJPD);
	}
};
