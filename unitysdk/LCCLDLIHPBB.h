#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class CBMNPCAPJIF;
class KADDBCHLLFN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCCLDLIHPBB_ADFANNPKCHP_OFFSET UNITYSDK_OFFSET(0x129BD620)
#define LCCLDLIHPBB_BAEGFKIBBIL_OFFSET UNITYSDK_OFFSET(0x129BD330)
#define LCCLDLIHPBB_CIFCKLGLEOI_OFFSET UNITYSDK_OFFSET(0x129BD1A0)
#define LCCLDLIHPBB_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x129BD590)
#define LCCLDLIHPBB_EOLPLJGKABD_OFFSET UNITYSDK_OFFSET(0x129BCF10)
#define LCCLDLIHPBB_FABOAPADKBM_OFFSET UNITYSDK_OFFSET(0x129BC840)
#define LCCLDLIHPBB_FEFMMFIEDIP_OFFSET UNITYSDK_OFFSET(0x129BCCC0)
#define LCCLDLIHPBB_NLODJBCMNNM_OFFSET UNITYSDK_OFFSET(0x129BCB30)
#define LCCLDLIHPBB_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x129BC7B0)
#define LCCLDLIHPBB__CTOR_OFFSET UNITYSDK_OFFSET(0x129BC830)

inline static constexpr unsigned int LCCLDLIHPBB_TypeDefinitionIndex = 56901;

class LCCLDLIHPBB : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FPANINNFNFA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CBMNPCAPJIF*>* JGDJOFANJBD; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KADDBCHLLFN*>* FKFDFLDLAIG; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EPOOPBGGMJG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCLDLIHPBB__CTOR_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCLDLIHPBB_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Boolean FABOAPADKBM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCLDLIHPBB_FABOAPADKBM_OFFSET))(this);
	}

	::System::Boolean FEFMMFIEDIP(::System::Int32 INJBEOPCFLF, ::CBMNPCAPJIF*& EJANOMALBNM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBMNPCAPJIF*&))((::PBYTE)hIl2Cpp + LCCLDLIHPBB_FEFMMFIEDIP_OFFSET))(this, INJBEOPCFLF, EJANOMALBNM);
	}

	::System::Int32 EOLPLJGKABD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCLDLIHPBB_EOLPLJGKABD_OFFSET))(this);
	}

	::System::Boolean BAEGFKIBBIL(::System::Int32 KAGKEDIGALF, ::KADDBCHLLFN*& ANOEKKGFONL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KADDBCHLLFN*&))((::PBYTE)hIl2Cpp + LCCLDLIHPBB_BAEGFKIBBIL_OFFSET))(this, KAGKEDIGALF, ANOEKKGFONL);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCLDLIHPBB_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Boolean CIFCKLGLEOI(::System::Int32 GJOJKODONDC, ::CBMNPCAPJIF*& EGELFDNPKEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBMNPCAPJIF*&))((::PBYTE)hIl2Cpp + LCCLDLIHPBB_CIFCKLGLEOI_OFFSET))(this, GJOJKODONDC, EGELFDNPKEF);
	}

	::System::Boolean NLODJBCMNNM(::System::Int32 CGJLLMOPAGD, ::CBMNPCAPJIF*& EGELFDNPKEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBMNPCAPJIF*&))((::PBYTE)hIl2Cpp + LCCLDLIHPBB_NLODJBCMNNM_OFFSET))(this, CGJLLMOPAGD, EGELFDNPKEF);
	}

	::System::Void ADFANNPKCHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCLDLIHPBB_ADFANNPKCHP_OFFSET))(this);
	}
};
