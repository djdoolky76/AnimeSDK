#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/GameDayState.h"
#include "unitysdk/System/Object.h"
class FPPNANNOMPF;
class MCOOEKHDKAA;
class OFGLEOIIJBD;
namespace RPG::Client { class ChenLingFesGameInstance; }
namespace RPG::Client::LittleGame::ChenLingFes { class GameItemOffer; }
namespace RPG::GameCore { class ChenLingFesLevelConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define NNEIOFDLLMI_AFLNAFCGLFB_OFFSET UNITYSDK_OFFSET(0xBCA5DF0)
#define NNEIOFDLLMI_ANOFHLHACLL_OFFSET UNITYSDK_OFFSET(0xBCA32F0)
#define NNEIOFDLLMI_AOOIMABCKBJ_OFFSET UNITYSDK_OFFSET(0xBCA5FB0)
#define NNEIOFDLLMI_BJEBHCNJKME_OFFSET UNITYSDK_OFFSET(0xBCA59D0)
#define NNEIOFDLLMI_BJGLKNIGKGB_OFFSET UNITYSDK_OFFSET(0xBCA5AA0)
#define NNEIOFDLLMI_BMMJOFPDKJC_OFFSET UNITYSDK_OFFSET(0xBCA51D0)
#define NNEIOFDLLMI_CBNAMKFEFCL_OFFSET UNITYSDK_OFFSET(0xBCA5F20)
#define NNEIOFDLLMI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCA6000)
#define NNEIOFDLLMI_CLMNBCIDFPG_OFFSET UNITYSDK_OFFSET(0xBCA2690)
#define NNEIOFDLLMI_COONNJCNFDF_OFFSET UNITYSDK_OFFSET(0xBCA2B10)
#define NNEIOFDLLMI_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA1930)
#define NNEIOFDLLMI_DCHJHPGHHEI_OFFSET UNITYSDK_OFFSET(0xBCA2ED0)
#define NNEIOFDLLMI_DIGPEKFBLEI_OFFSET UNITYSDK_OFFSET(0xBCA5710)
#define NNEIOFDLLMI_DINMIELECGM_OFFSET UNITYSDK_OFFSET(0xBCA5660)
#define NNEIOFDLLMI_EADIOCFOEAJ_OFFSET UNITYSDK_OFFSET(0xBCA3170)
#define NNEIOFDLLMI_EBMJPICKDKE_OFFSET UNITYSDK_OFFSET(0xBCA5850)
#define NNEIOFDLLMI_EBOMHIEEPMO_OFFSET UNITYSDK_OFFSET(0xBCA2BC0)
#define NNEIOFDLLMI_EDPNJJJEPBK_OFFSET UNITYSDK_OFFSET(0xBCA5610)
#define NNEIOFDLLMI_EHPFFNKLADF_OFFSET UNITYSDK_OFFSET(0xBCA5EF0)
#define NNEIOFDLLMI_FICNDMGDDAN_OFFSET UNITYSDK_OFFSET(0xBCA5FA0)
#define NNEIOFDLLMI_FPGFEBOOBOE_OFFSET UNITYSDK_OFFSET(0xBCA5580)
#define NNEIOFDLLMI_GAHCGNEKOAN_OFFSET UNITYSDK_OFFSET(0xBCA5150)
#define NNEIOFDLLMI_GBDDNDLLFLI_OFFSET UNITYSDK_OFFSET(0xBCA5770)
#define NNEIOFDLLMI_GET_CURRENTGAMEWEEKINDEX_OFFSET UNITYSDK_OFFSET(0xBCA5FE0)
#define NNEIOFDLLMI_GET_GAMEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xBCA5DD0)
#define NNEIOFDLLMI_GET_ITEMOFFER_OFFSET UNITYSDK_OFFSET(0xBCA5ED0)
#define NNEIOFDLLMI_GMMGOEAAPLP_OFFSET UNITYSDK_OFFSET(0xBCA2A70)
#define NNEIOFDLLMI_HDBDFAMILPG_OFFSET UNITYSDK_OFFSET(0xBCA2810)
#define NNEIOFDLLMI_IBAEIEIGEPP_OFFSET UNITYSDK_OFFSET(0xBCA30E0)
#define NNEIOFDLLMI_IELDCABKGPI_OFFSET UNITYSDK_OFFSET(0xBCA5F10)
#define NNEIOFDLLMI_IFNLONJDEMN_OFFSET UNITYSDK_OFFSET(0xBCA5420)
#define NNEIOFDLLMI_IHNDJIANELM_OFFSET UNITYSDK_OFFSET(0xBCA54C0)
#define NNEIOFDLLMI_ILKMDMAHPIL_OFFSET UNITYSDK_OFFSET(0xBCA2E50)
#define NNEIOFDLLMI_IMAENPMOLOA_OFFSET UNITYSDK_OFFSET(0xBCA5EC0)
#define NNEIOFDLLMI_JCAEIDHIHNK_OFFSET UNITYSDK_OFFSET(0xBCA2610)
#define NNEIOFDLLMI_JKAICMGMLAF_OFFSET UNITYSDK_OFFSET(0xBCA2160)
#define NNEIOFDLLMI_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xBCA2860)
#define NNEIOFDLLMI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBCA2A10)
#define NNEIOFDLLMI_KCEMNDABJNA_OFFSET UNITYSDK_OFFSET(0xBCA5070)
#define NNEIOFDLLMI_KDPCCJHOJJH_OFFSET UNITYSDK_OFFSET(0xBCA2320)
#define NNEIOFDLLMI_KJBDJPEEMKB_OFFSET UNITYSDK_OFFSET(0xBCA5F00)
#define NNEIOFDLLMI_KOFOLGOLMIA_OFFSET UNITYSDK_OFFSET(0xBCA2530)
#define NNEIOFDLLMI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBCA1AA0)
#define NNEIOFDLLMI_LPGNAACIKMG_OFFSET UNITYSDK_OFFSET(0xBCA4E70)
#define NNEIOFDLLMI_MIKBHBBKOJH_OFFSET UNITYSDK_OFFSET(0xBCA4CF0)
#define NNEIOFDLLMI_MIMJNEBIEEG_OFFSET UNITYSDK_OFFSET(0xBCA5110)
#define NNEIOFDLLMI_MKAJFGAAGDL_OFFSET UNITYSDK_OFFSET(0xBCA4DB0)
#define NNEIOFDLLMI_MLKONDEFDED_OFFSET UNITYSDK_OFFSET(0xBCA56A0)
#define NNEIOFDLLMI_NBHFOCLCFAF_OFFSET UNITYSDK_OFFSET(0xBCA52E0)
#define NNEIOFDLLMI_NIIHCDGEKLI_OFFSET UNITYSDK_OFFSET(0xBCA58C0)
#define NNEIOFDLLMI_NLDNFJGKIPM_OFFSET UNITYSDK_OFFSET(0xBCA23A0)
#define NNEIOFDLLMI_NMBBHBBILAE_OFFSET UNITYSDK_OFFSET(0xBCA3030)
#define NNEIOFDLLMI_NNGMFJOLLEI_OFFSET UNITYSDK_OFFSET(0xBCA3340)
#define NNEIOFDLLMI_NPJOMOIHNPM_OFFSET UNITYSDK_OFFSET(0xBCA5E60)
#define NNEIOFDLLMI_PBGOCNHGLEE_OFFSET UNITYSDK_OFFSET(0xBCA57E0)
#define NNEIOFDLLMI_PGKGNPGOPMJ_OFFSET UNITYSDK_OFFSET(0xBCA5A40)
#define NNEIOFDLLMI_SET_CURRENTGAMEWEEKINDEX_OFFSET UNITYSDK_OFFSET(0xBCA5FF0)
#define NNEIOFDLLMI_SET_GAMEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xBCA5DE0)
#define NNEIOFDLLMI_SET_ITEMOFFER_OFFSET UNITYSDK_OFFSET(0xBCA5EE0)

inline static constexpr unsigned int NNEIOFDLLMI_TypeDefinitionIndex = 77739;

