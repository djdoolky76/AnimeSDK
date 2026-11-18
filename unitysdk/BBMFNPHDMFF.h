#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/System/Object.h"

class CIJPOILHKGI;
class PJOHPBGHNHK;
namespace Foundation { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBMFNPHDMFF_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1FA7CBF0)
#define BBMFNPHDMFF_CNNILFKCEDI_OFFSET UNITYSDK_OFFSET(0x1FA7BA70)
#define BBMFNPHDMFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FA7B670)
#define BBMFNPHDMFF_ELHOIPOHPOM_OFFSET UNITYSDK_OFFSET(0x1FA7C570)
#define BBMFNPHDMFF_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x1FA7C1D0)
#define BBMFNPHDMFF_KFCHDINFNFH_OFFSET UNITYSDK_OFFSET(0x1FA7C410)
#define BBMFNPHDMFF_KIHOOCAFNOM_OFFSET UNITYSDK_OFFSET(0x1FA7CCA0)
#define BBMFNPHDMFF_MAPADEFKMKE_OFFSET UNITYSDK_OFFSET(0x1FA7BFB0)
#define BBMFNPHDMFF_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x1FA7B980)
#define BBMFNPHDMFF_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1FA7C960)
#define BBMFNPHDMFF_PPFFNKKKLEL_OFFSET UNITYSDK_OFFSET(0x1FA7BDC0)
#define BBMFNPHDMFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA7B660)

inline static constexpr unsigned int BBMFNPHDMFF_TypeDefinitionIndex = 17979;

class BBMFNPHDMFF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::GPJMHAAEIKO, ::PJOHPBGHNHK*>* NACPCFEHHPL; // 0x10
	::System::Collections::Generic::List_1<::GPJMHAAEIKO>* IBKCOEPNICF; // 0x18
	::Foundation::IEntity* FEFFFPGCIIO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMFNPHDMFF__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMFNPHDMFF_DISPOSE_OFFSET))(this);
	}

	::System::Void CNNILFKCEDI(::Foundation::IEntity* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + BBMFNPHDMFF_CNNILFKCEDI_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void PPFFNKKKLEL(::CIJPOILHKGI* IJEAAEDDMCP)
	{
		return ((::System::Void(*)(::PVOID, ::CIJPOILHKGI*))((::PBYTE)hIl2Cpp + BBMFNPHDMFF_PPFFNKKKLEL_OFFSET))(this, IJEAAEDDMCP);
	}

	::System::Void MAPADEFKMKE(::GPJMHAAEIKO HEFFJBKIOEB, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GPJMHAAEIKO, ::System::Single))((::PBYTE)hIl2Cpp + BBMFNPHDMFF_MAPADEFKMKE_OFFSET))(this, HEFFJBKIOEB, EGEGIMGMJHN);
	}

	::System::Void KFCHDINFNFH(::PJOHPBGHNHK* GCLAAACKEFN)
	{
		return ((::System::Void(*)(::PVOID, ::PJOHPBGHNHK*))((::PBYTE)hIl2Cpp + BBMFNPHDMFF_KFCHDINFNFH_OFFSET))(this, GCLAAACKEFN);
	}

	::System::Void MBKDOMFJFIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMFNPHDMFF_MBKDOMFJFIG_OFFSET))(this);
	}

	::System::Boolean ELHOIPOHPOM(::GPJMHAAEIKO HEFFJBKIOEB, ::PJOHPBGHNHK*& GCLAAACKEFN)
	{
		return ((::System::Boolean(*)(::PVOID, ::GPJMHAAEIKO, ::PJOHPBGHNHK*&))((::PBYTE)hIl2Cpp + BBMFNPHDMFF_ELHOIPOHPOM_OFFSET))(this, HEFFJBKIOEB, GCLAAACKEFN);
	}

	static ::BBMFNPHDMFF* PKOGNPKCHHE()
	{
		return ((::BBMFNPHDMFF*(*)())((::PBYTE)hIl2Cpp + BBMFNPHDMFF_PKOGNPKCHHE_OFFSET))();
	}

	::System::Collections::Generic::List_1<::GPJMHAAEIKO>* KIHOOCAFNOM()
	{
		return ((::System::Collections::Generic::List_1<::GPJMHAAEIKO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMFNPHDMFF_KIHOOCAFNOM_OFFSET))(this);
	}

	::System::Void BBPCBEEHALC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMFNPHDMFF_BBPCBEEHALC_OFFSET))(this);
	}

	::PJOHPBGHNHK* GLOAAACBNPP(::GPJMHAAEIKO MCOHLHMKLIP)
	{
		return ((::PJOHPBGHNHK*(*)(::PVOID, ::GPJMHAAEIKO))((::PBYTE)hIl2Cpp + BBMFNPHDMFF_GLOAAACBNPP_OFFSET))(this, MCOHLHMKLIP);
	}
};
