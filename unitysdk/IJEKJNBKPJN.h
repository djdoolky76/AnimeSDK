#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJEKJNBKPJN_MeshLodState.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IJEKJNBKPJN;
class IJEKJNBKPJN_NGDMBOHNGIA;
class KLKMCNOECAL;
class NEOCEOCDEAF;
class OKPHELJKCFE;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class AssetsPathDict; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::CustomRP { class CapsuleOcclusion; }
namespace RPG::GameCore { class ColliderConfig; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ObjectInstantiateRequest; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define IJEKJNBKPJN_AAEKJNLAJEC_OFFSET UNITYSDK_OFFSET(0x1645E100)
#define IJEKJNBKPJN_ACEGHPFDDLM_OFFSET UNITYSDK_OFFSET(0x16461470)
#define IJEKJNBKPJN_AFLBCNKMKDG_OFFSET UNITYSDK_OFFSET(0x1645DF10)
#define IJEKJNBKPJN_AHCMKHGAGHA_OFFSET UNITYSDK_OFFSET(0x164606F0)
#define IJEKJNBKPJN_AHKEGKNPBPJ_OFFSET UNITYSDK_OFFSET(0x1645EBB0)
#define IJEKJNBKPJN_BKJMGLLJGHA_OFFSET UNITYSDK_OFFSET(0x1645F8D0)
#define IJEKJNBKPJN_BNIGDHDOIFE_OFFSET UNITYSDK_OFFSET(0x1645F5F0)
#define IJEKJNBKPJN_CBAGHIMPPJP_OFFSET UNITYSDK_OFFSET(0x16464CF0)
#define IJEKJNBKPJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x16465AE0)
#define IJEKJNBKPJN_CTOR_OFFSET UNITYSDK_OFFSET(0x164659D0)
#define IJEKJNBKPJN_DANGLDJGPCC_OFFSET UNITYSDK_OFFSET(0x1645F4A0)
#define IJEKJNBKPJN_DEHIOKLHFPP_OFFSET UNITYSDK_OFFSET(0x1645C740)
#define IJEKJNBKPJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1645B4A0)
#define IJEKJNBKPJN_DKKAHMJFHOP_OFFSET UNITYSDK_OFFSET(0x1645D430)
#define IJEKJNBKPJN_DOGHIALOIKG_OFFSET UNITYSDK_OFFSET(0x1645B9C0)
#define IJEKJNBKPJN_DOMFDGOBDCG_OFFSET UNITYSDK_OFFSET(0x1645E470)
#define IJEKJNBKPJN_ECBAJNDAKHL_OFFSET UNITYSDK_OFFSET(0x16464420)
#define IJEKJNBKPJN_ECCJCGOJDJB_OFFSET UNITYSDK_OFFSET(0x16461610)
#define IJEKJNBKPJN_ECJBALGEJGG_OFFSET UNITYSDK_OFFSET(0x1645C8A0)
#define IJEKJNBKPJN_EDPFKFFEEFD_OFFSET UNITYSDK_OFFSET(0x1645B870)
#define IJEKJNBKPJN_EMONKEKHLJK_OFFSET UNITYSDK_OFFSET(0x164655E0)
#define IJEKJNBKPJN_ENNABGBJPLB_OFFSET UNITYSDK_OFFSET(0x16465180)
#define IJEKJNBKPJN_FCOBBMDCKDG_OFFSET UNITYSDK_OFFSET(0x1645BBA0)
#define IJEKJNBKPJN_FOBABCJLJFB_OFFSET UNITYSDK_OFFSET(0x1645DCD0)
#define IJEKJNBKPJN_FODMGLEHMEG_1_OFFSET UNITYSDK_OFFSET(0x16461E20)
#define IJEKJNBKPJN_FODMGLEHMEG_OFFSET UNITYSDK_OFFSET(0x16461D70)
#define IJEKJNBKPJN_FPFOGPIJDHG_OFFSET UNITYSDK_OFFSET(0x16460480)
#define IJEKJNBKPJN_FPPPGPLJOHK_OFFSET UNITYSDK_OFFSET(0x16465100)
#define IJEKJNBKPJN_GETMODELART_OFFSET UNITYSDK_OFFSET(0x16464230)
#define IJEKJNBKPJN_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x164641F0)
#define IJEKJNBKPJN_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x16464190)
#define IJEKJNBKPJN_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x164636D0)
#define IJEKJNBKPJN_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0x1645CB50)
#define IJEKJNBKPJN_GJMCDOHMOIN_OFFSET UNITYSDK_OFFSET(0x16462510)
#define IJEKJNBKPJN_GLDECNONJCF_OFFSET UNITYSDK_OFFSET(0x16462B10)
#define IJEKJNBKPJN_GNJDGLOCGGO_OFFSET UNITYSDK_OFFSET(0x16464270)
#define IJEKJNBKPJN_GOCDEAKPODA_OFFSET UNITYSDK_OFFSET(0x164628E0)
#define IJEKJNBKPJN_HJEJBEMPMCK_OFFSET UNITYSDK_OFFSET(0x16463800)
#define IJEKJNBKPJN_HLJPFHGEEEL_OFFSET UNITYSDK_OFFSET(0x16460D30)
#define IJEKJNBKPJN_HNKFJJMKPOK_OFFSET UNITYSDK_OFFSET(0x16462870)
#define IJEKJNBKPJN_HNPHEAAJKFA_OFFSET UNITYSDK_OFFSET(0x16462380)
#define IJEKJNBKPJN_HOMHLNOFNDL_OFFSET UNITYSDK_OFFSET(0x1645E3C0)
#define IJEKJNBKPJN_IJHJDJAINON_OFFSET UNITYSDK_OFFSET(0x16460640)
#define IJEKJNBKPJN_IKPHBLAFALN_OFFSET UNITYSDK_OFFSET(0x164600D0)
#define IJEKJNBKPJN_ILLCJDDJFOG_OFFSET UNITYSDK_OFFSET(0x16464D40)
#define IJEKJNBKPJN_INFBNFDPKAF_OFFSET UNITYSDK_OFFSET(0x16464330)
#define IJEKJNBKPJN_JDBDBJDICLJ_OFFSET UNITYSDK_OFFSET(0x16460F70)
#define IJEKJNBKPJN_JEDNINEAPNP_OFFSET UNITYSDK_OFFSET(0x164618B0)
#define IJEKJNBKPJN_JNMOPOHALBK_OFFSET UNITYSDK_OFFSET(0x1645F1A0)
#define IJEKJNBKPJN_KFLFGCPIBAJ_OFFSET UNITYSDK_OFFSET(0x16464370)
#define IJEKJNBKPJN_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1645FD80)
#define IJEKJNBKPJN_KHIMHKPIMGJ_OFFSET UNITYSDK_OFFSET(0x1645E930)
#define IJEKJNBKPJN_KMFNKDFNGGM_OFFSET UNITYSDK_OFFSET(0x1645C6A0)
#define IJEKJNBKPJN_KOMIKOGFAMD_OFFSET UNITYSDK_OFFSET(0x164629A0)
#define IJEKJNBKPJN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1645CD50)
#define IJEKJNBKPJN_LEACFMFOBAO_OFFSET UNITYSDK_OFFSET(0x16463520)
#define IJEKJNBKPJN_LEFNHNHCJNK_OFFSET UNITYSDK_OFFSET(0x16465010)
#define IJEKJNBKPJN_LFIMPGJLFDP_OFFSET UNITYSDK_OFFSET(0x1645F860)
#define IJEKJNBKPJN_LIODJEEPBNC_OFFSET UNITYSDK_OFFSET(0x1645BD40)
#define IJEKJNBKPJN_LJGFPKIBBEJ_1_OFFSET UNITYSDK_OFFSET(0x164610D0)
#define IJEKJNBKPJN_LJGFPKIBBEJ_OFFSET UNITYSDK_OFFSET(0x1645D110)
#define IJEKJNBKPJN_LKLKCMHOCKD_OFFSET UNITYSDK_OFFSET(0x16464CE0)
#define IJEKJNBKPJN_LLBCGFHAEOM_OFFSET UNITYSDK_OFFSET(0x1645BA00)
#define IJEKJNBKPJN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x1645D5D0)
#define IJEKJNBKPJN_LMGNIGBAJBN_OFFSET UNITYSDK_OFFSET(0x16462E70)
#define IJEKJNBKPJN_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0x1645F7B0)
#define IJEKJNBKPJN_MBOGKNKADJC_OFFSET UNITYSDK_OFFSET(0x16464360)
#define IJEKJNBKPJN_MDAPIJGIOJI_OFFSET UNITYSDK_OFFSET(0x1645BA50)
#define IJEKJNBKPJN_MDBBGMFLPOO_OFFSET UNITYSDK_OFFSET(0x164601A0)
#define IJEKJNBKPJN_MFFHOAACOPA_OFFSET UNITYSDK_OFFSET(0x164652F0)
#define IJEKJNBKPJN_MGCJADOONGI_OFFSET UNITYSDK_OFFSET(0x1645F2C0)
#define IJEKJNBKPJN_MGLLPAJCDGB_OFFSET UNITYSDK_OFFSET(0x16464320)
#define IJEKJNBKPJN_MIKFNEOIHPC_OFFSET UNITYSDK_OFFSET(0x1645DB30)
#define IJEKJNBKPJN_MILPGBJHMKF_OFFSET UNITYSDK_OFFSET(0x16461710)
#define IJEKJNBKPJN_MLAGKKDIPIL_OFFSET UNITYSDK_OFFSET(0x16463EB0)
#define IJEKJNBKPJN_NAFBHLJINIH_OFFSET UNITYSDK_OFFSET(0x16463D10)
#define IJEKJNBKPJN_NAKHEIAKAEO_OFFSET UNITYSDK_OFFSET(0x16464350)
#define IJEKJNBKPJN_NAPPEAKHCAD_OFFSET UNITYSDK_OFFSET(0x16464340)
#define IJEKJNBKPJN_NGBACMKLIKD_OFFSET UNITYSDK_OFFSET(0x16463FB0)
#define IJEKJNBKPJN_NHOJFIMKLJC_OFFSET UNITYSDK_OFFSET(0x16465570)
#define IJEKJNBKPJN_NOFHFKNDBAO_OFFSET UNITYSDK_OFFSET(0x1645F570)
#define IJEKJNBKPJN_NOLANEBJBAO_OFFSET UNITYSDK_OFFSET(0x1645E060)
#define IJEKJNBKPJN_OBHNJHGHOIE_OFFSET UNITYSDK_OFFSET(0x16461B80)
#define IJEKJNBKPJN_OGMDDPBHHKH_OFFSET UNITYSDK_OFFSET(0x1645FF80)
#define IJEKJNBKPJN_OHADKCIMFOF_OFFSET UNITYSDK_OFFSET(0x1645D370)
#define IJEKJNBKPJN_OJEPPFAFANM_OFFSET UNITYSDK_OFFSET(0x1645E150)
#define IJEKJNBKPJN_OMMMCPEMGLB_OFFSET UNITYSDK_OFFSET(0x16463200)
#define IJEKJNBKPJN_OPPFHECNMJO_OFFSET UNITYSDK_OFFSET(0x164627E0)
#define IJEKJNBKPJN_PBKLIEGIOMC_OFFSET UNITYSDK_OFFSET(0x1645E4D0)
#define IJEKJNBKPJN_PECINLIBCMJ_OFFSET UNITYSDK_OFFSET(0x164622D0)
#define IJEKJNBKPJN_PJDOGBOLNID_OFFSET UNITYSDK_OFFSET(0x1645D2A0)
#define IJEKJNBKPJN_TICK_OFFSET UNITYSDK_OFFSET(0x1645C0B0)
#define IJEKJNBKPJN__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1645D570)

