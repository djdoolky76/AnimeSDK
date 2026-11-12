#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACPBENOMMMA_Phase.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueAdventureRoomRayProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define ACPBENOMMMA_AFBLOGMMHNK_OFFSET UNITYSDK_OFFSET(0xB794A50)
#define ACPBENOMMMA_AFODOCNCAID_OFFSET UNITYSDK_OFFSET(0xB799B10)
#define ACPBENOMMMA_AIFJJJIKNAG_OFFSET UNITYSDK_OFFSET(0xB797DB0)
#define ACPBENOMMMA_BIJOCBBGMPP_OFFSET UNITYSDK_OFFSET(0xB798FE0)
#define ACPBENOMMMA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB79A180)
#define ACPBENOMMMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB793BF0)
#define ACPBENOMMMA_DBBNMHDBLNN_OFFSET UNITYSDK_OFFSET(0xB798470)
#define ACPBENOMMMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB793F90)
#define ACPBENOMMMA_ELILFNOAIGE_OFFSET UNITYSDK_OFFSET(0xB796C20)
#define ACPBENOMMMA_FIIOLLFPAFG_OFFSET UNITYSDK_OFFSET(0xB797330)
#define ACPBENOMMMA_GAMIFONJLOC_OFFSET UNITYSDK_OFFSET(0xB799E80)
#define ACPBENOMMMA_GBLKGLHKHLA_OFFSET UNITYSDK_OFFSET(0xB795750)
#define ACPBENOMMMA_GGIBEOACDKC_OFFSET UNITYSDK_OFFSET(0xB7945B0)
#define ACPBENOMMMA_GKLFPHBADFP_OFFSET UNITYSDK_OFFSET(0xB798220)
#define ACPBENOMMMA_GOBJMGAOMKA_OFFSET UNITYSDK_OFFSET(0xB7970E0)
#define ACPBENOMMMA_HGGFJPIJJOC_OFFSET UNITYSDK_OFFSET(0xB7990B0)
#define ACPBENOMMMA_HIPAFJHGNBD_OFFSET UNITYSDK_OFFSET(0xB798B60)
#define ACPBENOMMMA_HIPIOAPPCOB_OFFSET UNITYSDK_OFFSET(0xB798280)
#define ACPBENOMMMA_HPHJIEKPKOA_OFFSET UNITYSDK_OFFSET(0xB7992E0)
#define ACPBENOMMMA_IBJLPHLALGG_OFFSET UNITYSDK_OFFSET(0xB7949D0)
#define ACPBENOMMMA_JLGHNMEDJHO_OFFSET UNITYSDK_OFFSET(0xB797260)
#define ACPBENOMMMA_KEFAKCHMEOD_OFFSET UNITYSDK_OFFSET(0xB7964E0)
#define ACPBENOMMMA_KEFEKPJPCGG_OFFSET UNITYSDK_OFFSET(0xB795EA0)
#define ACPBENOMMMA_KFHFKFDEJEJ_OFFSET UNITYSDK_OFFSET(0xB799840)
#define ACPBENOMMMA_KIBKJEPCBGH_OFFSET UNITYSDK_OFFSET(0xB795540)
#define ACPBENOMMMA_KPLGOKJHNOC_OFFSET UNITYSDK_OFFSET(0xB7983B0)
#define ACPBENOMMMA_LAEEAMNPJDA_OFFSET UNITYSDK_OFFSET(0xB799BA0)
#define ACPBENOMMMA_LGDIAPEAGCF_OFFSET UNITYSDK_OFFSET(0xB799EE0)
#define ACPBENOMMMA_LPIHAENFLLA_OFFSET UNITYSDK_OFFSET(0xB797080)
#define ACPBENOMMMA_MKAANPPNIMF_OFFSET UNITYSDK_OFFSET(0xB7972B0)
#define ACPBENOMMMA_NGPFEGIPJGO_OFFSET UNITYSDK_OFFSET(0xB799680)
#define ACPBENOMMMA_OIELMPDGLLA_OFFSET UNITYSDK_OFFSET(0xB799580)
#define ACPBENOMMMA_OLPIKFGDKJO_OFFSET UNITYSDK_OFFSET(0xB7973A0)
#define ACPBENOMMMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7965B0)
#define ACPBENOMMMA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB797030)
#define ACPBENOMMMA_PCMCECHMICH_OFFSET UNITYSDK_OFFSET(0xB796490)
#define ACPBENOMMMA_TICK_OFFSET UNITYSDK_OFFSET(0xB794740)

