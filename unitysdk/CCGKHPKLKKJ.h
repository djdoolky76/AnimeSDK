#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CCGKHPKLKKJ_FBALMNBKEJK.h"
#include "unitysdk/HDJBHFAKBJC_LAGNGONONOC.h"

class AMFAHGEFDFJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCGKHPKLKKJ_AIHEFNHIBAM_OFFSET UNITYSDK_OFFSET(0x159ABE80)
#define CCGKHPKLKKJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x159ABDD0)
#define CCGKHPKLKKJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x159AC160)
#define CCGKHPKLKKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x159ABD10)

inline static constexpr unsigned int CCGKHPKLKKJ_TypeDefinitionIndex = 74880;

class CCGKHPKLKKJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* PJGBIMBOFCA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* LHONHLAJFCD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGKHPKLKKJ__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* HIDMEFPIEKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*))((::PBYTE)hIl2Cpp + CCGKHPKLKKJ_BBOMJDBNHIC_OFFSET))(this, HIDMEFPIEKA);
	}

	::CCGKHPKLKKJ_FBALMNBKEJK AIHEFNHIBAM(::HDJBHFAKBJC_LAGNGONONOC& KPNIHKEKDOC)
	{
		return ((::CCGKHPKLKKJ_FBALMNBKEJK(*)(::PVOID, ::HDJBHFAKBJC_LAGNGONONOC&))((::PBYTE)hIl2Cpp + CCGKHPKLKKJ_AIHEFNHIBAM_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGKHPKLKKJ_NPOLNFDBOOD_OFFSET))(this);
	}
};
