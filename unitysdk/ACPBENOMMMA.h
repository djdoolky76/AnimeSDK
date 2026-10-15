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

#define ACPBENOMMMA_AFBLOGMMHNK_OFFSET UNITYSDK_OFFSET(0xB12C3A0)
#define ACPBENOMMMA_AFODOCNCAID_OFFSET UNITYSDK_OFFSET(0xB1314C0)
#define ACPBENOMMMA_AIFJJJIKNAG_OFFSET UNITYSDK_OFFSET(0xB12F760)
#define ACPBENOMMMA_BIJOCBBGMPP_OFFSET UNITYSDK_OFFSET(0xB130990)
#define ACPBENOMMMA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB131B30)
#define ACPBENOMMMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB12B550)
#define ACPBENOMMMA_DBBNMHDBLNN_OFFSET UNITYSDK_OFFSET(0xB12FE10)
#define ACPBENOMMMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB12B8F0)
#define ACPBENOMMMA_ELILFNOAIGE_OFFSET UNITYSDK_OFFSET(0xB12E5A0)
#define ACPBENOMMMA_FIIOLLFPAFG_OFFSET UNITYSDK_OFFSET(0xB12ECB0)
#define ACPBENOMMMA_GAMIFONJLOC_OFFSET UNITYSDK_OFFSET(0xB131830)
#define ACPBENOMMMA_GBLKGLHKHLA_OFFSET UNITYSDK_OFFSET(0xB12D0A0)
#define ACPBENOMMMA_GGIBEOACDKC_OFFSET UNITYSDK_OFFSET(0xB12BF00)
#define ACPBENOMMMA_GKLFPHBADFP_OFFSET UNITYSDK_OFFSET(0xB12FBD0)
#define ACPBENOMMMA_GOBJMGAOMKA_OFFSET UNITYSDK_OFFSET(0xB12EA60)
#define ACPBENOMMMA_HGGFJPIJJOC_OFFSET UNITYSDK_OFFSET(0xB130A60)
#define ACPBENOMMMA_HIPAFJHGNBD_OFFSET UNITYSDK_OFFSET(0xB130500)
#define ACPBENOMMMA_HIPIOAPPCOB_OFFSET UNITYSDK_OFFSET(0xB12FC30)
#define ACPBENOMMMA_HPHJIEKPKOA_OFFSET UNITYSDK_OFFSET(0xB130C90)
#define ACPBENOMMMA_IBJLPHLALGG_OFFSET UNITYSDK_OFFSET(0xB12C320)
#define ACPBENOMMMA_JLGHNMEDJHO_OFFSET UNITYSDK_OFFSET(0xB12EBE0)
#define ACPBENOMMMA_KEFAKCHMEOD_OFFSET UNITYSDK_OFFSET(0xB12DE50)
#define ACPBENOMMMA_KEFEKPJPCGG_OFFSET UNITYSDK_OFFSET(0xB12D7F0)
#define ACPBENOMMMA_KFHFKFDEJEJ_OFFSET UNITYSDK_OFFSET(0xB1311F0)
#define ACPBENOMMMA_KIBKJEPCBGH_OFFSET UNITYSDK_OFFSET(0xB12CE90)
#define ACPBENOMMMA_KPLGOKJHNOC_OFFSET UNITYSDK_OFFSET(0xB12FD50)
#define ACPBENOMMMA_LAEEAMNPJDA_OFFSET UNITYSDK_OFFSET(0xB131550)
#define ACPBENOMMMA_LGDIAPEAGCF_OFFSET UNITYSDK_OFFSET(0xB131890)
#define ACPBENOMMMA_LPIHAENFLLA_OFFSET UNITYSDK_OFFSET(0xB12EA00)
#define ACPBENOMMMA_MKAANPPNIMF_OFFSET UNITYSDK_OFFSET(0xB12EC30)
#define ACPBENOMMMA_NGPFEGIPJGO_OFFSET UNITYSDK_OFFSET(0xB131030)
#define ACPBENOMMMA_OIELMPDGLLA_OFFSET UNITYSDK_OFFSET(0xB130F30)
#define ACPBENOMMMA_OLPIKFGDKJO_OFFSET UNITYSDK_OFFSET(0xB12ED20)
#define ACPBENOMMMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB12DF20)
#define ACPBENOMMMA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB12E9B0)
#define ACPBENOMMMA_PCMCECHMICH_OFFSET UNITYSDK_OFFSET(0xB12DE00)
#define ACPBENOMMMA_TICK_OFFSET UNITYSDK_OFFSET(0xB12C090)

