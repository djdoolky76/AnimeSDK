#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOKNGDGCODE.h"
#include "unitysdk/RPG/Client/BitFlag_1.h"
#include "unitysdk/RPG/Client/TABehaviorTickMode.h"
#include "unitysdk/RPG/Client/TickListType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DFJOGNHINFE;
class ENLBPLPOGMF;
class GJBCDLKDNEH;
class LJFHKAJPFNE;
class MHEIAGODKGK;
class MHJJNIELNGJ;
class NHOFHEHJJJE;
namespace RPG::Client { class TABehaviorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHIOEBDCOAA_AANNPOFDKIB_OFFSET UNITYSDK_OFFSET(0xCF460A0)
#define CHIOEBDCOAA_AGKMMLFNCIH_OFFSET UNITYSDK_OFFSET(0xCF48390)
#define CHIOEBDCOAA_ANDJDPDFNFD_OFFSET UNITYSDK_OFFSET(0xCF48B10)
#define CHIOEBDCOAA_APEHADAIBOH_OFFSET UNITYSDK_OFFSET(0xCF45790)
#define CHIOEBDCOAA_BBGCHCMNOIO_OFFSET UNITYSDK_OFFSET(0xCF47940)
#define CHIOEBDCOAA_BLJJEKIMKOE_OFFSET UNITYSDK_OFFSET(0xCF47070)
#define CHIOEBDCOAA_BNNFBKAMMLI_OFFSET UNITYSDK_OFFSET(0xCF48040)
#define CHIOEBDCOAA_BOCFLPGJDPO_OFFSET UNITYSDK_OFFSET(0xCF45400)
#define CHIOEBDCOAA_CIIAINKILFH_OFFSET UNITYSDK_OFFSET(0xCF485A0)
#define CHIOEBDCOAA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF44680)
#define CHIOEBDCOAA_DFLJCJKEDKB_OFFSET UNITYSDK_OFFSET(0xCF45A70)
#define CHIOEBDCOAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF4A700)
#define CHIOEBDCOAA_EMHPOLPHGCC_OFFSET UNITYSDK_OFFSET(0xCF45190)
#define CHIOEBDCOAA_FAHEKOMMEIP_OFFSET UNITYSDK_OFFSET(0xCF48770)
#define CHIOEBDCOAA_FBECONGLPEN_OFFSET UNITYSDK_OFFSET(0xCF49C50)
#define CHIOEBDCOAA_FFNJCCPMEML_OFFSET UNITYSDK_OFFSET(0xCF47F70)
#define CHIOEBDCOAA_FLMAAGOLHPA_OFFSET UNITYSDK_OFFSET(0xCF45F90)
#define CHIOEBDCOAA_GAIOHHFEJAF_OFFSET UNITYSDK_OFFSET(0xCF49260)
#define CHIOEBDCOAA_GDABIKKEKKB_OFFSET UNITYSDK_OFFSET(0xCF49BA0)
#define CHIOEBDCOAA_GGJCNOKGNCO_OFFSET UNITYSDK_OFFSET(0xCF47530)
#define CHIOEBDCOAA_GJJFKPIBLNO_1_OFFSET UNITYSDK_OFFSET(0xCF45C30)
#define CHIOEBDCOAA_GJJFKPIBLNO_OFFSET UNITYSDK_OFFSET(0xCF45BB0)
#define CHIOEBDCOAA_GKHGCEHOFBH_OFFSET UNITYSDK_OFFSET(0xCF4ACA0)
#define CHIOEBDCOAA_GOOCCLENMBJ_OFFSET UNITYSDK_OFFSET(0xCF456D0)
#define CHIOEBDCOAA_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xCF46E90)
#define CHIOEBDCOAA_HEOEOACPPJJ_OFFSET UNITYSDK_OFFSET(0xCF459E0)
#define CHIOEBDCOAA_HLFDKEDCFIH_OFFSET UNITYSDK_OFFSET(0xCF494A0)
#define CHIOEBDCOAA_HMOIKKHAHLP_OFFSET UNITYSDK_OFFSET(0xCF472D0)
#define CHIOEBDCOAA_HOOFGEAODAO_OFFSET UNITYSDK_OFFSET(0xCF4B780)
#define CHIOEBDCOAA_IOIEFLPDNMM_OFFSET UNITYSDK_OFFSET(0xCF477E0)
#define CHIOEBDCOAA_JJHCALOBHNC_OFFSET UNITYSDK_OFFSET(0xCF44C00)
#define CHIOEBDCOAA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCF45DC0)
#define CHIOEBDCOAA_JOJNPDNGJOP_OFFSET UNITYSDK_OFFSET(0xCF4A0D0)
#define CHIOEBDCOAA_KGIEGJLIHGA_OFFSET UNITYSDK_OFFSET(0xCF49B10)
#define CHIOEBDCOAA_KHNLCLFDKNA_OFFSET UNITYSDK_OFFSET(0xCF493F0)
#define CHIOEBDCOAA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF44950)
#define CHIOEBDCOAA_LKKGBDGALHP_OFFSET UNITYSDK_OFFSET(0xCF4AFE0)
#define CHIOEBDCOAA_LLDEBPKMEFM_OFFSET UNITYSDK_OFFSET(0xCF49D60)
#define CHIOEBDCOAA_LNGIFGDKLGB_OFFSET UNITYSDK_OFFSET(0xCF484B0)
#define CHIOEBDCOAA_NIHKGBONJFI_OFFSET UNITYSDK_OFFSET(0xCF4A200)
#define CHIOEBDCOAA_NKODFNPKEIH_OFFSET UNITYSDK_OFFSET(0xCF4A4F0)
#define CHIOEBDCOAA_NPEBEDOOBMG_OFFSET UNITYSDK_OFFSET(0xCF49600)
#define CHIOEBDCOAA_OLJNDDLLKEE_OFFSET UNITYSDK_OFFSET(0xCF49FF0)
#define CHIOEBDCOAA_PDICAOOLLIE_OFFSET UNITYSDK_OFFSET(0xCF45950)
#define CHIOEBDCOAA_PGKDBJFDDPP_OFFSET UNITYSDK_OFFSET(0xCF49A00)

inline static constexpr unsigned int CHIOEBDCOAA_TypeDefinitionIndex = 70150;

