#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KOGPMKOGCLC;
class ODNBJIEICJH;
template <typename T> class IHECGHKOIPM_1;
template <typename T> class KLIOMMIOFDC_1;

#define PGMGOLOBEHG_AJNLHLCGPBE_OFFSET UNITYSDK_OFFSET(0x1949F890)
#define PGMGOLOBEHG_BEKHBEGPKNE_OFFSET UNITYSDK_OFFSET(0x1949F7D0)
#define PGMGOLOBEHG_IPMFOBKEEMJ_OFFSET UNITYSDK_OFFSET(0x1949F620)
#define PGMGOLOBEHG_JENAMKOABCE_OFFSET UNITYSDK_OFFSET(0x1949F5D0)
#define PGMGOLOBEHG_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1949F360)
#define PGMGOLOBEHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1949F610)

inline static constexpr unsigned int PGMGOLOBEHG_TypeDefinitionIndex = 73844;

class PGMGOLOBEHG : public ::JJEJBPGJPJN
{
public:
	::ODNBJIEICJH* BKNBOLCLKGJ; // 0x88
	::KLIOMMIOFDC_1<::System::Double>* CHFEDONOMMG; // 0x90
	::IHECGHKOIPM_1<::System::Double>* IKOFJEHPPAN; // 0x98
	::KLIOMMIOFDC_1<::System::Double>* BOKMJMOAONH; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMGOLOBEHG__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMGOLOBEHG_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void JENAMKOABCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMGOLOBEHG_JENAMKOABCE_OFFSET))(this);
	}

	::System::Boolean IPMFOBKEEMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMGOLOBEHG_IPMFOBKEEMJ_OFFSET))(this);
	}

	::System::Void BEKHBEGPKNE(::KOGPMKOGCLC* AIBLPKLIGNK)
	{
		return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + PGMGOLOBEHG_BEKHBEGPKNE_OFFSET))(this, AIBLPKLIGNK);
	}

	::System::Double AJNLHLCGPBE()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMGOLOBEHG_AJNLHLCGPBE_OFFSET))(this);
	}
};
