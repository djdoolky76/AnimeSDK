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

#define NNEIOFDLLMI_AFLNAFCGLFB_OFFSET UNITYSDK_OFFSET(0x179E0D30)
#define NNEIOFDLLMI_ANOFHLHACLL_OFFSET UNITYSDK_OFFSET(0x179DE220)
#define NNEIOFDLLMI_AOOIMABCKBJ_OFFSET UNITYSDK_OFFSET(0x179E0EF0)
#define NNEIOFDLLMI_BJEBHCNJKME_OFFSET UNITYSDK_OFFSET(0x179E0910)
#define NNEIOFDLLMI_BJGLKNIGKGB_OFFSET UNITYSDK_OFFSET(0x179E09E0)
#define NNEIOFDLLMI_BMMJOFPDKJC_OFFSET UNITYSDK_OFFSET(0x179E0110)
#define NNEIOFDLLMI_CBNAMKFEFCL_OFFSET UNITYSDK_OFFSET(0x179E0E60)
#define NNEIOFDLLMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x179E0F40)
#define NNEIOFDLLMI_CLMNBCIDFPG_OFFSET UNITYSDK_OFFSET(0x179DD5B0)
#define NNEIOFDLLMI_COONNJCNFDF_OFFSET UNITYSDK_OFFSET(0x179DDA40)
#define NNEIOFDLLMI_CTOR_OFFSET UNITYSDK_OFFSET(0x179DC840)
#define NNEIOFDLLMI_DCHJHPGHHEI_OFFSET UNITYSDK_OFFSET(0x179DDE00)
#define NNEIOFDLLMI_DIGPEKFBLEI_OFFSET UNITYSDK_OFFSET(0x179E0650)
#define NNEIOFDLLMI_DINMIELECGM_OFFSET UNITYSDK_OFFSET(0x179E05A0)
#define NNEIOFDLLMI_EADIOCFOEAJ_OFFSET UNITYSDK_OFFSET(0x179DE0A0)
#define NNEIOFDLLMI_EBMJPICKDKE_OFFSET UNITYSDK_OFFSET(0x179E0790)
#define NNEIOFDLLMI_EBOMHIEEPMO_OFFSET UNITYSDK_OFFSET(0x179DDAF0)
#define NNEIOFDLLMI_EDPNJJJEPBK_OFFSET UNITYSDK_OFFSET(0x179E0550)
#define NNEIOFDLLMI_EHPFFNKLADF_OFFSET UNITYSDK_OFFSET(0x179E0E30)
#define NNEIOFDLLMI_FICNDMGDDAN_OFFSET UNITYSDK_OFFSET(0x179E0EE0)
#define NNEIOFDLLMI_FPGFEBOOBOE_OFFSET UNITYSDK_OFFSET(0x179E04C0)
#define NNEIOFDLLMI_GAHCGNEKOAN_OFFSET UNITYSDK_OFFSET(0x179E0090)
#define NNEIOFDLLMI_GBDDNDLLFLI_OFFSET UNITYSDK_OFFSET(0x179E06B0)
#define NNEIOFDLLMI_GET_CURRENTGAMEWEEKINDEX_OFFSET UNITYSDK_OFFSET(0x179E0F20)
#define NNEIOFDLLMI_GET_GAMEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0x179E0D10)
#define NNEIOFDLLMI_GET_ITEMOFFER_OFFSET UNITYSDK_OFFSET(0x179E0E10)
#define NNEIOFDLLMI_GMMGOEAAPLP_OFFSET UNITYSDK_OFFSET(0x179DD9A0)
#define NNEIOFDLLMI_HDBDFAMILPG_OFFSET UNITYSDK_OFFSET(0x179DD730)
#define NNEIOFDLLMI_IBAEIEIGEPP_OFFSET UNITYSDK_OFFSET(0x179DE010)
#define NNEIOFDLLMI_IELDCABKGPI_OFFSET UNITYSDK_OFFSET(0x179E0E50)
#define NNEIOFDLLMI_IFNLONJDEMN_OFFSET UNITYSDK_OFFSET(0x179E0360)
#define NNEIOFDLLMI_IHNDJIANELM_OFFSET UNITYSDK_OFFSET(0x179E0400)
#define NNEIOFDLLMI_ILKMDMAHPIL_OFFSET UNITYSDK_OFFSET(0x179DDD80)
#define NNEIOFDLLMI_IMAENPMOLOA_OFFSET UNITYSDK_OFFSET(0x179E0E00)
#define NNEIOFDLLMI_JCAEIDHIHNK_OFFSET UNITYSDK_OFFSET(0x179DD530)
#define NNEIOFDLLMI_JKAICMGMLAF_OFFSET UNITYSDK_OFFSET(0x179DD080)
#define NNEIOFDLLMI_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x179DD780)
#define NNEIOFDLLMI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x179DD940)
#define NNEIOFDLLMI_KCEMNDABJNA_OFFSET UNITYSDK_OFFSET(0x179DFFB0)
#define NNEIOFDLLMI_KDPCCJHOJJH_OFFSET UNITYSDK_OFFSET(0x179DD240)
#define NNEIOFDLLMI_KJBDJPEEMKB_OFFSET UNITYSDK_OFFSET(0x179E0E40)
#define NNEIOFDLLMI_KOFOLGOLMIA_OFFSET UNITYSDK_OFFSET(0x179DD450)
#define NNEIOFDLLMI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x179DC9B0)
#define NNEIOFDLLMI_LPGNAACIKMG_OFFSET UNITYSDK_OFFSET(0x179DFDB0)
#define NNEIOFDLLMI_MIKBHBBKOJH_OFFSET UNITYSDK_OFFSET(0x179DFC30)
#define NNEIOFDLLMI_MIMJNEBIEEG_OFFSET UNITYSDK_OFFSET(0x179E0050)
#define NNEIOFDLLMI_MKAJFGAAGDL_OFFSET UNITYSDK_OFFSET(0x179DFCF0)
#define NNEIOFDLLMI_MLKONDEFDED_OFFSET UNITYSDK_OFFSET(0x179E05E0)
#define NNEIOFDLLMI_NBHFOCLCFAF_OFFSET UNITYSDK_OFFSET(0x179E0220)
#define NNEIOFDLLMI_NIIHCDGEKLI_OFFSET UNITYSDK_OFFSET(0x179E0800)
#define NNEIOFDLLMI_NLDNFJGKIPM_OFFSET UNITYSDK_OFFSET(0x179DD2C0)
#define NNEIOFDLLMI_NMBBHBBILAE_OFFSET UNITYSDK_OFFSET(0x179DDF60)
#define NNEIOFDLLMI_NNGMFJOLLEI_OFFSET UNITYSDK_OFFSET(0x179DE270)
#define NNEIOFDLLMI_NPJOMOIHNPM_OFFSET UNITYSDK_OFFSET(0x179E0DA0)
#define NNEIOFDLLMI_PBGOCNHGLEE_OFFSET UNITYSDK_OFFSET(0x179E0720)
#define NNEIOFDLLMI_PGKGNPGOPMJ_OFFSET UNITYSDK_OFFSET(0x179E0980)
#define NNEIOFDLLMI_SET_CURRENTGAMEWEEKINDEX_OFFSET UNITYSDK_OFFSET(0x179E0F30)
#define NNEIOFDLLMI_SET_GAMEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0x179E0D20)
#define NNEIOFDLLMI_SET_ITEMOFFER_OFFSET UNITYSDK_OFFSET(0x179E0E20)

