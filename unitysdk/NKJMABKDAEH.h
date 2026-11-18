#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KOGPMKOGCLC;
class ODNBJIEICJH;
template <typename T> class IHECGHKOIPM_1;
template <typename T> class KLIOMMIOFDC_1;

#define NKJMABKDAEH_AJNLHLCGPBE_OFFSET UNITYSDK_OFFSET(0xE58EB20)
#define NKJMABKDAEH_BEKHBEGPKNE_OFFSET UNITYSDK_OFFSET(0xE58EF40)
#define NKJMABKDAEH_IPMFOBKEEMJ_OFFSET UNITYSDK_OFFSET(0xE58ED90)
#define NKJMABKDAEH_JENAMKOABCE_OFFSET UNITYSDK_OFFSET(0xE58EAD0)
#define NKJMABKDAEH_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xE58E860)
#define NKJMABKDAEH__CTOR_OFFSET UNITYSDK_OFFSET(0xE58EB10)

inline static constexpr unsigned int NKJMABKDAEH_TypeDefinitionIndex = 74283;

class NKJMABKDAEH : public ::JJEJBPGJPJN
{
public:
	::IHECGHKOIPM_1<::System::Double>* IKOFJEHPPAN; // 0x88
	::KLIOMMIOFDC_1<::System::Double>* BOKMJMOAONH; // 0x90
	::ODNBJIEICJH* BKNBOLCLKGJ; // 0x98
	::KLIOMMIOFDC_1<::System::Double>* CHFEDONOMMG; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJMABKDAEH__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJMABKDAEH_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void JENAMKOABCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJMABKDAEH_JENAMKOABCE_OFFSET))(this);
	}

	::System::Double AJNLHLCGPBE()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJMABKDAEH_AJNLHLCGPBE_OFFSET))(this);
	}

	::System::Boolean IPMFOBKEEMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJMABKDAEH_IPMFOBKEEMJ_OFFSET))(this);
	}

	::System::Void BEKHBEGPKNE(::KOGPMKOGCLC* AIBLPKLIGNK)
	{
		return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + NKJMABKDAEH_BEKHBEGPKNE_OFFSET))(this, AIBLPKLIGNK);
	}
};