inline static constexpr unsigned int ACPBENOMMMA_TypeDefinitionIndex = 58442;

	class ACPBENOMMMA : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* DGNHPGJKIPF; // 0x18
		::RPG::GameCore::RogueAdventureRoomRayProcess* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::AdventureHitConfig* PKDMMBCHHIG; // 0x28
		::RPG::Client::IAssetOperation* JNKMGGMDODJ; // 0x30
		::UnityEngine::Object* EHJPMODMCAP; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* PDIDGNNPLBF; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* FGBNJBEJLOO; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* EMNFEOGDDPI; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLNHICGMAPM; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* ONAOJJNEHLL; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* LFFCFJPBEEK; // 0x68
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* FPMGOBMOALB; // 0x78
		::RPG::GameCore::AnchorInfo* HFPCNDADGEC; // 0x80
		::System::Single PGMIOKKLHIE; // 0x88
		::System::Single CMAKNCPLKPC; // 0x8C
		::System::Int32 ALBOBJPJCBI; // 0x90
		::System::Boolean KCCNIPHIBEO; // 0x94
		::System::Boolean POMMABEILHD; // 0x95
		::System::Boolean CMEJOPAKPCC; // 0x96
		::System::Boolean EIHCACPPKDO; // 0x97
		::ACPBENOMMMA_Phase NOHNKAIALPJ; // 0x98
		::System::Single PHFDPBCLODD; // 0x9C
		::System::Single DAOBJOHLCOK; // 0xA0
		::UnityEngine::Vector3 AGLILIOBMMK; // 0xA4
		::System::Int32 KEJGKEEBMII; // 0xB0
		::System::UInt32 BDHIKCHLFPI; // 0xB4
		::System::Single DFJMGHEHNME; // 0xB8
		::System::Single JLMIBGOJAKB; // 0xBC
		::UnityEngine::Vector3 EDJCMAJJKFE; // 0xC0
		::System::Single LEOMCIJNLEH; // 0xCC
		::UnityEngine::Vector3 GHMJLCBLADJ; // 0xD0
		::System::Single OJCAPLGCJMM; // 0xDC
		::System::Int32 AMCJFFELDDD; // 0xE0
		::System::Single BEGAAMAGBMI; // 0xE4
		::System::Single LGEJGMBAAHG; // 0xE8
		::System::Single BHJLDGPJINP; // 0xEC
		::System::Int32 CDPDJBHCAAP; // 0xF0
		::System::Single GDJNIFPJMAI; // 0xF4
		::System::Single OAIMKFHIDPN; // 0xF8
		::System::Int32 KHDPKKBEGKM; // 0xFC
		::System::Boolean NDIBBONOCKF; // 0x100
		::System::Boolean EGJCEKJMILA; // 0x101
		::System::Boolean AKLHCNDKDKL; // 0x102
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 PFBGBJGHDAA; // 0x104
		::System::Single BKDLKNHIHOB; // 0x110
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x114
		::System::Single CIIFPAOJIPE; // 0x120
		::System::Single JOIPFIKDAMJ; // 0x124
		static ::System::String** StaticGet_GLFPCKGAGOJ()
		{
			return (::System::String**)UnitySDK::FromName("", "ACPBENOMMMA")->GetStaticField(0x44BF0);
		}

		static ::System::String** StaticGet_DIDLAOFLEKM()
		{
			return (::System::String**)UnitySDK::FromName("", "ACPBENOMMMA")->GetStaticField(0x44BF8);
		}

		static ::System::Int32* StaticGet_OAKFIOAPCIB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACPBENOMMMA")->GetStaticField(0x103C0);
		}

		static ::System::Int32* StaticGet_KHDIGAJEMCD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACPBENOMMMA")->GetStaticField(0x103C4);
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
