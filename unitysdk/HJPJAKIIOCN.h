#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLNOEGNOJHH_PlaceInteractState.h"
#include "unitysdk/NNKGNMJOELO_OperateMode.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesJoyStickState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJOPMLKHAGC;
class GLOCAENEKMK;
class NGFHCJIAOLH;
class NNEIOFDLLMI;
class OBJANKHLNGO;
namespace RPG::Client { class ChenLingFesGameInstance; }
namespace RPG::Client { class VirtualCursor; }
namespace RPG::GameCore { class ChenLingFesItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJPJAKIIOCN_ACILBLMBABJ_OFFSET UNITYSDK_OFFSET(0x15D39660)
#define HJPJAKIIOCN_AIEPJGJPJGL_OFFSET UNITYSDK_OFFSET(0x15D36E80)
#define HJPJAKIIOCN_ALEIMMBIAKC_OFFSET UNITYSDK_OFFSET(0x15D37640)
#define HJPJAKIIOCN_AMNEHCFJLGL_OFFSET UNITYSDK_OFFSET(0x15D37940)
#define HJPJAKIIOCN_AOBCKPNJKJH_OFFSET UNITYSDK_OFFSET(0x15D39360)
#define HJPJAKIIOCN_APHPHBGIBKJ_OFFSET UNITYSDK_OFFSET(0x15D37310)
#define HJPJAKIIOCN_BJBAOFEAIMN_OFFSET UNITYSDK_OFFSET(0x15D38C50)
#define HJPJAKIIOCN_BJONKDEMCDH_OFFSET UNITYSDK_OFFSET(0x15D37B80)
#define HJPJAKIIOCN_BNBNKFPOBGI_OFFSET UNITYSDK_OFFSET(0x15D37880)
#define HJPJAKIIOCN_CDDCANBFLDH_OFFSET UNITYSDK_OFFSET(0x15D377C0)
#define HJPJAKIIOCN_CKMGLCGEHNI_OFFSET UNITYSDK_OFFSET(0x15D37C80)
#define HJPJAKIIOCN_CLEJNNGJGLO_OFFSET UNITYSDK_OFFSET(0x15D36B00)
#define HJPJAKIIOCN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D39CD0)
#define HJPJAKIIOCN_DALKINCKLJJ_OFFSET UNITYSDK_OFFSET(0x15D36A00)
#define HJPJAKIIOCN_DENCKAOJNJO_OFFSET UNITYSDK_OFFSET(0x15D37D40)
#define HJPJAKIIOCN_DHNAJHHHEJK_OFFSET UNITYSDK_OFFSET(0x15D386A0)
#define HJPJAKIIOCN_DLPPJDFCBHI_OFFSET UNITYSDK_OFFSET(0x15D37700)
#define HJPJAKIIOCN_DMNGGJECJBJ_OFFSET UNITYSDK_OFFSET(0x15D395A0)
#define HJPJAKIIOCN_DNKJOBILHGE_OFFSET UNITYSDK_OFFSET(0x15D38520)
#define HJPJAKIIOCN_DNKMAJMFHEP_OFFSET UNITYSDK_OFFSET(0x15D36BC0)
#define HJPJAKIIOCN_FIJINHOCLLF_OFFSET UNITYSDK_OFFSET(0x15D36960)
#define HJPJAKIIOCN_GHBPENNEKAI_OFFSET UNITYSDK_OFFSET(0x15D38D20)
#define HJPJAKIIOCN_GHOCGJKCKGJ_1_OFFSET UNITYSDK_OFFSET(0x15D370F0)
#define HJPJAKIIOCN_GHOCGJKCKGJ_OFFSET UNITYSDK_OFFSET(0x15D37020)
#define HJPJAKIIOCN_HAGNPLHJGPN_OFFSET UNITYSDK_OFFSET(0x15D39760)
#define HJPJAKIIOCN_HANFLCCFEHI_OFFSET UNITYSDK_OFFSET(0x15D38910)
#define HJPJAKIIOCN_HELOEOOKPML_OFFSET UNITYSDK_OFFSET(0x15D382C0)
#define HJPJAKIIOCN_HEPDHPGHEKC_OFFSET UNITYSDK_OFFSET(0x15D37AC0)
#define HJPJAKIIOCN_HGLGDKMEOKP_OFFSET UNITYSDK_OFFSET(0x15D36910)
#define HJPJAKIIOCN_HJAEFBCBHAC_OFFSET UNITYSDK_OFFSET(0x15D36D20)
#define HJPJAKIIOCN_HJLPNMKPCLA_OFFSET UNITYSDK_OFFSET(0x15D39840)
#define HJPJAKIIOCN_HOFPFMMGDBM_OFFSET UNITYSDK_OFFSET(0x15D38110)
#define HJPJAKIIOCN_HPBEBCLADNK_OFFSET UNITYSDK_OFFSET(0x15D36CC0)
#define HJPJAKIIOCN_HPFOKEBIPEL_OFFSET UNITYSDK_OFFSET(0x15D391E0)
#define HJPJAKIIOCN_IDJMNCDHJIN_OFFSET UNITYSDK_OFFSET(0x15D38850)
#define HJPJAKIIOCN_IIAJCDFKJMB_OFFSET UNITYSDK_OFFSET(0x15D385E0)
#define HJPJAKIIOCN_IMLPEGLHKHJ_OFFSET UNITYSDK_OFFSET(0x15D394E0)
#define HJPJAKIIOCN_JBIHCPKKKKO_OFFSET UNITYSDK_OFFSET(0x15D392A0)
#define HJPJAKIIOCN_JHAIFCNIDFL_OFFSET UNITYSDK_OFFSET(0x15D38DE0)
#define HJPJAKIIOCN_JJNJEBECJBL_OFFSET UNITYSDK_OFFSET(0x15D38770)
#define HJPJAKIIOCN_KAJKPPDILEH_OFFSET UNITYSDK_OFFSET(0x15D37F00)
#define HJPJAKIIOCN_KHFNDNABGBE_OFFSET UNITYSDK_OFFSET(0x15D36D80)
#define HJPJAKIIOCN_KPNMOIFPOJP_OFFSET UNITYSDK_OFFSET(0x15D39B80)
#define HJPJAKIIOCN_LMAICLEHGCI_OFFSET UNITYSDK_OFFSET(0x15D38F50)
#define HJPJAKIIOCN_LODPHBBGLHC_OFFSET UNITYSDK_OFFSET(0x15D36B60)
#define HJPJAKIIOCN_MBHFFHDHKID_OFFSET UNITYSDK_OFFSET(0x15D39420)
#define HJPJAKIIOCN_MBMDOPBBLGA_OFFSET UNITYSDK_OFFSET(0x15D37490)
#define HJPJAKIIOCN_MLEMMFLFMMI_OFFSET UNITYSDK_OFFSET(0x15D36DE0)
#define HJPJAKIIOCN_NAGOBLPDEHM_OFFSET UNITYSDK_OFFSET(0x15D37A00)
#define HJPJAKIIOCN_NINFEHLKIEO_OFFSET UNITYSDK_OFFSET(0x15D39C20)
#define HJPJAKIIOCN_NOMEDBPOALN_OFFSET UNITYSDK_OFFSET(0x15D38380)
#define HJPJAKIIOCN_OBEHJBNDCEM_OFFSET UNITYSDK_OFFSET(0x15D399E0)
#define HJPJAKIIOCN_OJIMKHCCMPL_OFFSET UNITYSDK_OFFSET(0x15D36F60)
#define HJPJAKIIOCN_PADPENLAABI_OFFSET UNITYSDK_OFFSET(0x15D37E40)
#define HJPJAKIIOCN_PCECIPIALLB_OFFSET UNITYSDK_OFFSET(0x15D37200)
#define HJPJAKIIOCN_PJECEJHJICB_OFFSET UNITYSDK_OFFSET(0x15D38EA0)
#define HJPJAKIIOCN_PJNFNJMCPOP_OFFSET UNITYSDK_OFFSET(0x15D36F20)
#define HJPJAKIIOCN_PJOPBMJGNDO_OFFSET UNITYSDK_OFFSET(0x15D38440)
#define HJPJAKIIOCN_PLEGHMBGAPB_OFFSET UNITYSDK_OFFSET(0x15D39920)
#define HJPJAKIIOCN_PNIFOGKGIAK_OFFSET UNITYSDK_OFFSET(0x15D39110)
#define HJPJAKIIOCN_POLNJGOEKIO_OFFSET UNITYSDK_OFFSET(0x15D37250)
#define HJPJAKIIOCN_POMABEGMOGJ_OFFSET UNITYSDK_OFFSET(0x15D373D0)

