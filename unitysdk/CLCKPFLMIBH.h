#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CDLPMFPBDBA;
class HFEGFEAKGCA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLCKPFLMIBH_BBAJEHFGLKI_OFFSET UNITYSDK_OFFSET(0x1533D630)
#define CLCKPFLMIBH_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1533D730)
#define CLCKPFLMIBH_GLCHIDAEMNF_OFFSET UNITYSDK_OFFSET(0x1533D270)
#define CLCKPFLMIBH_GNDDIKDNLEG_OFFSET UNITYSDK_OFFSET(0x1533D470)
#define CLCKPFLMIBH_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x1533D6C0)
#define CLCKPFLMIBH_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x1533D410)
#define CLCKPFLMIBH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1533CFE0)
#define CLCKPFLMIBH_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1533D920)
#define CLCKPFLMIBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1533CF50)

inline static constexpr unsigned int CLCKPFLMIBH_TypeDefinitionIndex = 75843;

class CLCKPFLMIBH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HFEGFEAKGCA*>* FCCDNPAPJDJ; // 0x10
	::CDLPMFPBDBA* PMNLAHHMNFM; // 0x18
	::HFEGFEAKGCA* LDDJOFHAOHG; // 0x20
	::System::Single NGPJNHMDECB; // 0x28

	::System::Void _ctor(::CDLPMFPBDBA* PMNLAHHMNFM)
	{
		return ((::System::Void(*)(::PVOID, ::CDLPMFPBDBA*))((::PBYTE)hIl2Cpp + CLCKPFLMIBH__CTOR_OFFSET))(this, PMNLAHHMNFM);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKPFLMIBH_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void GLCHIDAEMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKPFLMIBH_GLCHIDAEMNF_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKPFLMIBH_OENOEFBECOA_OFFSET))(this);
	}

	::System::Boolean GNDDIKDNLEG(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLCKPFLMIBH_GNDDIKDNLEG_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void BBAJEHFGLKI(::HFEGFEAKGCA* HJAOFKFDLJF)
	{
		return ((::System::Void(*)(::PVOID, ::HFEGFEAKGCA*))((::PBYTE)hIl2Cpp + CLCKPFLMIBH_BBAJEHFGLKI_OFFSET))(this, HJAOFKFDLJF);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKPFLMIBH_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKPFLMIBH_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKPFLMIBH_PGHAJOMNDDJ_OFFSET))(this);
	}
};
