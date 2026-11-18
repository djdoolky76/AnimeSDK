#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FIFDNFKHFFO;
class LIMEMGMAGHP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECNHBEICOOD_DFGIMBBCKJG_OFFSET UNITYSDK_OFFSET(0x1ADCF830)
#define ECNHBEICOOD_LFBKOPOBMAK_OFFSET UNITYSDK_OFFSET(0x1ADCF730)
#define ECNHBEICOOD_NGCFJHGHLAJ_OFFSET UNITYSDK_OFFSET(0x1ADCFDA0)
#define ECNHBEICOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCF6A0)

inline static constexpr unsigned int ECNHBEICOOD_TypeDefinitionIndex = 13223;

class ECNHBEICOOD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* NNPNLKMFFDI; // 0x10
	::LIMEMGMAGHP* NBCHCFIBNCC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNHBEICOOD__CTOR_OFFSET))(this);
	}

	::FIFDNFKHFFO* LFBKOPOBMAK(::System::Int32 KMMGKJPAOMF, ::System::Int32 EHNJCPCLCOJ)
	{
		return ((::FIFDNFKHFFO*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ECNHBEICOOD_LFBKOPOBMAK_OFFSET))(this, KMMGKJPAOMF, EHNJCPCLCOJ);
	}

	::System::Void DFGIMBBCKJG(::LIMEMGMAGHP* GMCGKHLJDME)
	{
		return ((::System::Void(*)(::PVOID, ::LIMEMGMAGHP*))((::PBYTE)hIl2Cpp + ECNHBEICOOD_DFGIMBBCKJG_OFFSET))(this, GMCGKHLJDME);
	}

	::System::Void NGCFJHGHLAJ(::LIMEMGMAGHP* GMCGKHLJDME)
	{
		return ((::System::Void(*)(::PVOID, ::LIMEMGMAGHP*))((::PBYTE)hIl2Cpp + ECNHBEICOOD_NGCFJHGHLAJ_OFFSET))(this, GMCGKHLJDME);
	}
};
