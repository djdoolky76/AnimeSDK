#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMNGCINABBM;
namespace System { class String; }

#define MPFEHCBHDBM_CFIPMJEOCND_OFFSET UNITYSDK_OFFSET(0x18B5F960)
#define MPFEHCBHDBM_CKAFOKBMAJP_OFFSET UNITYSDK_OFFSET(0x18B5F7F0)
#define MPFEHCBHDBM_KPNDELDILIF_OFFSET UNITYSDK_OFFSET(0x18B5F9A0)
#define MPFEHCBHDBM_OADAGJBMIML_OFFSET UNITYSDK_OFFSET(0x18B5F7B0)
#define MPFEHCBHDBM__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5F7A0)

inline static constexpr unsigned int MPFEHCBHDBM_TypeDefinitionIndex = 41702;

class MPFEHCBHDBM : public ::System::Object
{
public:
	// static const ::System::String* EIJFGDPEFMO; // 0x0
	// static const ::System::String* GKNOFHMPOBA; // 0x0
	// static const ::System::String* LFGBPNNKIDB; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFEHCBHDBM__CTOR_OFFSET))(this);
	}

	static ::BMNGCINABBM* OADAGJBMIML()
	{
		return ((::BMNGCINABBM*(*)())((::PBYTE)hIl2Cpp + MPFEHCBHDBM_OADAGJBMIML_OFFSET))();
	}

	static ::BMNGCINABBM* CKAFOKBMAJP(::System::String* MCOHLHMKLIP)
	{
		return ((::BMNGCINABBM*(*)(::System::String*))((::PBYTE)hIl2Cpp + MPFEHCBHDBM_CKAFOKBMAJP_OFFSET))(MCOHLHMKLIP);
	}

	static ::BMNGCINABBM* CFIPMJEOCND()
	{
		return ((::BMNGCINABBM*(*)())((::PBYTE)hIl2Cpp + MPFEHCBHDBM_CFIPMJEOCND_OFFSET))();
	}

	static ::BMNGCINABBM* KPNDELDILIF()
	{
		return ((::BMNGCINABBM*(*)())((::PBYTE)hIl2Cpp + MPFEHCBHDBM_KPNDELDILIF_OFFSET))();
	}
};
