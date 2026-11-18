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

#define BLJJLBLGBEO_AHEMAGNBHOG_OFFSET UNITYSDK_OFFSET(0x1425BF10)
#define BLJJLBLGBEO_KPPMGELOEBL_OFFSET UNITYSDK_OFFSET(0x1425BF70)
#define BLJJLBLGBEO_MPFLFNCPOBC_OFFSET UNITYSDK_OFFSET(0x1425C090)
#define BLJJLBLGBEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1425BF20)

inline static constexpr unsigned int BLJJLBLGBEO_TypeDefinitionIndex = 38614;

class BLJJLBLGBEO : public ::LJAPOEINABO
{
public:
	::ANDNNFHEGDH MBKMBGHFMLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJJLBLGBEO__CTOR_OFFSET))(this);
	}

	::BAKEACDMAIB AHEMAGNBHOG()
	{
		return ((::BAKEACDMAIB(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJJLBLGBEO_AHEMAGNBHOG_OFFSET))(this);
	}

	::System::Void KPPMGELOEBL(::CCGKHPKLKKJ* AAOCANGHBDG, ::BHBGDGKDAFK& KLILNJLHJMO)
	{
		return ((::System::Void(*)(::PVOID, ::CCGKHPKLKKJ*, ::BHBGDGKDAFK&))((::PBYTE)hIl2Cpp + BLJJLBLGBEO_KPPMGELOEBL_OFFSET))(this, AAOCANGHBDG, KLILNJLHJMO);
	}

	::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* MPFLFNCPOBC(::System::Collections::Generic::List_1<::AADPENKKEFE>* POJAJNMGMGK, ::CCGKHPKLKKJ* AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::AADPENKKEFE>*, ::CCGKHPKLKKJ*))((::PBYTE)hIl2Cpp + BLJJLBLGBEO_MPFLFNCPOBC_OFFSET))(this, POJAJNMGMGK, AAOCANGHBDG);
	}
};
