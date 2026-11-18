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

#define CFGKLNJNOME_AHEMAGNBHOG_OFFSET UNITYSDK_OFFSET(0x10E359F0)
#define CFGKLNJNOME_KPPMGELOEBL_OFFSET UNITYSDK_OFFSET(0x10E35A50)
#define CFGKLNJNOME_MPFLFNCPOBC_OFFSET UNITYSDK_OFFSET(0x10E35B70)
#define CFGKLNJNOME__CTOR_OFFSET UNITYSDK_OFFSET(0x10E35A00)

inline static constexpr unsigned int CFGKLNJNOME_TypeDefinitionIndex = 80755;

class CFGKLNJNOME : public ::LJAPOEINABO
{
public:
	::ANDNNFHEGDH MBKMBGHFMLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGKLNJNOME__CTOR_OFFSET))(this);
	}

	::BAKEACDMAIB AHEMAGNBHOG()
	{
		return ((::BAKEACDMAIB(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGKLNJNOME_AHEMAGNBHOG_OFFSET))(this);
	}

	::System::Void KPPMGELOEBL(::CCGKHPKLKKJ* AAOCANGHBDG, ::BHBGDGKDAFK& KLILNJLHJMO)
	{
		return ((::System::Void(*)(::PVOID, ::CCGKHPKLKKJ*, ::BHBGDGKDAFK&))((::PBYTE)hIl2Cpp + CFGKLNJNOME_KPPMGELOEBL_OFFSET))(this, AAOCANGHBDG, KLILNJLHJMO);
	}

	::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* MPFLFNCPOBC(::System::Collections::Generic::List_1<::AADPENKKEFE>* POJAJNMGMGK, ::CCGKHPKLKKJ* AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::AADPENKKEFE>*, ::CCGKHPKLKKJ*))((::PBYTE)hIl2Cpp + CFGKLNJNOME_MPFLFNCPOBC_OFFSET))(this, POJAJNMGMGK, AAOCANGHBDG);
	}
};
