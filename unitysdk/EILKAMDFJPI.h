#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingMatchUIShowType.h"
#include "unitysdk/System/Object.h"
class EILKAMDFJPI_MBOFJKCLAEL;
class HCLBAOIGOJI;
class IEEPDOJLPFN;
class KIJPPFKFFDA;
class KPDKCEAFBHI;
class OJPPNCAMCFL;
namespace System { class Object; }

#define EILKAMDFJPI_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x19AA0140)
#define EILKAMDFJPI_BOIKGLJLPGN_OFFSET UNITYSDK_OFFSET(0x19AA02D0)
#define EILKAMDFJPI_CJHHHEKLPKH_OFFSET UNITYSDK_OFFSET(0x19AA0F60)
#define EILKAMDFJPI_CTOR_OFFSET UNITYSDK_OFFSET(0x19A9FDC0)
#define EILKAMDFJPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AA04C0)
#define EILKAMDFJPI_EPBCBJPLOHN_OFFSET UNITYSDK_OFFSET(0x19AA0690)
#define EILKAMDFJPI_IMHIGJFIDAJ_OFFSET UNITYSDK_OFFSET(0x19AA0F00)
#define EILKAMDFJPI_JIKEFMGIODA_OFFSET UNITYSDK_OFFSET(0x19AA0FC0)
#define EILKAMDFJPI_MONGOPMLCKB_OFFSET UNITYSDK_OFFSET(0x19AA0810)
#define EILKAMDFJPI_MPIMCDNGFFE_OFFSET UNITYSDK_OFFSET(0x19AA0470)
#define EILKAMDFJPI_NAJOPNMPHPF_OFFSET UNITYSDK_OFFSET(0x19AA0030)
#define EILKAMDFJPI_PEINEDLEDNK_OFFSET UNITYSDK_OFFSET(0x19AA1020)
#define EILKAMDFJPI_PPNHPIHPHKL_OFFSET UNITYSDK_OFFSET(0x19AA0780)
#define EILKAMDFJPI_TICK_OFFSET UNITYSDK_OFFSET(0x19AA03D0)

inline static constexpr unsigned int EILKAMDFJPI_TypeDefinitionIndex = 84694;

	class EILKAMDFJPI : public ::System::Object
	{
	public:
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x10
		::OJPPNCAMCFL* ABHKPGMOECC; // 0x18
		::IEEPDOJLPFN* AHCKJJLJPMM; // 0x20
		::KIJPPFKFFDA* KAMLEMCONJK; // 0x28
		::EILKAMDFJPI_MBOFJKCLAEL* AALMMLAAAJP; // 0x30
		::RPG::Client::B51Racing::B51RacingMatchUIShowType IFHCLODKOCA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_CTOR_OFFSET))(this);
		}

		::System::Void BKJGMFOKKKN(::RPG::Client::B51Racing::B51RacingMatchUIShowType a1, ::HCLBAOIGOJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingMatchUIShowType, ::HCLBAOIGOJI*))((::PBYTE)hIl2Cpp + EILKAMDFJPI_BKJGMFOKKKN_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EILKAMDFJPI_TICK_OFFSET))(this, a1);
		}

		::System::Void MPIMCDNGFFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MPIMCDNGFFE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_DISPOSE_OFFSET))(this);
		}

		::System::Void EPBCBJPLOHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EILKAMDFJPI_EPBCBJPLOHN_OFFSET))(this, a1);
		}

		::System::Boolean PPNHPIHPHKL(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + EILKAMDFJPI_PPNHPIHPHKL_OFFSET))(this, a1, a2);
		}

		::System::Boolean MONGOPMLCKB(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MONGOPMLCKB_OFFSET))(this, a1);
		}

		::System::Void IMHIGJFIDAJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EILKAMDFJPI_IMHIGJFIDAJ_OFFSET))(this, a1);
		}

		::System::Void CJHHHEKLPKH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EILKAMDFJPI_CJHHHEKLPKH_OFFSET))(this, a1);
		}

		::System::Void JIKEFMGIODA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EILKAMDFJPI_JIKEFMGIODA_OFFSET))(this, a1);
		}

		::System::Void PEINEDLEDNK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EILKAMDFJPI_PEINEDLEDNK_OFFSET))(this, a1);
		}

		::System::Void NAJOPNMPHPF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EILKAMDFJPI_NAJOPNMPHPF_OFFSET))(this, a1);
		}

		::System::Void BOIKGLJLPGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_BOIKGLJLPGN_OFFSET))(this);
		}

	};
