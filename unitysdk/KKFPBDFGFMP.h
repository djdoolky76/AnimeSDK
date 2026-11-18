#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMCBEAJMEFF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EAOGLMKGMGE.h"
#include "unitysdk/IKFPLFGLFHF_LOKCIAEOBOL.h"

class AHLMMFMPHEO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKFPBDFGFMP_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x1995E030)
#define KKFPBDFGFMP_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x1995DF00)
#define KKFPBDFGFMP_KAAEKAOEDDO_OFFSET UNITYSDK_OFFSET(0x1995DC50)
#define KKFPBDFGFMP_KIABAMAKJAG_OFFSET UNITYSDK_OFFSET(0x1995E150)
#define KKFPBDFGFMP_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1995DC90)
#define KKFPBDFGFMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1995E090)

inline static constexpr unsigned int KKFPBDFGFMP_TypeDefinitionIndex = 82497;

class KKFPBDFGFMP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* HLPPGLCKMMM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFPBDFGFMP__CTOR_OFFSET))(this);
	}

	::HMCBEAJMEFF KAAEKAOEDDO()
	{
		return ((::HMCBEAJMEFF(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFPBDFGFMP_KAAEKAOEDDO_OFFSET))(this);
	}

	::System::Void PKOGNPKCHHE(::IKFPLFGLFHF_LOKCIAEOBOL& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::IKFPLFGLFHF_LOKCIAEOBOL&))((::PBYTE)hIl2Cpp + KKFPBDFGFMP_PKOGNPKCHHE_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Void JLIMOLHLFAK(::AHLMMFMPHEO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::AHLMMFMPHEO*))((::PBYTE)hIl2Cpp + KKFPBDFGFMP_JLIMOLHLFAK_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void FLHNGDLANDC(::System::UInt32 KJDNDFCONCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKFPBDFGFMP_FLHNGDLANDC_OFFSET))(this, KJDNDFCONCN);
	}

	::System::Boolean KIABAMAKJAG(::System::UInt32 ONKBDINKOPN, ::EAOGLMKGMGE& JIDNKHKCFLI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::EAOGLMKGMGE&))((::PBYTE)hIl2Cpp + KKFPBDFGFMP_KIABAMAKJAG_OFFSET))(this, ONKBDINKOPN, JIDNKHKCFLI);
	}
};
