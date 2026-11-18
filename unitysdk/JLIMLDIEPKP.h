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

#define JLIMLDIEPKP_AHEMAGNBHOG_OFFSET UNITYSDK_OFFSET(0x1C367580)
#define JLIMLDIEPKP_KPPMGELOEBL_OFFSET UNITYSDK_OFFSET(0x1C3675E0)
#define JLIMLDIEPKP_MPFLFNCPOBC_OFFSET UNITYSDK_OFFSET(0x1C367700)
#define JLIMLDIEPKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C367590)

inline static constexpr unsigned int JLIMLDIEPKP_TypeDefinitionIndex = 76852;

class JLIMLDIEPKP : public ::LJAPOEINABO
{
public:
	::ANDNNFHEGDH MBKMBGHFMLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIMLDIEPKP__CTOR_OFFSET))(this);
	}

	::BAKEACDMAIB AHEMAGNBHOG()
	{
		return ((::BAKEACDMAIB(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIMLDIEPKP_AHEMAGNBHOG_OFFSET))(this);
	}

	::System::Void KPPMGELOEBL(::CCGKHPKLKKJ* AAOCANGHBDG, ::BHBGDGKDAFK& KLILNJLHJMO)
	{
		return ((::System::Void(*)(::PVOID, ::CCGKHPKLKKJ*, ::BHBGDGKDAFK&))((::PBYTE)hIl2Cpp + JLIMLDIEPKP_KPPMGELOEBL_OFFSET))(this, AAOCANGHBDG, KLILNJLHJMO);
	}

	::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* MPFLFNCPOBC(::System::Collections::Generic::List_1<::AADPENKKEFE>* POJAJNMGMGK, ::CCGKHPKLKKJ* AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::AADPENKKEFE>*, ::CCGKHPKLKKJ*))((::PBYTE)hIl2Cpp + JLIMLDIEPKP_MPFLFNCPOBC_OFFSET))(this, POJAJNMGMGK, AAOCANGHBDG);
	}
};
