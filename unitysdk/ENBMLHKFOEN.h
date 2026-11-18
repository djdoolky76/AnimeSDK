#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANDNNFHEGDH.h"
#include "unitysdk/BAKEACDMAIB.h"
#include "unitysdk/LJAPOEINABO.h"
#include "unitysdk/AADPENKKEFE.h"
#include "unitysdk/BHBGDGKDAFK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class AMFAHGEFDFJ;
class CCGKHPKLKKJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENBMLHKFOEN_AHEMAGNBHOG_OFFSET UNITYSDK_OFFSET(0x142786A0)
#define ENBMLHKFOEN_KPPMGELOEBL_OFFSET UNITYSDK_OFFSET(0x14278700)
#define ENBMLHKFOEN_MPFLFNCPOBC_OFFSET UNITYSDK_OFFSET(0x14278750)
#define ENBMLHKFOEN__CTOR_OFFSET UNITYSDK_OFFSET(0x142786B0)

inline static constexpr unsigned int ENBMLHKFOEN_TypeDefinitionIndex = 74011;

class ENBMLHKFOEN : public ::LJAPOEINABO
{
public:
	::ANDNNFHEGDH MBKMBGHFMLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBMLHKFOEN__CTOR_OFFSET))(this);
	}

	::BAKEACDMAIB AHEMAGNBHOG()
	{
		return ((::BAKEACDMAIB(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBMLHKFOEN_AHEMAGNBHOG_OFFSET))(this);
	}

	::System::Void KPPMGELOEBL(::CCGKHPKLKKJ* AAOCANGHBDG, ::BHBGDGKDAFK& KLILNJLHJMO)
	{
		return ((::System::Void(*)(::PVOID, ::CCGKHPKLKKJ*, ::BHBGDGKDAFK&))((::PBYTE)hIl2Cpp + ENBMLHKFOEN_KPPMGELOEBL_OFFSET))(this, AAOCANGHBDG, KLILNJLHJMO);
	}

	::System::Nullable_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*, ::System::Int32>> MPFLFNCPOBC(::System::Collections::Generic::List_1<::AADPENKKEFE>* POJAJNMGMGK, ::CCGKHPKLKKJ* AAOCANGHBDG)
	{
		return ((::System::Nullable_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*, ::System::Int32>>(*)(::PVOID, ::System::Collections::Generic::List_1<::AADPENKKEFE>*, ::CCGKHPKLKKJ*))((::PBYTE)hIl2Cpp + ENBMLHKFOEN_MPFLFNCPOBC_OFFSET))(this, POJAJNMGMGK, AAOCANGHBDG);
	}
};
