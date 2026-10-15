#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLOFHFCGJHA.h"
#include "unitysdk/ONLMADIIKIA_SpreadPosition.h"
class AGDPEHNHDMI;
class ALBPEHOMADH;
class FFAHCMHJDAA;
class HHNBPEEGNCL;
class ICEBONFCKMP;
class NKOOKDOKLMK;
class NNNKIAEMMCA;
class ONMFFIDIOLN;
class PCEHFACKCOM;
namespace RPG::GameCore::Booklet { class PageSpreadConfig; }

#define ONLMADIIKIA_ACCEPT_OFFSET UNITYSDK_OFFSET(0xBF5B4C0)
#define ONLMADIIKIA_BEDPOEOIBGN_OFFSET UNITYSDK_OFFSET(0xBF5BA20)
#define ONLMADIIKIA_BIMNIKBAHCE_OFFSET UNITYSDK_OFFSET(0xBF5BC60)
#define ONLMADIIKIA_CMJALFAGCOI_OFFSET UNITYSDK_OFFSET(0xBF5CDA0)
#define ONLMADIIKIA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF5B290)
#define ONLMADIIKIA_EALKMJDFEEE_OFFSET UNITYSDK_OFFSET(0xBF5C430)
#define ONLMADIIKIA_FKMGAOKEOLE_OFFSET UNITYSDK_OFFSET(0xBF5CF90)
#define ONLMADIIKIA_GBAKHEBBHNE_OFFSET UNITYSDK_OFFSET(0xBF5C5C0)
#define ONLMADIIKIA_GDJPHNPGIHI_OFFSET UNITYSDK_OFFSET(0xBF5B960)
#define ONLMADIIKIA_GDMEGDCLIIF_OFFSET UNITYSDK_OFFSET(0xBF5BEA0)
#define ONLMADIIKIA_KMOMCILKOIL_OFFSET UNITYSDK_OFFSET(0xBF5BF10)
#define ONLMADIIKIA_LFKKICBOEJD_OFFSET UNITYSDK_OFFSET(0xBF5C760)
#define ONLMADIIKIA_LKKLMEGDMNN_OFFSET UNITYSDK_OFFSET(0xBF5C1D0)
#define ONLMADIIKIA_MLNKOLLCEEG_OFFSET UNITYSDK_OFFSET(0xBF5C330)
#define ONLMADIIKIA_NJADEGIAHJG_OFFSET UNITYSDK_OFFSET(0xBF5CA70)
#define ONLMADIIKIA_OCDNEJKGLPP_OFFSET UNITYSDK_OFFSET(0xBF5C070)
#define ONLMADIIKIA_OCEKIHINBCO_OFFSET UNITYSDK_OFFSET(0xBF5BAB0)
#define ONLMADIIKIA_OJJCMMBJKCL_OFFSET UNITYSDK_OFFSET(0xBF5C2D0)
#define ONLMADIIKIA_PEFKGLPHDKI_OFFSET UNITYSDK_OFFSET(0xBF5C880)
#define ONLMADIIKIA_PKFEOMMAIEN_OFFSET UNITYSDK_OFFSET(0xBF5B9C0)

	class ONLMADIIKIA : public ::BLOFHFCGJHA
	{
	public:
		::NNNKIAEMMCA* IMIPINHAAHO; // 0x20
		::HHNBPEEGNCL* MKNEKHDDFGI; // 0x28
		// static const ::System::Object OBBANDFHOIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLMADIIKIA_CTOR_OFFSET))(this);
		}

		::System::Void Accept(::AGDPEHNHDMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGDPEHNHDMI*))((::PBYTE)hIl2Cpp + ONLMADIIKIA_ACCEPT_OFFSET))(this, a1);
		}

		::System::Void OCEKIHINBCO(::NKOOKDOKLMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKOOKDOKLMK*))((::PBYTE)hIl2Cpp + ONLMADIIKIA_OCEKIHINBCO_OFFSET))(this, a1);
		}

		::System::Void LKKLMEGDMNN(::ALBPEHOMADH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALBPEHOMADH*))((::PBYTE)hIl2Cpp + ONLMADIIKIA_LKKLMEGDMNN_OFFSET))(this, a1);
		}

		::System::Void MLNKOLLCEEG(::PCEHFACKCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCEHFACKCOM*))((::PBYTE)hIl2Cpp + ONLMADIIKIA_MLNKOLLCEEG_OFFSET))(this, a1);
		}

		::System::Void EALKMJDFEEE(::FFAHCMHJDAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFAHCMHJDAA*))((::PBYTE)hIl2Cpp + ONLMADIIKIA_EALKMJDFEEE_OFFSET))(this, a1);
		}

		::System::Void GBAKHEBBHNE(::ICEBONFCKMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICEBONFCKMP*))((::PBYTE)hIl2Cpp + ONLMADIIKIA_GBAKHEBBHNE_OFFSET))(this, a1);
		}

		::System::Void BIMNIKBAHCE(::ONLMADIIKIA_SpreadPosition a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONLMADIIKIA_SpreadPosition))((::PBYTE)hIl2Cpp + ONLMADIIKIA_BIMNIKBAHCE_OFFSET))(this, a1);
		}

		::System::Void PEFKGLPHDKI(::ONLMADIIKIA_SpreadPosition a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONLMADIIKIA_SpreadPosition))((::PBYTE)hIl2Cpp + ONLMADIIKIA_PEFKGLPHDKI_OFFSET))(this, a1);
		}

		::System::Void GDMEGDCLIIF(::ONLMADIIKIA_SpreadPosition a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::ONLMADIIKIA_SpreadPosition, ::System::Boolean))((::PBYTE)hIl2Cpp + ONLMADIIKIA_GDMEGDCLIIF_OFFSET))(this, a1, a2);
		}

		::System::Void OJJCMMBJKCL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONLMADIIKIA_OJJCMMBJKCL_OFFSET))(this, a1);
		}

		::System::Void NJADEGIAHJG(::ONLMADIIKIA_SpreadPosition a1, ::AGDPEHNHDMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ONLMADIIKIA_SpreadPosition, ::AGDPEHNHDMI*))((::PBYTE)hIl2Cpp + ONLMADIIKIA_NJADEGIAHJG_OFFSET))(this, a1, a2);
		}

		::System::Void CMJALFAGCOI(::AGDPEHNHDMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGDPEHNHDMI*))((::PBYTE)hIl2Cpp + ONLMADIIKIA_CMJALFAGCOI_OFFSET))(this, a1);
		}

		::ONMFFIDIOLN* BEDPOEOIBGN()
		{
			return ((::ONMFFIDIOLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLMADIIKIA_BEDPOEOIBGN_OFFSET))(this);
		}

		::ONMFFIDIOLN* GDJPHNPGIHI(::ONLMADIIKIA_SpreadPosition a1)
		{
			return ((::ONMFFIDIOLN*(*)(::PVOID, ::ONLMADIIKIA_SpreadPosition))((::PBYTE)hIl2Cpp + ONLMADIIKIA_GDJPHNPGIHI_OFFSET))(this, a1);
		}

		::ONMFFIDIOLN* PKFEOMMAIEN(::ONLMADIIKIA_SpreadPosition a1)
		{
			return ((::ONMFFIDIOLN*(*)(::PVOID, ::ONLMADIIKIA_SpreadPosition))((::PBYTE)hIl2Cpp + ONLMADIIKIA_PKFEOMMAIEN_OFFSET))(this, a1);
		}

		::System::Int32 FKMGAOKEOLE(::ONLMADIIKIA_SpreadPosition a1)
		{
			return ((::System::Int32(*)(::PVOID, ::ONLMADIIKIA_SpreadPosition))((::PBYTE)hIl2Cpp + ONLMADIIKIA_FKMGAOKEOLE_OFFSET))(this, a1);
		}

		::RPG::GameCore::Booklet::PageSpreadConfig* LFKKICBOEJD(::ONLMADIIKIA_SpreadPosition a1)
		{
			return ((::RPG::GameCore::Booklet::PageSpreadConfig*(*)(::PVOID, ::ONLMADIIKIA_SpreadPosition))((::PBYTE)hIl2Cpp + ONLMADIIKIA_LFKKICBOEJD_OFFSET))(this, a1);
		}

		::System::Void KMOMCILKOIL(::ONLMADIIKIA_SpreadPosition a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONLMADIIKIA_SpreadPosition))((::PBYTE)hIl2Cpp + ONLMADIIKIA_KMOMCILKOIL_OFFSET))(this, a1);
		}

		::System::Void OCDNEJKGLPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLMADIIKIA_OCDNEJKGLPP_OFFSET))(this);
		}

	};