inline static constexpr unsigned int NNEIOFDLLMI_TypeDefinitionIndex = 80473;

	class NNEIOFDLLMI : public ::System::Object
	{
	public:
		::MCOOEKHDKAA* PCFHKJIDLGL; // 0x10
		::RPG::GameCore::ChenLingFesLevelConfigRow* FEGMIJECNMC; // 0x18
		::System::String* NLMEEEKBPKO; // 0x20
		::System::String* FGGCAOAPGPA; // 0x28
		::RPG::Client::LittleGame::ChenLingFes::GameItemOffer* _ItemOffer_k__BackingField; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* ANAKBDJCCCH; // 0x38
		::RPG::Client::ChenLingFesGameInstance* _GameInstanceRef_k__BackingField; // 0x40
		::OFGLEOIIJBD* ILBPCGEPAJA; // 0x48
		::System::Collections::Generic::List_1<::FPPNANNOMPF*>* IBCDNBFHHHH; // 0x50
		::System::Int32 CJDFNFFEHHF; // 0x58
		::System::Int32 LFPAMPLLNMJ; // 0x5C
		::System::UInt32 BBHIKMFENBA; // 0x60
		::System::Single JIPDEOEIBHO; // 0x64
		::System::Int32 _CurrentGameWeekIndex_k__BackingField; // 0x68
		static ::System::Int32* StaticGet_MHEACFNCKPP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNEIOFDLLMI")->GetStaticField(0x12A50);
		}

		static ::System::Int32* StaticGet_CFPDLOEKIJB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNEIOFDLLMI")->GetStaticField(0x12A54);
		}

		static ::System::Int32* StaticGet_MMCBJAIFAKA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNEIOFDLLMI")->GetStaticField(0x12A58);
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
