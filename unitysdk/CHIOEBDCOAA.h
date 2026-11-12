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

#define CHIOEBDCOAA_AANNPOFDKIB_OFFSET UNITYSDK_OFFSET(0xD8B58E0)
#define CHIOEBDCOAA_AGKMMLFNCIH_OFFSET UNITYSDK_OFFSET(0xD8B7BD0)
#define CHIOEBDCOAA_ANDJDPDFNFD_OFFSET UNITYSDK_OFFSET(0xD8B8350)
#define CHIOEBDCOAA_APEHADAIBOH_OFFSET UNITYSDK_OFFSET(0xD8B4FD0)
#define CHIOEBDCOAA_BBGCHCMNOIO_OFFSET UNITYSDK_OFFSET(0xD8B7180)
#define CHIOEBDCOAA_BLJJEKIMKOE_OFFSET UNITYSDK_OFFSET(0xD8B68B0)
#define CHIOEBDCOAA_BNNFBKAMMLI_OFFSET UNITYSDK_OFFSET(0xD8B7880)
#define CHIOEBDCOAA_BOCFLPGJDPO_OFFSET UNITYSDK_OFFSET(0xD8B4C40)
#define CHIOEBDCOAA_CIIAINKILFH_OFFSET UNITYSDK_OFFSET(0xD8B7DE0)
#define CHIOEBDCOAA_CTOR_OFFSET UNITYSDK_OFFSET(0xD8B3ED0)
#define CHIOEBDCOAA_DFLJCJKEDKB_OFFSET UNITYSDK_OFFSET(0xD8B52B0)
#define CHIOEBDCOAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD8B9F40)
#define CHIOEBDCOAA_EMHPOLPHGCC_OFFSET UNITYSDK_OFFSET(0xD8B49D0)
#define CHIOEBDCOAA_FAHEKOMMEIP_OFFSET UNITYSDK_OFFSET(0xD8B7FB0)
#define CHIOEBDCOAA_FBECONGLPEN_OFFSET UNITYSDK_OFFSET(0xD8B9490)
#define CHIOEBDCOAA_FFNJCCPMEML_OFFSET UNITYSDK_OFFSET(0xD8B77B0)
#define CHIOEBDCOAA_FLMAAGOLHPA_OFFSET UNITYSDK_OFFSET(0xD8B57D0)
#define CHIOEBDCOAA_GAIOHHFEJAF_OFFSET UNITYSDK_OFFSET(0xD8B8AA0)
#define CHIOEBDCOAA_GDABIKKEKKB_OFFSET UNITYSDK_OFFSET(0xD8B93E0)
#define CHIOEBDCOAA_GGJCNOKGNCO_OFFSET UNITYSDK_OFFSET(0xD8B6D70)
#define CHIOEBDCOAA_GJJFKPIBLNO_1_OFFSET UNITYSDK_OFFSET(0xD8B5470)
#define CHIOEBDCOAA_GJJFKPIBLNO_OFFSET UNITYSDK_OFFSET(0xD8B53F0)
#define CHIOEBDCOAA_GKHGCEHOFBH_OFFSET UNITYSDK_OFFSET(0xD8BA4C0)
#define CHIOEBDCOAA_GOOCCLENMBJ_OFFSET UNITYSDK_OFFSET(0xD8B4F10)
#define CHIOEBDCOAA_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xD8B66D0)
#define CHIOEBDCOAA_HEOEOACPPJJ_OFFSET UNITYSDK_OFFSET(0xD8B5220)
#define CHIOEBDCOAA_HLFDKEDCFIH_OFFSET UNITYSDK_OFFSET(0xD8B8CE0)
#define CHIOEBDCOAA_HMOIKKHAHLP_OFFSET UNITYSDK_OFFSET(0xD8B6B10)
#define CHIOEBDCOAA_HOOFGEAODAO_OFFSET UNITYSDK_OFFSET(0xD8BAFA0)
#define CHIOEBDCOAA_IOIEFLPDNMM_OFFSET UNITYSDK_OFFSET(0xD8B7020)
#define CHIOEBDCOAA_JJHCALOBHNC_OFFSET UNITYSDK_OFFSET(0xD8B4450)
#define CHIOEBDCOAA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD8B5600)
#define CHIOEBDCOAA_JOJNPDNGJOP_OFFSET UNITYSDK_OFFSET(0xD8B9910)
#define CHIOEBDCOAA_KGIEGJLIHGA_OFFSET UNITYSDK_OFFSET(0xD8B9350)
#define CHIOEBDCOAA_KHNLCLFDKNA_OFFSET UNITYSDK_OFFSET(0xD8B8C30)
#define CHIOEBDCOAA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD8B41A0)
#define CHIOEBDCOAA_LKKGBDGALHP_OFFSET UNITYSDK_OFFSET(0xD8BA800)
#define CHIOEBDCOAA_LLDEBPKMEFM_OFFSET UNITYSDK_OFFSET(0xD8B95A0)
#define CHIOEBDCOAA_LNGIFGDKLGB_OFFSET UNITYSDK_OFFSET(0xD8B7CF0)
#define CHIOEBDCOAA_NIHKGBONJFI_OFFSET UNITYSDK_OFFSET(0xD8B9A40)
#define CHIOEBDCOAA_NKODFNPKEIH_OFFSET UNITYSDK_OFFSET(0xD8B9D30)
#define CHIOEBDCOAA_NPEBEDOOBMG_OFFSET UNITYSDK_OFFSET(0xD8B8E40)
#define CHIOEBDCOAA_OLJNDDLLKEE_OFFSET UNITYSDK_OFFSET(0xD8B9830)
#define CHIOEBDCOAA_PDICAOOLLIE_OFFSET UNITYSDK_OFFSET(0xD8B5190)
#define CHIOEBDCOAA_PGKDBJFDDPP_OFFSET UNITYSDK_OFFSET(0xD8B9240)

inline static constexpr unsigned int CHIOEBDCOAA_TypeDefinitionIndex = 72116;

	class CHIOEBDCOAA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* ACKDKJJNLFP; // 0x10
		::NHOFHEHJJJE* JGOJMLEJILE; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::DFJOGNHINFE*>* BOKIEABDFCL; // 0x20
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* NALGMLIMPPF; // 0x28
		::Il2CppArray<::IOKNGDGCODE>* ALNNGJCBJGC; // 0x30
		::System::Collections::Generic::List_1<::DFJOGNHINFE*>* FBJKEKGEFOI; // 0x38
		::Il2CppArray<::System::Int32>* MHKIIMKJJLH; // 0x40
		::Il2CppArray<::System::Int32>* IGMFMNDHBHL; // 0x48
		::Il2CppArray<::System::Int32>* FFDJBEPLLOC; // 0x50
		::Il2CppArray<::System::Int32>* CLDCACDJIDP; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType>>* ELLOCACFJML; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MHJJNIELNGJ*>* DMCMKDIGKOK; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::LJFHKAJPFNE*>* NDAKONPAFBL; // 0x70
		::MHEIAGODKGK* NEOGKKGHEAD; // 0x78
		::RPG::Client::TickListType PDEANGECIIH; // 0x80
		::System::Int32 KGPCKAAHJLD; // 0x84
		::System::UInt64 OMBEONEKKFH; // 0x88
		::System::Int32 ILCJJAIMLOD; // 0x90
		::System::Boolean FKCDJLDKCDP; // 0x94
		::System::Boolean IHBIFICNAOI; // 0x95
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
