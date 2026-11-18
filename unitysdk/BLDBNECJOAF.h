#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANDNNFHEGDH.h"
#include "unitysdk/BAKEACDMAIB.h"
#include "unitysdk/LJAPOEINABO.h"
#include "unitysdk/AADPENKKEFE.h"
#include "unitysdk/BHBGDGKDAFK.h"

class AMFAHGEFDFJ;
class CCGKHPKLKKJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLDBNECJOAF_AHEMAGNBHOG_OFFSET UNITYSDK_OFFSET(0xFF895A0)
#define BLDBNECJOAF_KPPMGELOEBL_OFFSET UNITYSDK_OFFSET(0xFF895B0)
#define BLDBNECJOAF_MPFLFNCPOBC_OFFSET UNITYSDK_OFFSET(0xFF896D0)
#define BLDBNECJOAF__CTOR_OFFSET UNITYSDK_OFFSET(0xFF89550)

inline static constexpr unsigned int BLDBNECJOAF_TypeDefinitionIndex = 42205;

class BLDBNECJOAF : public ::LJAPOEINABO
{
public:
	::ANDNNFHEGDH AIBPIOPHPFO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDBNECJOAF__CTOR_OFFSET))(this);
	}

	::BAKEACDMAIB AHEMAGNBHOG()
	{
		return ((::BAKEACDMAIB(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDBNECJOAF_AHEMAGNBHOG_OFFSET))(this);
	}

	::System::Void KPPMGELOEBL(::CCGKHPKLKKJ* AAOCANGHBDG, ::BHBGDGKDAFK& KLILNJLHJMO)
	{
		return ((::System::Void(*)(::PVOID, ::CCGKHPKLKKJ*, ::BHBGDGKDAFK&))((::PBYTE)hIl2Cpp + BLDBNECJOAF_KPPMGELOEBL_OFFSET))(this, AAOCANGHBDG, KLILNJLHJMO);
	}

	::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* MPFLFNCPOBC(::System::Collections::Generic::List_1<::AADPENKKEFE>* POJAJNMGMGK, ::CCGKHPKLKKJ* AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::AADPENKKEFE>*, ::CCGKHPKLKKJ*))((::PBYTE)hIl2Cpp + BLDBNECJOAF_MPFLFNCPOBC_OFFSET))(this, POJAJNMGMGK, AAOCANGHBDG);
	}
};