	class HJPJAKIIOCN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_CTOR_OFFSET))(this);
		}

		::AJOPMLKHAGC* HGLGDKMEOKP()
		{
			return ((::AJOPMLKHAGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_HGLGDKMEOKP_OFFSET))(this);
		}

		::System::Void DALKINCKLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_DALKINCKLJJ_OFFSET))(this);
		}

		::System::Void LODPHBBGLHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_LODPHBBGLHC_OFFSET))(this);
		}

		::System::Void HPBEBCLADNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_HPBEBCLADNK_OFFSET))(this);
		}

		::System::Void HJAEFBCBHAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_HJAEFBCBHAC_OFFSET))(this);
		}

		::System::Void KHFNDNABGBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_KHFNDNABGBE_OFFSET))(this);
		}

		::System::Void MLEMMFLFMMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_MLEMMFLFMMI_OFFSET))(this);
		}

		::System::Void AIEPJGJPJGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_AIEPJGJPJGL_OFFSET))(this);
		}

		::System::Void PJNFNJMCPOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_PJNFNJMCPOP_OFFSET))(this);
		}

		::System::Boolean OJIMKHCCMPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_OJIMKHCCMPL_OFFSET))(this);
		}

		::System::Int32 GHOCGJKCKGJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_GHOCGJKCKGJ_OFFSET))(this);
		}

		::System::Int32 GHOCGJKCKGJ_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_GHOCGJKCKGJ_1_OFFSET))(this, a1);
		}

		::System::Boolean PCECIPIALLB(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_PCECIPIALLB_OFFSET))(this, a1);
		}

		::System::Void POLNJGOEKIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_POLNJGOEKIO_OFFSET))(this, a1);
		}

		::System::Void APHPHBGIBKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_APHPHBGIBKJ_OFFSET))(this);
		}

		::System::Boolean POMABEGMOGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_POMABEGMOGJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 MBMDOPBBLGA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_MBMDOPBBLGA_OFFSET))(this);
		}

		::System::Void ALEIMMBIAKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_ALEIMMBIAKC_OFFSET))(this);
		}

		::System::Void DLPPJDFCBHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_DLPPJDFCBHI_OFFSET))(this);
		}

		::System::Boolean CDDCANBFLDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_CDDCANBFLDH_OFFSET))(this);
		}

		::System::Boolean BNBNKFPOBGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_BNBNKFPOBGI_OFFSET))(this);
		}

		::System::Void AMNEHCFJLGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_AMNEHCFJLGL_OFFSET))(this);
		}

		::System::Void NAGOBLPDEHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_NAGOBLPDEHM_OFFSET))(this);
		}

		::System::Void HEPDHPGHEKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_HEPDHPGHEKC_OFFSET))(this);
		}

		::System::Void BJONKDEMCDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_BJONKDEMCDH_OFFSET))(this);
		}

		::System::Void CKMGLCGEHNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_CKMGLCGEHNI_OFFSET))(this);
		}

		::System::Int32 DENCKAOJNJO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_DENCKAOJNJO_OFFSET))(this);
		}

		::System::Void PADPENLAABI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_PADPENLAABI_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingFesItemConfig* KAJKPPDILEH(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingFesItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_KAJKPPDILEH_OFFSET))(this, a1);
		}

		::System::Boolean HOFPFMMGDBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_HOFPFMMGDBM_OFFSET))(this);
		}

		::System::Boolean HELOEOOKPML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_HELOEOOKPML_OFFSET))(this);
		}

		::System::Boolean NOMEDBPOALN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_NOMEDBPOALN_OFFSET))(this);
		}

		::System::Void PJOPBMJGNDO(::System::Func_2<::UnityEngine::Vector3, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::UnityEngine::Vector3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_PJOPBMJGNDO_OFFSET))(this, a1);
		}

		::HLNOEGNOJHH_PlaceInteractState DNKJOBILHGE()
		{
			return ((::HLNOEGNOJHH_PlaceInteractState(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_DNKJOBILHGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* IIAJCDFKJMB()
		{
			return ((::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_IIAJCDFKJMB_OFFSET))(this);
		}

		::System::Void DHNAJHHHEJK(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_DHNAJHHHEJK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::NGFHCJIAOLH*>* JJNJEBECJBL()
		{
			return ((::System::Collections::Generic::HashSet_1<::NGFHCJIAOLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_JJNJEBECJBL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* IDJMNCDHJIN()
		{
			return ((::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_IDJMNCDHJIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* HANFLCCFEHI()
		{
			return ((::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_HANFLCCFEHI_OFFSET))(this);
		}

		::System::Int32 BJBAOFEAIMN(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_BJBAOFEAIMN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple>* GHBPENNEKAI()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_GHBPENNEKAI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* JHAIFCNIDFL()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_JHAIFCNIDFL_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* PJECEJHJICB()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_PJECEJHJICB_OFFSET))(this);
		}

		::System::Single LMAICLEHGCI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_LMAICLEHGCI_OFFSET))(this);
		}

		::System::Single PNIFOGKGIAK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_PNIFOGKGIAK_OFFSET))(this);
		}

		::System::Boolean HPFOKEBIPEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_HPFOKEBIPEL_OFFSET))(this);
		}

		::System::Void JBIHCPKKKKO(::RPG::Client::VirtualCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_JBIHCPKKKKO_OFFSET))(this, a1);
		}

		::RPG::Client::VirtualCursor* AOBCKPNJKJH()
		{
			return ((::RPG::Client::VirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_AOBCKPNJKJH_OFFSET))(this);
		}

		::System::Void MBHFFHDHKID(::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_MBHFFHDHKID_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState IMLPEGLHKHJ()
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_IMLPEGLHKHJ_OFFSET))(this);
		}

		::System::Boolean DMNGGJECJBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_DMNGGJECJBJ_OFFSET))(this);
		}

		::System::Void ACILBLMBABJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_ACILBLMBABJ_OFFSET))(this);
		}

		::System::Void HAGNPLHJGPN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_HAGNPLHJGPN_OFFSET))(this, a1);
		}

		::System::Void HJLPNMKPCLA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_HJLPNMKPCLA_OFFSET))(this, a1);
		}

		::NNKGNMJOELO_OperateMode PLEGHMBGAPB()
		{
			return ((::NNKGNMJOELO_OperateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_PLEGHMBGAPB_OFFSET))(this);
		}

		::System::Void OBEHJBNDCEM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_OBEHJBNDCEM_OFFSET))(this, a1);
		}

		::NNEIOFDLLMI* KPNMOIFPOJP()
		{
			return ((::NNEIOFDLLMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_KPNMOIFPOJP_OFFSET))(this);
		}

		::OBJANKHLNGO* NINFEHLKIEO()
		{
			return ((::OBJANKHLNGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_NINFEHLKIEO_OFFSET))(this);
		}

		::GLOCAENEKMK* DNKMAJMFHEP()
		{
			return ((::GLOCAENEKMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_DNKMAJMFHEP_OFFSET))(this);
		}

		::RPG::Client::ChenLingFesGameInstance* CLEJNNGJGLO()
		{
			return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_CLEJNNGJGLO_OFFSET))(this);
		}

		::AJOPMLKHAGC* FIJINHOCLLF()
		{
			return ((::AJOPMLKHAGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPJAKIIOCN_FIJINHOCLLF_OFFSET))(this);
		}

	};