inline static constexpr unsigned int ACPBENOMMMA_TypeDefinitionIndex = 59698;

	class ACPBENOMMMA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::IAssetOperation* JNKMGGMDODJ; // 0x20
		::UnityEngine::Object* EHJPMODMCAP; // 0x28
		::RPG::GameCore::RogueAdventureRoomRayProcess* OFKGLJOAMLD; // 0x30
		::RPG::GameCore::AnchorInfo* HFPCNDADGEC; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* FGBNJBEJLOO; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* ONAOJJNEHLL; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLNHICGMAPM; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* LFFCFJPBEEK; // 0x58
		::RPG::GameCore::AdventureHitConfig* PKDMMBCHHIG; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* EMNFEOGDDPI; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* FPMGOBMOALB; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* DGNHPGJKIPF; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* PDIDGNNPLBF; // 0x80
		::System::Single PHFDPBCLODD; // 0x88
		::System::Boolean EIHCACPPKDO; // 0x8C
		::System::Boolean KCCNIPHIBEO; // 0x8D
		::System::Boolean CMEJOPAKPCC; // 0x8E
		::System::Byte _padding0[0x1];
		::System::Single PGMIOKKLHIE; // 0x90
		::System::Single BHJLDGPJINP; // 0x94
		::System::Single CIIFPAOJIPE; // 0x98
		::UnityEngine::Vector3 EDJCMAJJKFE; // 0x9C
		::System::Single JLMIBGOJAKB; // 0xA8
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0xAC
		::ACPBENOMMMA_Phase NOHNKAIALPJ; // 0xB8
		::System::Single BEGAAMAGBMI; // 0xBC
		::System::UInt32 BDHIKCHLFPI; // 0xC0
		::System::Single LGEJGMBAAHG; // 0xC4
		::System::Single BKDLKNHIHOB; // 0xC8
		::System::Single DFJMGHEHNME; // 0xCC
		::UnityEngine::Vector3 PFBGBJGHDAA; // 0xD0
		::System::Int32 KHDPKKBEGKM; // 0xDC
		::UnityEngine::Vector3 GHMJLCBLADJ; // 0xE0
		::System::Int32 ALBOBJPJCBI; // 0xEC
		::System::Single OJCAPLGCJMM; // 0xF0
		::System::Single GDJNIFPJMAI; // 0xF4
		::UnityEngine::Vector3 AGLILIOBMMK; // 0xF8
		::System::Single JOIPFIKDAMJ; // 0x104
		::System::Int32 KEJGKEEBMII; // 0x108
		::System::Int32 CDPDJBHCAAP; // 0x10C
		::System::Single CMAKNCPLKPC; // 0x110
		::System::Single OAIMKFHIDPN; // 0x114
		::System::Single LEOMCIJNLEH; // 0x118
		::System::Single DAOBJOHLCOK; // 0x11C
		::System::Int32 AMCJFFELDDD; // 0x120
		::System::Boolean POMMABEILHD; // 0x124
		::System::Boolean NDIBBONOCKF; // 0x125
		::System::Boolean AKLHCNDKDKL; // 0x126
		::System::Boolean EGJCEKJMILA; // 0x127
		static ::System::String** StaticGet_GLFPCKGAGOJ()
		{
			return (::System::String**)UnitySDK::FromName("", "ACPBENOMMMA")->GetStaticField(0x3EAC0);
		}

		static ::System::String** StaticGet_DIDLAOFLEKM()
		{
			return (::System::String**)UnitySDK::FromName("", "ACPBENOMMMA")->GetStaticField(0x3EAC8);
		}

		static ::System::Int32* StaticGet_KHDIGAJEMCD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACPBENOMMMA")->GetStaticField(0xD8C0);
		}

		static ::System::Int32* StaticGet_OAKFIOAPCIB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACPBENOMMMA")->GetStaticField(0xD8C4);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdventureRoomRayProcess* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdventureRoomRayProcess*))((::PBYTE)hIl2Cpp + ACPBENOMMMA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACPBENOMMMA_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACPBENOMMMA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void LPIHAENFLLA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACPBENOMMMA_LPIHAENFLLA_OFFSET))(this, a1);
		}

		::System::Void JLGHNMEDJHO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACPBENOMMMA_JLGHNMEDJHO_OFFSET))(this, a1);
		}

		::System::Void MKAANPPNIMF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACPBENOMMMA_MKAANPPNIMF_OFFSET))(this, a1);
		}

		::System::Void FIIOLLFPAFG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACPBENOMMMA_FIIOLLFPAFG_OFFSET))(this, a1);
		}

		::System::Boolean OLPIKFGDKJO(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + ACPBENOMMMA_OLPIKFGDKJO_OFFSET))(this, a1);
		}

		::System::Void AIFJJJIKNAG(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + ACPBENOMMMA_AIFJJJIKNAG_OFFSET))(this, a1, a2);
		}

		::System::Void GKLFPHBADFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_GKLFPHBADFP_OFFSET))(this);
		}

		::System::Void IBJLPHLALGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_IBJLPHLALGG_OFFSET))(this);
		}

		::System::Void AFBLOGMMHNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_AFBLOGMMHNK_OFFSET))(this);
		}

		::System::Void KIBKJEPCBGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_KIBKJEPCBGH_OFFSET))(this);
		}

		::System::Void KEFEKPJPCGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_KEFEKPJPCGG_OFFSET))(this);
		}

		::System::Void PCMCECHMICH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_PCMCECHMICH_OFFSET))(this);
		}

		::System::Void KEFAKCHMEOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_KEFAKCHMEOD_OFFSET))(this);
		}

		::System::Void BIJOCBBGMPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_BIJOCBBGMPP_OFFSET))(this);
		}

		::System::Void HIPIOAPPCOB(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ACPBENOMMMA_HIPIOAPPCOB_OFFSET))(this, a1, a2);
		}

		::System::Void ELILFNOAIGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_ELILFNOAIGE_OFFSET))(this);
		}

		::System::Void GOBJMGAOMKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_GOBJMGAOMKA_OFFSET))(this);
		}

		::System::Int32 OIELMPDGLLA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ACPBENOMMMA_OIELMPDGLLA_OFFSET))(this, a1, a2);
		}

		::System::Void HGGFJPIJJOC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACPBENOMMMA_HGGFJPIJJOC_OFFSET))(this, a1);
		}

		::System::Boolean NGPFEGIPJGO(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACPBENOMMMA_NGPFEGIPJGO_OFFSET))(this, a1);
		}

		::System::Int32 KFHFKFDEJEJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_KFHFKFDEJEJ_OFFSET))(this);
		}

		::System::Single AFODOCNCAID(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ACPBENOMMMA_AFODOCNCAID_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HPHJIEKPKOA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ACPBENOMMMA_HPHJIEKPKOA_OFFSET))(this, a1, a2);
		}

		::System::Void DBBNMHDBLNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_DBBNMHDBLNN_OFFSET))(this);
		}

		::System::Void GBLKGLHKHLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_GBLKGLHKHLA_OFFSET))(this);
		}

		::System::Boolean LAEEAMNPJDA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACPBENOMMMA_LAEEAMNPJDA_OFFSET))(this, a1);
		}

		::System::Void HIPAFJHGNBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_HIPAFJHGNBD_OFFSET))(this);
		}

		::System::Boolean GAMIFONJLOC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureHitConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureHitConfig*))((::PBYTE)hIl2Cpp + ACPBENOMMMA_GAMIFONJLOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Single LGDIAPEAGCF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ACPBENOMMMA_LGDIAPEAGCF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GGIBEOACDKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACPBENOMMMA_GGIBEOACDKC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 KPLGOKJHNOC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPBENOMMMA_KPLGOKJHNOC_OFFSET))(this);
		}

	};
