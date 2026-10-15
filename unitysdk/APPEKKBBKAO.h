#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABMNAENMFJL.h"
#include "unitysdk/System/Object.h"
class AMHCELGLLED;
class KCLIKAPODAD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APPEKKBBKAO_BABCOOBOKME_OFFSET UNITYSDK_OFFSET(0x15BC0840)
#define APPEKKBBKAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15BC0610)
#define APPEKKBBKAO_JKIBFIBAMKB_OFFSET UNITYSDK_OFFSET(0x15BC06D0)

inline static constexpr unsigned int APPEKKBBKAO_TypeDefinitionIndex = 62867;

	class APPEKKBBKAO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::ABMNAENMFJL, ::KCLIKAPODAD*>* BDBOGJHLEIG; // 0x10
		::AMHCELGLLED* CLADMNGJHEJ; // 0x18
		::System::Void _ctor(::AMHCELGLLED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMHCELGLLED*))((::PBYTE)hIl2Cpp + APPEKKBBKAO_CTOR_OFFSET))(this, a1);
		}

		::KCLIKAPODAD* JKIBFIBAMKB(::ABMNAENMFJL a1)
		{
			return ((::KCLIKAPODAD*(*)(::PVOID, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + APPEKKBBKAO_JKIBFIBAMKB_OFFSET))(this, a1);
		}

		::KCLIKAPODAD* BABCOOBOKME(::ABMNAENMFJL a1)
		{
			return ((::KCLIKAPODAD*(*)(::PVOID, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + APPEKKBBKAO_BABCOOBOKME_OFFSET))(this, a1);
		}

	};
