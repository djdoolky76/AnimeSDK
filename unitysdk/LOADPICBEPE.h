#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
#include "unitysdk/LOADPICBEPE_EPhase.h"
#include "unitysdk/System/ValueTuple_2.h"
class CFALFIPEHJH;
class DMHFEDAIKME;
class DMPMGGKKIBH;
class KGKEHEBHAJN;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class ParkourGameFlowContext; }
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::Client::ParkourGame { class ParkourGameLevelConfigAsset; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define LOADPICBEPE_ADAFGCAKADI_OFFSET UNITYSDK_OFFSET(0xC04D2A0)
#define LOADPICBEPE_AFIDCDNKFLI_OFFSET UNITYSDK_OFFSET(0xC050FA0)
#define LOADPICBEPE_ANKKFGAFOBE_OFFSET UNITYSDK_OFFSET(0xC04F290)
#define LOADPICBEPE_BEAPHCCJJLL_OFFSET UNITYSDK_OFFSET(0xC04CE70)
#define LOADPICBEPE_CCTOR_OFFSET UNITYSDK_OFFSET(0xC051110)
#define LOADPICBEPE_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xC04F5A0)
#define LOADPICBEPE_CHOMCFJGBMK_OFFSET UNITYSDK_OFFSET(0xC04E390)
#define LOADPICBEPE_CPMKKHIHOBH_OFFSET UNITYSDK_OFFSET(0xC051060)
#define LOADPICBEPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC051100)
#define LOADPICBEPE_DALKINCKLJJ_OFFSET UNITYSDK_OFFSET(0xC04D460)
#define LOADPICBEPE_DHIPAPPJBML_OFFSET UNITYSDK_OFFSET(0xC04FE80)
#define LOADPICBEPE_DJGPAAGFOBO_OFFSET UNITYSDK_OFFSET(0xC0510A0)
#define LOADPICBEPE_DOBPBKPKLCJ_OFFSET UNITYSDK_OFFSET(0xC04EA90)
#define LOADPICBEPE_DPPIBDNLAIJ_OFFSET UNITYSDK_OFFSET(0xC04CE20)
#define LOADPICBEPE_EKHFLCMKOJN_OFFSET UNITYSDK_OFFSET(0xC04D390)
#define LOADPICBEPE_EMBDHBMPLJB_OFFSET UNITYSDK_OFFSET(0xC0510C0)
#define LOADPICBEPE_EPODAGHCEKF_OFFSET UNITYSDK_OFFSET(0xC04FE00)
#define LOADPICBEPE_FBJAEJINMKG_OFFSET UNITYSDK_OFFSET(0xC04CC20)
#define LOADPICBEPE_GET_DEFAULTLEVELID_OFFSET UNITYSDK_OFFSET(0xC04D580)
#define LOADPICBEPE_GET_GAMEFLOWCONTEXT_OFFSET UNITYSDK_OFFSET(0xC0510D0)
#define LOADPICBEPE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xC04F150)
#define LOADPICBEPE_GOFECMIMNCO_OFFSET UNITYSDK_OFFSET(0xC050DB0)
#define LOADPICBEPE_HFPJJHABLHE_OFFSET UNITYSDK_OFFSET(0xC0510B0)
#define LOADPICBEPE_HFPLLJPAJDP_OFFSET UNITYSDK_OFFSET(0xC04FF90)
#define LOADPICBEPE_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xC04F490)
#define LOADPICBEPE_IEHJHFKBIAF_OFFSET UNITYSDK_OFFSET(0xC0500E0)
#define LOADPICBEPE_IELIEDFEDOE_OFFSET UNITYSDK_OFFSET(0xC04DF00)
#define LOADPICBEPE_IONPPODBNHE_OFFSET UNITYSDK_OFFSET(0xC04E160)
#define LOADPICBEPE_JIOKICJONNJ_OFFSET UNITYSDK_OFFSET(0xC04E430)
#define LOADPICBEPE_JOEJHNKLBID_OFFSET UNITYSDK_OFFSET(0xC051020)
#define LOADPICBEPE_KINGGMNKALJ_OFFSET UNITYSDK_OFFSET(0xC04E290)
#define LOADPICBEPE_KKNMCOAMJIF_OFFSET UNITYSDK_OFFSET(0xC04F100)
#define LOADPICBEPE_LDLOGJAJIJP_OFFSET UNITYSDK_OFFSET(0xC050CC0)
#define LOADPICBEPE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC04D5E0)
#define LOADPICBEPE_NPFKIILHBAP_OFFSET UNITYSDK_OFFSET(0xC050FE0)
#define LOADPICBEPE_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xC04F390)
#define LOADPICBEPE_OLNHGMCCJOI_OFFSET UNITYSDK_OFFSET(0xC050120)
#define LOADPICBEPE_OLNNNCFOEMP_OFFSET UNITYSDK_OFFSET(0xC04E0A0)
#define LOADPICBEPE_ONINIT_OFFSET UNITYSDK_OFFSET(0xC04E4D0)
#define LOADPICBEPE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xC04EE90)
#define LOADPICBEPE_PBCBJPAGKBF_OFFSET UNITYSDK_OFFSET(0xC04FFD0)
#define LOADPICBEPE_PEEFAFCKMHA_OFFSET UNITYSDK_OFFSET(0xC04E2F0)
#define LOADPICBEPE_PLOGFHDCFJB_OFFSET UNITYSDK_OFFSET(0xC0510F0)
#define LOADPICBEPE_SET_DEFAULTLEVELID_OFFSET UNITYSDK_OFFSET(0xC04D5B0)
#define LOADPICBEPE_SET_GAMEFLOWCONTEXT_OFFSET UNITYSDK_OFFSET(0xC0510E0)
#define LOADPICBEPE_TICK_OFFSET UNITYSDK_OFFSET(0xC04F160)
#define LOADPICBEPE___ONREADY_B__33_0_OFFSET UNITYSDK_OFFSET(0xC051120)

inline static constexpr unsigned int LOADPICBEPE_TypeDefinitionIndex = 76354;

	class LOADPICBEPE : public ::HBCMHADMLOP
	{
	public:
		::UnityEngine::GameObject* LABKIFLNKPD; // 0x20
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0x28
		::RPG::Client::ParkourGameFlowContext* _GameFlowContext_k__BackingField; // 0x30
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x38
		::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* IGHAHBNLIJA; // 0x40
		::Il2CppArray<::CFALFIPEHJH*>* NMMHJPOOPEB; // 0x48
		::LOADPICBEPE_EPhase NOHNKAIALPJ; // 0x50
		::System::UInt32 GNPMFEEIKDK; // 0x54
		::System::UInt32 IDIGJDGHLKN; // 0x58
		::System::Boolean GOFKAELMOPB; // 0x5C
		::System::Boolean NOEPIMIGEAL; // 0x5D
		::System::Boolean INPBNADMKFM; // 0x5E
		::System::Boolean AKCEOJCECKP; // 0x5F
		::System::Boolean HECHBPKBLNI; // 0x60
		static ::System::UInt32* StaticGet__DefaultLevelID_k__BackingField()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "LOADPICBEPE")->GetStaticField(0x156F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOADPICBEPE_CCTOR_OFFSET))();
		}

		static ::System::String* FBJAEJINMKG()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + LOADPICBEPE_FBJAEJINMKG_OFFSET))();
		}

		static ::System::Void BEAPHCCJJLL(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + LOADPICBEPE_BEAPHCCJJLL_OFFSET))(a1);
		}

		static ::System::Void ADAFGCAKADI(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + LOADPICBEPE_ADAFGCAKADI_OFFSET))(a1);
		}

		static ::System::Boolean EKHFLCMKOJN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LOADPICBEPE_EKHFLCMKOJN_OFFSET))(a1);
		}

		static ::System::Void DALKINCKLJJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + LOADPICBEPE_DALKINCKLJJ_OFFSET))(a1);
		}

		static ::System::UInt32 get_DefaultLevelID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + LOADPICBEPE_GET_DEFAULTLEVELID_OFFSET))();
		}

		static ::System::Void set_DefaultLevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LOADPICBEPE_SET_DEFAULTLEVELID_OFFSET))(a1);
		}

		::System::Void NPAFMEBNFOB(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset*))((::PBYTE)hIl2Cpp + LOADPICBEPE_NPAFMEBNFOB_OFFSET))(this, a1, a2, a3);
		}

		::KGKEHEBHAJN* DPPIBDNLAIJ()
		{
			return ((::KGKEHEBHAJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_DPPIBDNLAIJ_OFFSET))(this);
		}

		::DMHFEDAIKME* OLNNNCFOEMP(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::DMHFEDAIKME*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + LOADPICBEPE_OLNNNCFOEMP_OFFSET))(this, a1);
		}

		::System::Single IONPPODBNHE(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + LOADPICBEPE_IONPPODBNHE_OFFSET))(this, a1);
		}

		::System::Int32 KINGGMNKALJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_KINGGMNKALJ_OFFSET))(this);
		}

		::System::Int32 PEEFAFCKMHA(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + LOADPICBEPE_PEEFAFCKMHA_OFFSET))(this, a1);
		}

		::System::Int32 CHOMCFJGBMK(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + LOADPICBEPE_CHOMCFJGBMK_OFFSET))(this, a1);
		}

		::System::Int32 JIOKICJONNJ(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + LOADPICBEPE_JIOKICJONNJ_OFFSET))(this, a1);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_ONUNINIT_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOADPICBEPE_TICK_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void EPODAGHCEKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_EPODAGHCEKF_OFFSET))(this);
		}

		::System::Boolean DHIPAPPJBML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_DHIPAPPJBML_OFFSET))(this);
		}

		::System::Boolean HFPLLJPAJDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_HFPLLJPAJDP_OFFSET))(this);
		}

		::System::Boolean PBCBJPAGKBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_PBCBJPAGKBF_OFFSET))(this);
		}

		::System::Boolean IEHJHFKBIAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_IEHJHFKBIAF_OFFSET))(this);
		}

		::System::Void ANKKFGAFOBE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOADPICBEPE_ANKKFGAFOBE_OFFSET))(this, a1);
		}

		::System::Void OLNHGMCCJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_OLNHGMCCJOI_OFFSET))(this);
		}

		::System::Void LDLOGJAJIJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_LDLOGJAJIJP_OFFSET))(this);
		}

		::System::Void DOBPBKPKLCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_DOBPBKPKLCJ_OFFSET))(this);
		}

		::System::Void KKNMCOAMJIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_KKNMCOAMJIF_OFFSET))(this);
		}

		::System::Void GOFECMIMNCO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOADPICBEPE_GOFECMIMNCO_OFFSET))(this, a1);
		}

		::System::Void AFIDCDNKFLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_AFIDCDNKFLI_OFFSET))(this);
		}

		::System::Void NPFKIILHBAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_NPFKIILHBAP_OFFSET))(this);
		}

		::System::Void JOEJHNKLBID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_JOEJHNKLBID_OFFSET))(this);
		}

		::System::Void CPMKKHIHOBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_CPMKKHIHOBH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>* IELIEDFEDOE(::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>*(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset*))((::PBYTE)hIl2Cpp + LOADPICBEPE_IELIEDFEDOE_OFFSET))(this, a1);
		}

		::System::UInt32 DJGPAAGFOBO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_DJGPAAGFOBO_OFFSET))(this);
		}

		::System::UInt32 HFPJJHABLHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_HFPJJHABLHE_OFFSET))(this);
		}

		::System::Boolean EMBDHBMPLJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_EMBDHBMPLJB_OFFSET))(this);
		}

		::RPG::Client::ParkourGameFlowContext* get_GameFlowContext()
		{
			return ((::RPG::Client::ParkourGameFlowContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_GET_GAMEFLOWCONTEXT_OFFSET))(this);
		}

		::System::Void set_GameFlowContext(::RPG::Client::ParkourGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameFlowContext*))((::PBYTE)hIl2Cpp + LOADPICBEPE_SET_GAMEFLOWCONTEXT_OFFSET))(this, a1);
		}

		::DMPMGGKKIBH* PLOGFHDCFJB()
		{
			return ((::DMPMGGKKIBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE_PLOGFHDCFJB_OFFSET))(this);
		}

		::System::Void __OnReady_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPICBEPE___ONREADY_B__33_0_OFFSET))(this);
		}

	};
