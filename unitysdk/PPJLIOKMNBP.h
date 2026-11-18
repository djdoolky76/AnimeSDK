#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCBNAJPAACC.h"
#include "unitysdk/KBKLCGKKIPI.h"
#include "unitysdk/MELDMANCCHE.h"
#include "unitysdk/System/ValueType.h"

class LGCGKPEODOH;
class OBCGDEHBPHG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPJLIOKMNBP__CTOR_OFFSET UNITYSDK_OFFSET(0x99BC00)

inline static constexpr unsigned int PPJLIOKMNBP_TypeDefinitionIndex = 95354;

struct alignas(8) PPJLIOKMNBP
{
	::CCBNAJPAACC NOOLOILNGPL; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 MNAIIBHLHMA; // 0x18
	::KBKLCGKKIPI EPFBIOCOAMO; // 0x20
	::System::Byte _padding1[0x4];
	::System::Collections::Generic::List_1<::LGCGKPEODOH*>* NGDEJCMNGKI; // 0x30
	::OBCGDEHBPHG* AHMFPFACACD; // 0x38
	::MELDMANCCHE DCLIKOPNNGO; // 0x40

	::System::Void _ctor(::CCBNAJPAACC OBNIAHNMHPF, ::System::UInt64 BKLGNCBNEGM, ::System::Collections::Generic::List_1<::LGCGKPEODOH*>* EMKHPKDBGFG, ::OBCGDEHBPHG* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::CCBNAJPAACC, ::System::UInt64, ::System::Collections::Generic::List_1<::LGCGKPEODOH*>*, ::OBCGDEHBPHG*))((::PBYTE)hIl2Cpp + PPJLIOKMNBP__CTOR_OFFSET))(this, OBNIAHNMHPF, BKLGNCBNEGM, EMKHPKDBGFG, DFMKILICPFB);
	}
};