	class IJEKJNBKPJN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* NEMJAFALHIE; // 0x18
		::RPG::Client::AttachPointMapping* JHKPNLBBHII; // 0x20
		::RPG::GameCore::LodTemplate* OFDBCCKEJNC; // 0x28
		::System::String* OMIGKGPDBEB; // 0x30
		::UnityEngine::Transform* BCHMBHEMFAK; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MCJPJBHPMLN; // 0x40
		::System::Action* DEOAJCAJNAG; // 0x48
		::RPG::Client::Promises::Promise* LPOMLIBIIFG; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* AJGGGLMIAGP; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HJDBFDAMKGA; // 0x60
		::UnityEngine::RuntimeAnimatorController* AJLHCGPNHDP; // 0x68
		::UnityEngine::GameObject* HMKIDOJEMOD; // 0x70
		::RPG::Client::Promises::Promise* OGCGOLDDMJF; // 0x78
		::Il2CppArray<::System::Object*>* DEAGOMKCHBA; // 0x80
		::System::Action* FBMAMCJJNGD; // 0x88
		::System::Action* ADIEANHBNCH; // 0x90
		::RPG::Client::Promises::Promise* PDDAMDMEKLL; // 0x98
		::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* PCBOGEDJPDC; // 0xA0
		::RPG::Client::MockAnimator* CBPLANOPAPP; // 0xA8
		::RPG::CustomRP::CapsuleOcclusion* OHPOJAJAABM; // 0xB0
		::System::String* LKKIDIGPODD; // 0xB8
		::System::String* IKONEPBNKAK; // 0xC0
		::NEOCEOCDEAF* CPLHJNGFBPI; // 0xC8
		::OKPHELJKCFE* NOGMEJIFLKG; // 0xD0
		::RPG::GameCore::LevelNPCPossessionInfo* IKEFNLNEDHG; // 0xD8
		::System::Action* OHALDCMLCGD; // 0xE0
		::RPG::Client::RootMotionHandler* ALKMPEBIMHH; // 0xE8
		::System::Action* OOILHGPFKFI; // 0xF0
		::System::Action* LEEEFJLOCBA; // 0xF8
		::RPG::Client::CharacterShaderPropertyTransition* GMKNPOLBNDL; // 0x100
		::UnityEngine::CapsuleCollider* PLDHIKGPHKG; // 0x108
		::IJEKJNBKPJN_NGDMBOHNGIA* AJNGECOMNCP; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* KOAMHEEBCEM; // 0x118
		::UnityEngine::GameObject* FCGBJLKJIML; // 0x120
		::RPG::Client::Promises::Promise* EDPKLGPGPHP; // 0x128
		::UnityEngine::Transform* GKFGIBOKBNA; // 0x130
		::System::Collections::Generic::List_1<::System::Object*>* KKIDEPMAOPC; // 0x138
		::System::Collections::Generic::HashSet_1<::System::String*>* OBEELKEPMIB; // 0x140
		::RPG::Client::AssemNPC* EJJEEJENLDA; // 0x148
		::RPG::Client::Promises::Promise* DLABBOIOJHM; // 0x150
		::IJEKJNBKPJN_MeshLodState DEBLDGGNAOK; // 0x158
		::System::Boolean MDEMEIIFKNA; // 0x15C
		::System::Boolean PICDHEHHIHD; // 0x15D
		::System::Boolean AGLBOKHNPCH; // 0x15E
		::System::Byte _padding0[0x1];
		::System::Single BFBCJKGHDBK; // 0x160
		::System::Boolean LJLIEPHEBEM; // 0x164
		::System::Boolean PJOBJLOMAEO; // 0x165
		::System::Boolean NPEMLPCDKGK; // 0x166
		::System::Boolean NFHCFAGJOOK; // 0x167
		::System::Int32 AALKEOFKNGD; // 0x168
		::System::Single NIEDCECMIJF; // 0x16C
		::System::Single EELMOBKJOIG; // 0x170
		::UnityEngine::Vector3 LOLMFMLEEMF; // 0x174
		::UnityEngine::Bounds KMNGINGCEAA; // 0x180
		::System::UInt32 NFHCLBBACEM; // 0x198
		::RPG::Client::EAssemblyNPC DKHKDBJPNJA; // 0x19C
		::System::Int32 HKCLOFPACEA; // 0x1A0
		::System::Single EHOIDNKOPEJ; // 0x1A4
		::System::Boolean NEPADOGCPCA; // 0x1A8
		::System::Boolean AKALCNGFMMN; // 0x1A9
		::System::Boolean IKJBOMPBNCO; // 0x1AA
		::System::Boolean GCBPHOGOBIK; // 0x1AB
		::UnityEngine::Bounds FDCHJBMNDIG; // 0x1AC
		static ::RPG::Client::RPGProfilerMarker** StaticGet_AGDADAPFPBE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IJEKJNBKPJN")->GetStaticField(0x607D0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CKAKLNIOGMD()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IJEKJNBKPJN")->GetStaticField(0x607D8);
		}

		static ::System::String** StaticGet_KHJLCBEHBKP()
		{
			return (::System::String**)UnitySDK::FromName("", "IJEKJNBKPJN")->GetStaticField(0x607E0);
		}

		static ::System::Int32* StaticGet_PCJKODHLJDH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IJEKJNBKPJN")->GetStaticField(0x149D0);
		}

		// static const ::System::Object KIJHHAKOFJB; // 0x0
		// static const ::System::String* PDAIEIIIBNL; // 0x0
		// static const ::System::Object FFIIOOMAHIE; // 0x0
		// static const ::System::Object OMPECPKKMDO; // 0x0
		// static const ::System::Object MKLINEEIPJE; // 0x0
		// static const ::System::Object NOOHOHFMMGH; // 0x0
		// static const ::System::Object HGMKIECNDNG; // 0x0
		// static const ::System::Object FDGEKFKFMKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJEKJNBKPJN_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void LJGFPKIBBEJ(::RPG::GameCore::ColliderConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderConfig*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LJGFPKIBBEJ_OFFSET))(this, a1);
		}

		::System::Void EDPFKFFEEFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_EDPFKFFEEFD_OFFSET))(this);
		}

		::System::Void PJDOGBOLNID(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_PJDOGBOLNID_OFFSET))(this, a1);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::Client::AssemNPC* a1, ::RPG::GameCore::LevelNPCPossessionInfo* a2, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a3, ::RPG::Client::EAssemblyNPC a4, ::System::String* a5, ::UnityEngine::Vector3 a6, ::System::UInt32 a7, ::System::Action* a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssemNPC*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*, ::RPG::Client::EAssemblyNPC, ::System::String*, ::UnityEngine::Vector3, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void AFLBCNKMKDG(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_AFLBCNKMKDG_OFFSET))(this, a1, a2);
		}

		::System::Void NOLANEBJBAO(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NOLANEBJBAO_OFFSET))(this, a1, a2);
		}

		::System::Void AAEKJNLAJEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_AAEKJNLAJEC_OFFSET))(this);
		}

		::System::Void OJEPPFAFANM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_OJEPPFAFANM_OFFSET))(this, a1);
		}

		::System::Void HOMHLNOFNDL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_HOMHLNOFNDL_OFFSET))(this, a1);
		}

		::System::Void DOMFDGOBDCG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_DOMFDGOBDCG_OFFSET))(this, a1);
		}

		::System::Void DKKAHMJFHOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_DKKAHMJFHOP_OFFSET))(this);
		}

		::System::Void PBKLIEGIOMC(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_PBKLIEGIOMC_OFFSET))(this, a1, a2);
		}

		::System::Void KHIMHKPIMGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_KHIMHKPIMGJ_OFFSET))(this);
		}

		::System::Void AHKEGKNPBPJ(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_AHKEGKNPBPJ_OFFSET))(this, a1, a2);
		}

		::System::Void MGCJADOONGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_MGCJADOONGI_OFFSET))(this, a1);
		}

		::System::Void JNMOPOHALBK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_JNMOPOHALBK_OFFSET))(this, a1);
		}

		::System::Single DANGLDJGPCC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_DANGLDJGPCC_OFFSET))(this);
		}

		::System::Void NOFHFKNDBAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NOFHFKNDBAO_OFFSET))(this);
		}

		::System::Void LNGDBLEKGHG(::System::Action* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LNGDBLEKGHG_OFFSET))(this, a1, a2);
		}

		::System::Void BNIGDHDOIFE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_BNIGDHDOIFE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LFIMPGJLFDP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LFIMPGJLFDP_OFFSET))(this, a1);
		}

		::System::Void OGMDDPBHHKH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_OGMDDPBHHKH_OFFSET))(this, a1);
		}

		::System::Void OHADKCIMFOF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_OHADKCIMFOF_OFFSET))(this, a1);
		}

		::System::Void FOBABCJLJFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_FOBABCJLJFB_OFFSET))(this);
		}

		::System::Void MDBBGMFLPOO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_MDBBGMFLPOO_OFFSET))(this, a1);
		}

		::System::Void FPFOGPIJDHG(::UnityEngine::Material* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_FPFOGPIJDHG_OFFSET))(this, a1, a2);
		}

		::System::Void HLJPFHGEEEL(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_HLJPFHGEEEL_OFFSET))(this, a1, a2);
		}

		::System::Void JDBDBJDICLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_JDBDBJDICLJ_OFFSET))(this);
		}

		::System::Void FODMGLEHMEG(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_FODMGLEHMEG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FODMGLEHMEG_1(::RPG::Client::AssetsPathDict* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetsPathDict*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_FODMGLEHMEG_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LJGFPKIBBEJ_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LJGFPKIBBEJ_1_OFFSET))(this);
		}

		::System::Void ACEGHPFDDLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_ACEGHPFDDLM_OFFSET))(this);
		}

		::System::Void IJHJDJAINON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_IJHJDJAINON_OFFSET))(this);
		}

		::System::Void AHCMKHGAGHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_AHCMKHGAGHA_OFFSET))(this);
		}

		::System::Void ECCJCGOJDJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_ECCJCGOJDJB_OFFSET))(this);
		}

		::System::Void MILPGBJHMKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_MILPGBJHMKF_OFFSET))(this);
		}

		::System::Void JEDNINEAPNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_JEDNINEAPNP_OFFSET))(this);
		}

		::System::Void OBHNJHGHOIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_OBHNJHGHOIE_OFFSET))(this);
		}

		::System::Void GFIJGKKMMIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_GFIJGKKMMIP_OFFSET))(this, a1);
		}

		::System::Void OPPFHECNMJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_OPPFHECNMJO_OFFSET))(this);
		}

		::System::Void GOCDEAKPODA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_GOCDEAKPODA_OFFSET))(this);
		}

		::System::Void HNKFJJMKPOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_HNKFJJMKPOK_OFFSET))(this);
		}

		::System::Void GLDECNONJCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_GLDECNONJCF_OFFSET))(this);
		}

		::System::Void HNPHEAAJKFA(::Il2CppArray<::System::UInt64>* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt64>*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_HNPHEAAJKFA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* PECINLIBCMJ(::System::UInt64 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_PECINLIBCMJ_OFFSET))(this, a1);
		}

		::System::Void DOGHIALOIKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_DOGHIALOIKG_OFFSET))(this);
		}

		::System::Void LLBCGFHAEOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LLBCGFHAEOM_OFFSET))(this);
		}

		::System::Void MDAPIJGIOJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_MDAPIJGIOJI_OFFSET))(this);
		}

		::System::Void FCOBBMDCKDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_FCOBBMDCKDG_OFFSET))(this);
		}

		::System::Void LIODJEEPBNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LIODJEEPBNC_OFFSET))(this);
		}

		::System::String* MIKFNEOIHPC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_MIKFNEOIHPC_OFFSET))(this);
		}

		::System::Boolean KMFNKDFNGGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_KMFNKDFNGGM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IKPHBLAFALN()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_IKPHBLAFALN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OMMMCPEMGLB()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_OMMMCPEMGLB_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* LEACFMFOBAO()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LEACFMFOBAO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* HJEJBEMPMCK()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_HJEJBEMPMCK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NAFBHLJINIH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NAFBHLJINIH_OFFSET))(this);
		}

		::System::Void MLAGKKDIPIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_MLAGKKDIPIL_OFFSET))(this);
		}

		::System::Void DEHIOKLHFPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_DEHIOKLHFPP_OFFSET))(this);
		}

		::System::Void NGBACMKLIKD(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGBACMKLIKD_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EntityLoadState get_LoadState()
		{
			return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_GET_LOADSTATE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetModelGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_GETMODELGO_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetModelArt()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_GETMODELART_OFFSET))(this);
		}

		::RPG::Client::MockAnimator* get_MockAnimator()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_GET_MOCKANIMATOR_OFFSET))(this);
		}

		::System::Single GNJDGLOCGGO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_GNJDGLOCGGO_OFFSET))(this);
		}

		::System::String* MGLLPAJCDGB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_MGLLPAJCDGB_OFFSET))(this);
		}

		::System::Boolean INFBNFDPKAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_INFBNFDPKAF_OFFSET))(this);
		}

		::RPG::Client::EAssemblyNPC NAPPEAKHCAD()
		{
			return ((::RPG::Client::EAssemblyNPC(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NAPPEAKHCAD_OFFSET))(this);
		}

		::System::Int32 NAKHEIAKAEO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NAKHEIAKAEO_OFFSET))(this);
		}

		::RPG::Client::AttachPointMapping* MBOGKNKADJC()
		{
			return ((::RPG::Client::AttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_MBOGKNKADJC_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 KFLFGCPIBAJ(::Il2CppArray<::System::Single>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_KFLFGCPIBAJ_OFFSET))(a1, a2);
		}

		::System::Void ECBAJNDAKHL(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_ECBAJNDAKHL_OFFSET))(this, a1);
		}

		::System::Void LMGNIGBAJBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LMGNIGBAJBN_OFFSET))(this);
		}

		::RPG::Client::RootMotionHandler* LKLKCMHOCKD()
		{
			return ((::RPG::Client::RootMotionHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LKLKCMHOCKD_OFFSET))(this);
		}

		::System::Void CBAGHIMPPJP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_CBAGHIMPPJP_OFFSET))(this, a1);
		}

		::System::Void KOMIKOGFAMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_KOMIKOGFAMD_OFFSET))(this);
		}

		::System::Void GJMCDOHMOIN(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_GJMCDOHMOIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ECJBALGEJGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_ECJBALGEJGG_OFFSET))(this);
		}

		::System::Void MFFHOAACOPA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_MFFHOAACOPA_OFFSET))(this, a1);
		}

		::System::Int32 LEFNHNHCJNK(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LEFNHNHCJNK_OFFSET))(this, a1);
		}

		::System::Void FPPPGPLJOHK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_FPPPGPLJOHK_OFFSET))(this, a1);
		}

		::System::Void NHOJFIMKLJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NHOJFIMKLJC_OFFSET))(this);
		}

		::System::Void ENNABGBJPLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_ENNABGBJPLB_OFFSET))(this);
		}

		::System::Void EMONKEKHLJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_EMONKEKHLJK_OFFSET))(this);
		}

		::System::Void BKJMGLLJGHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_BKJMGLLJGHA_OFFSET))(this);
		}

		::System::Void ILLCJDDJFOG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_ILLCJDDJFOG_OFFSET))(this, a1);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_KGJAMKFPOAB_OFFSET))(this);
		}

	};