	class NNEIOFDLLMI : public ::System::Object
	{
	public:
		::System::String* FGGCAOAPGPA; // 0x10
		::System::String* NLMEEEKBPKO; // 0x18
		::RPG::Client::LittleGame::ChenLingFes::GameItemOffer* _ItemOffer_k__BackingField; // 0x20
		::RPG::Client::ChenLingFesGameInstance* _GameInstanceRef_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::FPPNANNOMPF*>* IBCDNBFHHHH; // 0x30
		::MCOOEKHDKAA* PCFHKJIDLGL; // 0x38
		::System::Collections::Generic::HashSet_1<::System::Int32>* ANAKBDJCCCH; // 0x40
		::RPG::GameCore::ChenLingFesLevelConfigRow* FEGMIJECNMC; // 0x48
		::OFGLEOIIJBD* ILBPCGEPAJA; // 0x50
		::System::Int32 LFPAMPLLNMJ; // 0x58
		::System::Single JIPDEOEIBHO; // 0x5C
		::System::Int32 _CurrentGameWeekIndex_k__BackingField; // 0x60
		::System::Int32 CJDFNFFEHHF; // 0x64
		::System::UInt32 BBHIKMFENBA; // 0x68
		static ::System::Int32* StaticGet_MHEACFNCKPP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNEIOFDLLMI")->GetStaticField(0x1B90);
		}

