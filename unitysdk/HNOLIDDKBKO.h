#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANDNNFHEGDH.h"
#include "unitysdk/BAKEACDMAIB.h"
#include "unitysdk/LJAPOEINABO.h"
#include "unitysdk/BHBGDGKDAFK.h"

class AMFAHGEFDFJ;
class CCGKHPKLKKJ;
namespace System { template <typename T1, typename T2> class Func_2; }

#define HNOLIDDKBKO_AHEMAGNBHOG_OFFSET UNITYSDK_OFFSET(0x15BE0A00)
#define HNOLIDDKBKO_AJBBELMHECK_OFFSET UNITYSDK_OFFSET(0x15BE0E70)
#define HNOLIDDKBKO_JEIBCBJMHOB_OFFSET UNITYSDK_OFFSET(0x15BE0F50)
#define HNOLIDDKBKO_KGAOEFJEBJC_OFFSET UNITYSDK_OFFSET(0x15BE0F10)
#define HNOLIDDKBKO_KPPMGELOEBL_OFFSET UNITYSDK_OFFSET(0x15BE0A10)
#define HNOLIDDKBKO__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE09B0)

inline static constexpr unsigned int HNOLIDDKBKO_TypeDefinitionIndex = 65215;

class HNOLIDDKBKO : public ::LJAPOEINABO
{
public:
	::System::Func_2<::AMFAHGEFDFJ*, ::System::Boolean>* CKFMACEKFKK; // 0x10
	::ANDNNFHEGDH MBKMBGHFMLN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOLIDDKBKO__CTOR_OFFSET))(this);
	}

	::BAKEACDMAIB AHEMAGNBHOG()
	{
		return ((::BAKEACDMAIB(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOLIDDKBKO_AHEMAGNBHOG_OFFSET))(this);
	}

	::System::Void KPPMGELOEBL(::CCGKHPKLKKJ* AAOCANGHBDG, ::BHBGDGKDAFK& KLILNJLHJMO)
	{
		return ((::System::Void(*)(::PVOID, ::CCGKHPKLKKJ*, ::BHBGDGKDAFK&))((::PBYTE)hIl2Cpp + HNOLIDDKBKO_KPPMGELOEBL_OFFSET))(this, AAOCANGHBDG, KLILNJLHJMO);
	}

	::System::Boolean KGAOEFJEBJC(::AMFAHGEFDFJ* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + HNOLIDDKBKO_KGAOEFJEBJC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Func_2<::AMFAHGEFDFJ*, ::System::Boolean>* AJBBELMHECK()
	{
		return ((::System::Func_2<::AMFAHGEFDFJ*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOLIDDKBKO_AJBBELMHECK_OFFSET))(this);
	}

	::System::Boolean JEIBCBJMHOB(::AMFAHGEFDFJ* MNDIBLLFAJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + HNOLIDDKBKO_JEIBCBJMHOB_OFFSET))(this, MNDIBLLFAJI);
	}
};