	class CHIOEBDCOAA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* IGMFMNDHBHL; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MHJJNIELNGJ*>* DMCMKDIGKOK; // 0x18
		::System::Collections::Generic::List_1<::DFJOGNHINFE*>* FBJKEKGEFOI; // 0x20
		::Il2CppArray<::System::Int32>* CLDCACDJIDP; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType>>* ELLOCACFJML; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::DFJOGNHINFE*>* BOKIEABDFCL; // 0x38
		::MHEIAGODKGK* NEOGKKGHEAD; // 0x40
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* NALGMLIMPPF; // 0x48
		::Il2CppArray<::IOKNGDGCODE>* ALNNGJCBJGC; // 0x50
		::Il2CppArray<::System::Int32>* MHKIIMKJJLH; // 0x58
		::Il2CppArray<::System::Int32>* ACKDKJJNLFP; // 0x60
		::NHOFHEHJJJE* JGOJMLEJILE; // 0x68
		::Il2CppArray<::System::Int32>* FFDJBEPLLOC; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::LJFHKAJPFNE*>* NDAKONPAFBL; // 0x78
		::System::Boolean FKCDJLDKCDP; // 0x80
		::System::Boolean IHBIFICNAOI; // 0x81
		::System::Byte _padding0[0x2];
		::RPG::Client::TickListType PDEANGECIIH; // 0x84
		::System::Int32 ILCJJAIMLOD; // 0x88
		::System::Int32 KGPCKAAHJLD; // 0x8C
		::System::UInt64 OMBEONEKKFH; // 0x90
		// static const ::System::Object DJGDBJNCCAM; // 0x0
		// static const ::System::Object FGODJEPMHHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Boolean JJHCALOBHNC(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_JJHCALOBHNC_OFFSET))(this, a1);
		}

		::System::Void EMHPOLPHGCC(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_EMHPOLPHGCC_OFFSET))(this, a1);
		}

		::System::Void BOCFLPGJDPO(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_BOCFLPGJDPO_OFFSET))(this, a1);
		}

		::MHJJNIELNGJ* APEHADAIBOH(::System::Int32 a1)
		{
			return ((::MHJJNIELNGJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_APEHADAIBOH_OFFSET))(this, a1);
		}

		::LJFHKAJPFNE* PDICAOOLLIE(::System::Int32 a1)
		{
			return ((::LJFHKAJPFNE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_PDICAOOLLIE_OFFSET))(this, a1);
		}

		::System::Void HEOEOACPPJJ(::RPG::Client::TickListType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_HEOEOACPPJJ_OFFSET))(this, a1);
		}

		::System::Void DFLJCJKEDKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_DFLJCJKEDKB_OFFSET))(this);
		}

		::System::Boolean GJJFKPIBLNO(::RPG::Client::TickListType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_GJJFKPIBLNO_OFFSET))(this, a1);
		}

		::System::Boolean GJJFKPIBLNO_1(::RPG::Client::BitFlag_1<::RPG::Client::TickListType> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType>))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_GJJFKPIBLNO_1_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void BLJJEKIMKOE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_BLJJEKIMKOE_OFFSET))(this, a1);
		}

		::System::Void FLMAAGOLHPA(::RPG::Client::TickListType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TickListType, ::System::Single))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_FLMAAGOLHPA_OFFSET))(this, a1, a2);
		}

		::System::Void AANNPOFDKIB(::MHJJNIELNGJ* a1, ::System::Single a2, ::RPG::Client::TickListType a3)
		{
			return ((::System::Void(*)(::PVOID, ::MHJJNIELNGJ*, ::System::Single, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_AANNPOFDKIB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HMOIKKHAHLP(::RPG::Client::TABehaviorBase* a1, ::System::Single a2, ::RPG::Client::TickListType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TABehaviorBase*, ::System::Single, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_HMOIKKHAHLP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GGJCNOKGNCO(::System::Int32 a1, ::RPG::Client::TickListType a2, ::GJBCDLKDNEH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType, ::GJBCDLKDNEH*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_GGJCNOKGNCO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGKMMLFNCIH(::System::Int32 a1, ::RPG::Client::TickListType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_AGKMMLFNCIH_OFFSET))(this, a1, a2);
		}

		::DFJOGNHINFE* BBGCHCMNOIO(::System::Int32 a1, ::GJBCDLKDNEH* a2)
		{
			return ((::DFJOGNHINFE*(*)(::PVOID, ::System::Int32, ::GJBCDLKDNEH*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_BBGCHCMNOIO_OFFSET))(this, a1, a2);
		}

		::System::Int32 LNGIFGDKLGB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_LNGIFGDKLGB_OFFSET))(this);
		}

		::DFJOGNHINFE* ANDJDPDFNFD(::LJFHKAJPFNE* a1, ::GJBCDLKDNEH* a2, ::ENLBPLPOGMF* a3, ::System::Single a4)
		{
			return ((::DFJOGNHINFE*(*)(::PVOID, ::LJFHKAJPFNE*, ::GJBCDLKDNEH*, ::ENLBPLPOGMF*, ::System::Single))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_ANDJDPDFNFD_OFFSET))(this, a1, a2, a3, a4);
		}

		::DFJOGNHINFE* FAHEKOMMEIP(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::TABehaviorTickMode a3, ::System::String* a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::DFJOGNHINFE*(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::TABehaviorTickMode, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_FAHEKOMMEIP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean HLFDKEDCFIH(::DFJOGNHINFE* a1, ::System::String* a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFJOGNHINFE*, ::System::String*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_HLFDKEDCFIH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean KHNLCLFDKNA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_KHNLCLFDKNA_OFFSET))(this, a1, a2);
		}

		::System::Int32 GDABIKKEKKB(::DFJOGNHINFE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DFJOGNHINFE*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_GDABIKKEKKB_OFFSET))(this, a1);
		}

		::System::Void BNNFBKAMMLI(::DFJOGNHINFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_BNNFBKAMMLI_OFFSET))(this, a1);
		}

		::System::Void FBECONGLPEN(::DFJOGNHINFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_FBECONGLPEN_OFFSET))(this, a1);
		}

		::System::Void NPEBEDOOBMG(::DFJOGNHINFE* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_NPEBEDOOBMG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single CIIAINKILFH(::System::Single a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_CIIAINKILFH_OFFSET))(this, a1, a2);
		}

		::System::Single OLJNDDLLKEE(::UnityEngine::Bounds a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_OLJNDDLLKEE_OFFSET))(this, a1);
		}

		::DFJOGNHINFE* PGKDBJFDDPP(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::TABehaviorTickMode a3)
		{
			return ((::DFJOGNHINFE*(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::TABehaviorTickMode))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_PGKDBJFDDPP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LLDEBPKMEFM(::DFJOGNHINFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFJOGNHINFE*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_LLDEBPKMEFM_OFFSET))(this, a1);
		}

		::System::Void GAIOHHFEJAF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_GAIOHHFEJAF_OFFSET))(this, a1);
		}

		::System::Void GOOCCLENMBJ(::DFJOGNHINFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_GOOCCLENMBJ_OFFSET))(this, a1);
		}

		::System::Void NIHKGBONJFI(::DFJOGNHINFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_NIHKGBONJFI_OFFSET))(this, a1);
		}

		::System::Void NKODFNPKEIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_NKODFNPKEIH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_DISPOSE_OFFSET))(this);
		}

		::System::Void GKHGCEHOFBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_GKHGCEHOFBH_OFFSET))(this);
		}

		::System::Void LKKGBDGALHP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_LKKGBDGALHP_OFFSET))(this, a1, a2);
		}

		::System::Void HOOFGEAODAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_HOOFGEAODAO_OFFSET))(this);
		}

		::System::Boolean FFNJCCPMEML(::System::Int32 a1, ::RPG::Client::TickListType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_FFNJCCPMEML_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BitFlag_1<::RPG::Client::TickListType> KGIEGJLIHGA(::System::Int32 a1)
		{
			return ((::RPG::Client::BitFlag_1<::RPG::Client::TickListType>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_KGIEGJLIHGA_OFFSET))(this, a1);
		}

		::System::Void IOIEFLPDNMM(::System::Int32 a1, ::RPG::Client::TickListType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType, ::System::Boolean))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_IOIEFLPDNMM_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void JOJNPDNGJOP(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CHIOEBDCOAA_JOJNPDNGJOP_OFFSET))(a1, a2);
		}

	};