		static ::System::Int32* StaticGet_CFPDLOEKIJB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNEIOFDLLMI")->GetStaticField(0x1B94);
		}

		static ::System::Int32* StaticGet_MMCBJAIFAKA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNEIOFDLLMI")->GetStaticField(0x1B98);
		}

		::System::Void _ctor(::RPG::Client::ChenLingFesGameInstance* a1, ::OFGLEOIIJBD* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFesGameInstance*, ::OFGLEOIIJBD*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNEIOFDLLMI_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GMMGOEAAPLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_GMMGOEAAPLP_OFFSET))(this);
		}

		::System::Void COONNJCNFDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_COONNJCNFDF_OFFSET))(this);
		}

		::System::Void KOFOLGOLMIA(::FPPNANNOMPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPPNANNOMPF*))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_KOFOLGOLMIA_OFFSET))(this, a1);
		}

		::System::Void ILKMDMAHPIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_ILKMDMAHPIL_OFFSET))(this, a1);
		}

		::System::Void CLMNBCIDFPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_CLMNBCIDFPG_OFFSET))(this);
		}

		::System::Void DCHJHPGHHEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_DCHJHPGHHEI_OFFSET))(this);
		}

		::System::Void IBAEIEIGEPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_IBAEIEIGEPP_OFFSET))(this);
		}

		::System::Void EADIOCFOEAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_EADIOCFOEAJ_OFFSET))(this);
		}

		::System::Boolean EBOMHIEEPMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_EBOMHIEEPMO_OFFSET))(this);
		}

		::System::Boolean MKAJFGAAGDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_MKAJFGAAGDL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* JKAICMGMLAF(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_JKAICMGMLAF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* NLDNFJGKIPM(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_NLDNFJGKIPM_OFFSET))(this, a1);
		}

		::System::Int32 KDPCCJHOJJH(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_KDPCCJHOJJH_OFFSET))(this, a1);
		}

		::System::UInt32 LPGNAACIKMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_LPGNAACIKMG_OFFSET))(this);
		}

		::System::Void MIMJNEBIEEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_MIMJNEBIEEG_OFFSET))(this);
		}

		::System::UInt32 GAHCGNEKOAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_GAHCGNEKOAN_OFFSET))(this);
		}

		::System::Void MIKBHBBKOJH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_MIKBHBBKOJH_OFFSET))(this, a1);
		}

		::System::Void BMMJOFPDKJC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_BMMJOFPDKJC_OFFSET))(this, a1);
		}

		::System::Void NNGMFJOLLEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_NNGMFJOLLEI_OFFSET))(this);
		}

		::System::Void NBHFOCLCFAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_NBHFOCLCFAF_OFFSET))(this);
		}

		::System::Void IHNDJIANELM(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_IHNDJIANELM_OFFSET))(this, a1, a2);
		}

		::System::Void FPGFEBOOBOE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_FPGFEBOOBOE_OFFSET))(this, a1);
		}

		::System::Void EDPNJJJEPBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_EDPNJJJEPBK_OFFSET))(this);
		}

		::MCOOEKHDKAA* DINMIELECGM()
		{
			return ((::MCOOEKHDKAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_DINMIELECGM_OFFSET))(this);
		}

		::System::Void NMBBHBBILAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_NMBBHBBILAE_OFFSET))(this);
		}

		::System::Void ANOFHLHACLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_ANOFHLHACLL_OFFSET))(this);
		}

		::System::Void MLKONDEFDED(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_MLKONDEFDED_OFFSET))(this, a1, a2);
		}

		::System::Void DIGPEKFBLEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_DIGPEKFBLEI_OFFSET))(this);
		}

		::System::Void GBDDNDLLFLI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_GBDDNDLLFLI_OFFSET))(this, a1, a2);
		}

		::System::Void PBGOCNHGLEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_PBGOCNHGLEE_OFFSET))(this);
		}

		::System::Void EBMJPICKDKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_EBMJPICKDKE_OFFSET))(this);
		}

		::System::Void NIIHCDGEKLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_NIIHCDGEKLI_OFFSET))(this);
		}

		::System::UInt32 BJEBHCNJKME()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_BJEBHCNJKME_OFFSET))(this);
		}

		::System::Void PGKGNPGOPMJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_PGKGNPGOPMJ_OFFSET))(this, a1);
		}

		::System::Void HDBDFAMILPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_HDBDFAMILPG_OFFSET))(this);
		}

		::System::Void BJGLKNIGKGB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_BJGLKNIGKGB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChenLingFesGameInstance* get_GameInstanceRef()
		{
			return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_GET_GAMEINSTANCEREF_OFFSET))(this);
		}

		::System::Void set_GameInstanceRef(::RPG::Client::ChenLingFesGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFesGameInstance*))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_SET_GAMEINSTANCEREF_OFFSET))(this, a1);
		}

		::FPPNANNOMPF* JCAEIDHIHNK()
		{
			return ((::FPPNANNOMPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_JCAEIDHIHNK_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChenLingFes::GameDayState AFLNAFCGLFB()
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::GameDayState(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_AFLNAFCGLFB_OFFSET))(this);
		}

		::System::Boolean NPJOMOIHNPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_NPJOMOIHNPM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FPPNANNOMPF*>* IMAENPMOLOA()
		{
			return ((::System::Collections::Generic::List_1<::FPPNANNOMPF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_IMAENPMOLOA_OFFSET))(this);
		}

		::System::Int32 KCEMNDABJNA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_KCEMNDABJNA_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChenLingFes::GameItemOffer* get_ItemOffer()
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::GameItemOffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_GET_ITEMOFFER_OFFSET))(this);
		}

		::System::Void set_ItemOffer(::RPG::Client::LittleGame::ChenLingFes::GameItemOffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::GameItemOffer*))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_SET_ITEMOFFER_OFFSET))(this, a1);
		}

		::System::Int32 EHPFFNKLADF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_EHPFFNKLADF_OFFSET))(this);
		}

		::System::Single KJBDJPEEMKB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_KJBDJPEEMKB_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* IELDCABKGPI()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_IELDCABKGPI_OFFSET))(this);
		}

		::System::Int32 CBNAMKFEFCL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_CBNAMKFEFCL_OFFSET))(this);
		}

		::System::Int32 IFNLONJDEMN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_IFNLONJDEMN_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingFesLevelConfigRow* FICNDMGDDAN()
		{
			return ((::RPG::GameCore::ChenLingFesLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_FICNDMGDDAN_OFFSET))(this);
		}

		::System::Boolean AOOIMABCKBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_AOOIMABCKBJ_OFFSET))(this);
		}

		::System::Int32 get_CurrentGameWeekIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_GET_CURRENTGAMEWEEKINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentGameWeekIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNEIOFDLLMI_SET_CURRENTGAMEWEEKINDEX_OFFSET))(this, a1);
		}

	};
