#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPIIAHNMGPP.h"
#include "unitysdk/System/Object.h"

class EFGEKMKMFJO;
class LPEFBMOHGGF;
class MHNMKCKALOP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHMHCJIFOPF_AFELNGFEGBN_OFFSET UNITYSDK_OFFSET(0x1E1BBEE0)
#define DHMHCJIFOPF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1E1BBCD0)
#define DHMHCJIFOPF_EFIJMGEIFOE_OFFSET UNITYSDK_OFFSET(0x1E1BBA50)
#define DHMHCJIFOPF_EIOHCGONGIH_OFFSET UNITYSDK_OFFSET(0x1E1BC050)
#define DHMHCJIFOPF_FBAHKEJHPEE_OFFSET UNITYSDK_OFFSET(0x1E1BB9D0)
#define DHMHCJIFOPF_FKGJGLJBEEP_OFFSET UNITYSDK_OFFSET(0x1E1BBB30)
#define DHMHCJIFOPF_HOGOLFKEJKK_OFFSET UNITYSDK_OFFSET(0x1E1BBB80)
#define DHMHCJIFOPF_LDEFOFFAKHB_OFFSET UNITYSDK_OFFSET(0x1E1BBD10)
#define DHMHCJIFOPF_PKMEHLJNFPP_OFFSET UNITYSDK_OFFSET(0x1E1BBD70)
#define DHMHCJIFOPF_PKNGGLNBCPO_OFFSET UNITYSDK_OFFSET(0x1E1BB9E0)
#define DHMHCJIFOPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BB670)
#define DHMHCJIFOPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB570)

inline static constexpr unsigned int DHMHCJIFOPF_TypeDefinitionIndex = 94028;

class DHMHCJIFOPF : public ::System::Object
{
public:
	::MHNMKCKALOP* HMPEEAAAGHE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFGEKMKMFJO*>* NABDCFKOKMH; // 0x18
	::System::Collections::Generic::List_1<::EFGEKMKMFJO*>* PJNNNNCIIEF; // 0x20
	::System::Single BLMPKBGKLOM; // 0x28
	::OPIIAHNMGPP OCOJFKMOKMK; // 0x2C
	::System::Int32 KMHGKJOADDC; // 0x30
	::System::Byte _padding0[0x4];
	::System::UInt64 AFIFCBDOEBE; // 0x38
	::System::Int32 NGPFHJFLHGH; // 0x40
	::System::Int32 LFPLCDFANIH; // 0x44

	::System::Void _ctor(::MHNMKCKALOP* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::MHNMKCKALOP*))((::PBYTE)hIl2Cpp + DHMHCJIFOPF__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_TOSTRING_OFFSET))(this);
	}

	::System::Int32 FBAHKEJHPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_FBAHKEJHPEE_OFFSET))(this);
	}

	::System::UInt64 PKNGGLNBCPO()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_PKNGGLNBCPO_OFFSET))(this);
	}

	::LPEFBMOHGGF* EFIJMGEIFOE()
	{
		return ((::LPEFBMOHGGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_EFIJMGEIFOE_OFFSET))(this);
	}

	::System::Boolean FKGJGLJBEEP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_FKGJGLJBEEP_OFFSET))(this);
	}

	::EFGEKMKMFJO* HOGOLFKEJKK(::System::UInt32 EMNJAINGHFJ)
	{
		return ((::EFGEKMKMFJO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_HOGOLFKEJKK_OFFSET))(this, EMNJAINGHFJ);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void LDEFOFFAKHB(::OPIIAHNMGPP EKOHIAJDIEC)
	{
		return ((::System::Void(*)(::PVOID, ::OPIIAHNMGPP))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_LDEFOFFAKHB_OFFSET))(this, EKOHIAJDIEC);
	}

	::EFGEKMKMFJO* PKMEHLJNFPP(::System::UInt32 CNENMOBJBBK)
	{
		return ((::EFGEKMKMFJO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_PKMEHLJNFPP_OFFSET))(this, CNENMOBJBBK);
	}

	::EFGEKMKMFJO* AFELNGFEGBN(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::EFGEKMKMFJO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_AFELNGFEGBN_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void EIOHCGONGIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMHCJIFOPF_EIOHCGONGIH_OFFSET))(this);
	}
};
