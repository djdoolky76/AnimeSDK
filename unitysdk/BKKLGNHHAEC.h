#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOGPMKOGCLC;
class NKJMABKDAEH;
class ODNBJIEICJH;

#define BKKLGNHHAEC_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0xFF83820)
#define BKKLGNHHAEC_IAGIHHEPINL_OFFSET UNITYSDK_OFFSET(0xFF83C20)
#define BKKLGNHHAEC__CTOR_OFFSET UNITYSDK_OFFSET(0xFF837C0)

inline static constexpr unsigned int BKKLGNHHAEC_TypeDefinitionIndex = 44703;

class BKKLGNHHAEC : public ::System::Object
{
public:
	::ODNBJIEICJH* CGONDAIFNIF; // 0x10
	::NKJMABKDAEH* GJOCGANNFDP; // 0x18
	::NKJMABKDAEH* NDLEJKJFOCD; // 0x20
	::KOGPMKOGCLC* MANHEJPPMEK; // 0x28
	::NKJMABKDAEH* DNMGCCOKJCI; // 0x30

	::System::Void _ctor(::KOGPMKOGCLC* AIBLPKLIGNK)
	{
		return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + BKKLGNHHAEC__CTOR_OFFSET))(this, AIBLPKLIGNK);
	}

	::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKLGNHHAEC_DJDJKILDPGP_OFFSET))(this);
	}

	::System::Void IAGIHHEPINL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKLGNHHAEC_IAGIHHEPINL_OFFSET))(this);
	}
};
