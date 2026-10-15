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
namespace System { template <typename T> class Action_1; }
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

#define IJEKJNBKPJN_AAEKJNLAJEC_OFFSET UNITYSDK_OFFSET(0x16450CD0)
#define IJEKJNBKPJN_ACEGHPFDDLM_OFFSET UNITYSDK_OFFSET(0x16453FD0)
#define IJEKJNBKPJN_AFLBCNKMKDG_OFFSET UNITYSDK_OFFSET(0x16450AE0)
#define IJEKJNBKPJN_AHCMKHGAGHA_OFFSET UNITYSDK_OFFSET(0x16453270)
#define IJEKJNBKPJN_AHKEGKNPBPJ_OFFSET UNITYSDK_OFFSET(0x16451770)
#define IJEKJNBKPJN_BKJMGLLJGHA_OFFSET UNITYSDK_OFFSET(0x16452480)
#define IJEKJNBKPJN_BNIGDHDOIFE_OFFSET UNITYSDK_OFFSET(0x164521B0)
#define IJEKJNBKPJN_CBAGHIMPPJP_OFFSET UNITYSDK_OFFSET(0x16457800)
#define IJEKJNBKPJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x164585D0)
#define IJEKJNBKPJN_CTOR_OFFSET UNITYSDK_OFFSET(0x164584D0)
#define IJEKJNBKPJN_DANGLDJGPCC_OFFSET UNITYSDK_OFFSET(0x16452060)
#define IJEKJNBKPJN_DEHIOKLHFPP_OFFSET UNITYSDK_OFFSET(0x1644F330)
#define IJEKJNBKPJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1644E0A0)
#define IJEKJNBKPJN_DKKAHMJFHOP_OFFSET UNITYSDK_OFFSET(0x1644FFE0)
#define IJEKJNBKPJN_DOGHIALOIKG_OFFSET UNITYSDK_OFFSET(0x1644E5C0)
#define IJEKJNBKPJN_DOMFDGOBDCG_OFFSET UNITYSDK_OFFSET(0x16451030)
#define IJEKJNBKPJN_ECBAJNDAKHL_OFFSET UNITYSDK_OFFSET(0x16456F30)
#define IJEKJNBKPJN_ECCJCGOJDJB_OFFSET UNITYSDK_OFFSET(0x16454170)
#define IJEKJNBKPJN_ECJBALGEJGG_OFFSET UNITYSDK_OFFSET(0x1644F480)
#define IJEKJNBKPJN_EDPFKFFEEFD_OFFSET UNITYSDK_OFFSET(0x1644E470)
#define IJEKJNBKPJN_EMONKEKHLJK_OFFSET UNITYSDK_OFFSET(0x164580F0)
#define IJEKJNBKPJN_ENNABGBJPLB_OFFSET UNITYSDK_OFFSET(0x16457C90)
#define IJEKJNBKPJN_FCOBBMDCKDG_OFFSET UNITYSDK_OFFSET(0x1644E7A0)
#define IJEKJNBKPJN_FOBABCJLJFB_OFFSET UNITYSDK_OFFSET(0x16450890)
#define IJEKJNBKPJN_FODMGLEHMEG_1_OFFSET UNITYSDK_OFFSET(0x16454980)
#define IJEKJNBKPJN_FODMGLEHMEG_OFFSET UNITYSDK_OFFSET(0x164548D0)
#define IJEKJNBKPJN_FPFOGPIJDHG_OFFSET UNITYSDK_OFFSET(0x16453010)
#define IJEKJNBKPJN_FPPPGPLJOHK_OFFSET UNITYSDK_OFFSET(0x16457C10)
#define IJEKJNBKPJN_GETMODELART_OFFSET UNITYSDK_OFFSET(0x16456D30)
#define IJEKJNBKPJN_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x16456CE0)
#define IJEKJNBKPJN_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x16456C80)
#define IJEKJNBKPJN_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x164561D0)
#define IJEKJNBKPJN_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0x1644F720)
#define IJEKJNBKPJN_GJMCDOHMOIN_OFFSET UNITYSDK_OFFSET(0x16455030)
#define IJEKJNBKPJN_GLDECNONJCF_OFFSET UNITYSDK_OFFSET(0x16455620)
#define IJEKJNBKPJN_GNJDGLOCGGO_OFFSET UNITYSDK_OFFSET(0x16456D80)
#define IJEKJNBKPJN_GOCDEAKPODA_OFFSET UNITYSDK_OFFSET(0x164553F0)
#define IJEKJNBKPJN_HJEJBEMPMCK_OFFSET UNITYSDK_OFFSET(0x16456300)
#define IJEKJNBKPJN_HLJPFHGEEEL_OFFSET UNITYSDK_OFFSET(0x16453870)
#define IJEKJNBKPJN_HNKFJJMKPOK_OFFSET UNITYSDK_OFFSET(0x16455380)
#define IJEKJNBKPJN_HNPHEAAJKFA_OFFSET UNITYSDK_OFFSET(0x16454EA0)
#define IJEKJNBKPJN_HOMHLNOFNDL_OFFSET UNITYSDK_OFFSET(0x16450F90)
#define IJEKJNBKPJN_IJHJDJAINON_OFFSET UNITYSDK_OFFSET(0x164531C0)
#define IJEKJNBKPJN_IKPHBLAFALN_OFFSET UNITYSDK_OFFSET(0x16452C80)
#define IJEKJNBKPJN_ILLCJDDJFOG_OFFSET UNITYSDK_OFFSET(0x16457850)
#define IJEKJNBKPJN_INFBNFDPKAF_OFFSET UNITYSDK_OFFSET(0x16456E40)
#define IJEKJNBKPJN_JDBDBJDICLJ_OFFSET UNITYSDK_OFFSET(0x16453AC0)
#define IJEKJNBKPJN_JEDNINEAPNP_OFFSET UNITYSDK_OFFSET(0x16454410)
#define IJEKJNBKPJN_JNMOPOHALBK_OFFSET UNITYSDK_OFFSET(0x16451D60)
#define IJEKJNBKPJN_KFLFGCPIBAJ_OFFSET UNITYSDK_OFFSET(0x16456E80)
#define IJEKJNBKPJN_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x16452940)
#define IJEKJNBKPJN_KHIMHKPIMGJ_OFFSET UNITYSDK_OFFSET(0x164514F0)
#define IJEKJNBKPJN_KMFNKDFNGGM_OFFSET UNITYSDK_OFFSET(0x1644F290)
#define IJEKJNBKPJN_KOMIKOGFAMD_OFFSET UNITYSDK_OFFSET(0x164554B0)
#define IJEKJNBKPJN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1644F910)
#define IJEKJNBKPJN_LEACFMFOBAO_OFFSET UNITYSDK_OFFSET(0x16456010)
#define IJEKJNBKPJN_LEFNHNHCJNK_OFFSET UNITYSDK_OFFSET(0x16457B20)
#define IJEKJNBKPJN_LFIMPGJLFDP_OFFSET UNITYSDK_OFFSET(0x16452410)
#define IJEKJNBKPJN_LIODJEEPBNC_OFFSET UNITYSDK_OFFSET(0x1644E950)
#define IJEKJNBKPJN_LJGFPKIBBEJ_1_OFFSET UNITYSDK_OFFSET(0x16453C30)
#define IJEKJNBKPJN_LJGFPKIBBEJ_OFFSET UNITYSDK_OFFSET(0x1644FCD0)
#define IJEKJNBKPJN_LKLKCMHOCKD_OFFSET UNITYSDK_OFFSET(0x164577F0)
#define IJEKJNBKPJN_LLBCGFHAEOM_OFFSET UNITYSDK_OFFSET(0x1644E600)
#define IJEKJNBKPJN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x16450180)
#define IJEKJNBKPJN_LMGNIGBAJBN_OFFSET UNITYSDK_OFFSET(0x16455970)
#define IJEKJNBKPJN_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0x16452360)
#define IJEKJNBKPJN_MBOGKNKADJC_OFFSET UNITYSDK_OFFSET(0x16456E70)
#define IJEKJNBKPJN_MDAPIJGIOJI_OFFSET UNITYSDK_OFFSET(0x1644E650)
#define IJEKJNBKPJN_MDBBGMFLPOO_OFFSET UNITYSDK_OFFSET(0x16452D50)
#define IJEKJNBKPJN_MFFHOAACOPA_OFFSET UNITYSDK_OFFSET(0x16457E00)
#define IJEKJNBKPJN_MGCJADOONGI_OFFSET UNITYSDK_OFFSET(0x16451E80)
#define IJEKJNBKPJN_MGLLPAJCDGB_OFFSET UNITYSDK_OFFSET(0x16456E30)
#define IJEKJNBKPJN_MIKFNEOIHPC_OFFSET UNITYSDK_OFFSET(0x164506F0)
#define IJEKJNBKPJN_MILPGBJHMKF_OFFSET UNITYSDK_OFFSET(0x16454270)
#define IJEKJNBKPJN_MLAGKKDIPIL_OFFSET UNITYSDK_OFFSET(0x164569A0)
#define IJEKJNBKPJN_NAFBHLJINIH_OFFSET UNITYSDK_OFFSET(0x16456800)
#define IJEKJNBKPJN_NAKHEIAKAEO_OFFSET UNITYSDK_OFFSET(0x16456E60)
#define IJEKJNBKPJN_NAPPEAKHCAD_OFFSET UNITYSDK_OFFSET(0x16456E50)
#define IJEKJNBKPJN_NGBACMKLIKD_OFFSET UNITYSDK_OFFSET(0x16456AA0)
#define IJEKJNBKPJN_NHOJFIMKLJC_OFFSET UNITYSDK_OFFSET(0x16458080)
#define IJEKJNBKPJN_NOFHFKNDBAO_OFFSET UNITYSDK_OFFSET(0x16452130)
#define IJEKJNBKPJN_NOLANEBJBAO_OFFSET UNITYSDK_OFFSET(0x16450C30)
#define IJEKJNBKPJN_OBHNJHGHOIE_OFFSET UNITYSDK_OFFSET(0x164546E0)
#define IJEKJNBKPJN_OGMDDPBHHKH_OFFSET UNITYSDK_OFFSET(0x16452B40)
#define IJEKJNBKPJN_OHADKCIMFOF_OFFSET UNITYSDK_OFFSET(0x1644FF20)
#define IJEKJNBKPJN_OJEPPFAFANM_OFFSET UNITYSDK_OFFSET(0x16450D20)
#define IJEKJNBKPJN_OMMMCPEMGLB_OFFSET UNITYSDK_OFFSET(0x16455CF0)
#define IJEKJNBKPJN_OPPFHECNMJO_OFFSET UNITYSDK_OFFSET(0x16455300)
#define IJEKJNBKPJN_PBKLIEGIOMC_OFFSET UNITYSDK_OFFSET(0x16451090)
#define IJEKJNBKPJN_PECINLIBCMJ_OFFSET UNITYSDK_OFFSET(0x16454DE0)
#define IJEKJNBKPJN_PJDOGBOLNID_OFFSET UNITYSDK_OFFSET(0x1644FE50)
#define IJEKJNBKPJN_TICK_OFFSET UNITYSDK_OFFSET(0x1644ECC0)
#define IJEKJNBKPJN__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x16450120)

inline static constexpr unsigned int IJEKJNBKPJN_TypeDefinitionIndex = 57144;

	class IJEKJNBKPJN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* KKIDEPMAOPC; // 0x18
		::RPG::Client::RootMotionHandler* ALKMPEBIMHH; // 0x20
		::RPG::Client::CharacterShaderPropertyTransition* GMKNPOLBNDL; // 0x28
		::RPG::Client::Promises::Promise* EDPKLGPGPHP; // 0x30
		::RPG::Client::Promises::Promise* LPOMLIBIIFG; // 0x38
		::System::String* IKONEPBNKAK; // 0x40
		::RPG::GameCore::LodTemplate* OFDBCCKEJNC; // 0x48
		::RPG::Client::Promises::Promise* DLABBOIOJHM; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HJDBFDAMKGA; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* AJGGGLMIAGP; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* KOAMHEEBCEM; // 0x68
		::System::Action* FBMAMCJJNGD; // 0x70
		::NEOCEOCDEAF* CPLHJNGFBPI; // 0x78
		::RPG::Client::Promises::Promise* OGCGOLDDMJF; // 0x80
		::RPG::Client::MockAnimator* CBPLANOPAPP; // 0x88
		::UnityEngine::CapsuleCollider* PLDHIKGPHKG; // 0x90
		::System::Action_1<::UnityEngine::GameObject*>* ADIEANHBNCH; // 0x98
		::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* PCBOGEDJPDC; // 0xA0
		::UnityEngine::Transform* GKFGIBOKBNA; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MCJPJBHPMLN; // 0xB0
		::RPG::Client::Promises::Promise* PDDAMDMEKLL; // 0xB8
		::RPG::Client::AttachPointMapping* JHKPNLBBHII; // 0xC0
		::Il2CppArray<::System::Object*>* DEAGOMKCHBA; // 0xC8
		::System::String* OMIGKGPDBEB; // 0xD0
		::System::String* LKKIDIGPODD; // 0xD8
		::System::Collections::Generic::HashSet_1<::System::String*>* OBEELKEPMIB; // 0xE0
		::RPG::GameCore::LevelNPCPossessionInfo* IKEFNLNEDHG; // 0xE8
		::UnityEngine::RuntimeAnimatorController* AJLHCGPNHDP; // 0xF0
		::System::Action_1<::IJEKJNBKPJN*>* LEEEFJLOCBA; // 0xF8
		::System::Action* OHALDCMLCGD; // 0x100
		::UnityEngine::GameObject* HMKIDOJEMOD; // 0x108
		::System::Action* OOILHGPFKFI; // 0x110
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* NEMJAFALHIE; // 0x118
		::IJEKJNBKPJN_NGDMBOHNGIA* AJNGECOMNCP; // 0x120
		::UnityEngine::Transform* BCHMBHEMFAK; // 0x128
		::OKPHELJKCFE* NOGMEJIFLKG; // 0x130
		::RPG::Client::AssemNPC* EJJEEJENLDA; // 0x138
		::RPG::CustomRP::CapsuleOcclusion* OHPOJAJAABM; // 0x140
		::UnityEngine::GameObject* FCGBJLKJIML; // 0x148
		::System::Action_1<::System::Boolean>* DEOAJCAJNAG; // 0x150
		::System::UInt32 NFHCLBBACEM; // 0x158
		::System::Int32 HKCLOFPACEA; // 0x15C
		::System::Single EELMOBKJOIG; // 0x160
		::UnityEngine::Vector3 LOLMFMLEEMF; // 0x164
		::System::Single BFBCJKGHDBK; // 0x170
		::System::Boolean NFHCFAGJOOK; // 0x174
		::System::Boolean MDEMEIIFKNA; // 0x175
		::System::Boolean NPEMLPCDKGK; // 0x176
		::System::Boolean NEPADOGCPCA; // 0x177
		::System::Single EHOIDNKOPEJ; // 0x178
		::System::Single NIEDCECMIJF; // 0x17C
		::UnityEngine::Bounds KMNGINGCEAA; // 0x180
		::System::Boolean PJOBJLOMAEO; // 0x198
		::System::Boolean IKJBOMPBNCO; // 0x199
		::System::Boolean AGLBOKHNPCH; // 0x19A
		::System::Boolean PICDHEHHIHD; // 0x19B
		::UnityEngine::Bounds FDCHJBMNDIG; // 0x19C
		::System::Boolean GCBPHOGOBIK; // 0x1B4
		::System::Boolean LJLIEPHEBEM; // 0x1B5
		::System::Boolean AKALCNGFMMN; // 0x1B6
		::System::Byte _padding0[0x1];
		::RPG::Client::EAssemblyNPC DKHKDBJPNJA; // 0x1B8
		::IJEKJNBKPJN_MeshLodState DEBLDGGNAOK; // 0x1BC
		::System::Int32 AALKEOFKNGD; // 0x1C0
		static ::RPG::Client::RPGProfilerMarker** StaticGet_AGDADAPFPBE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IJEKJNBKPJN")->GetStaticField(0x62C20);
		}

		static ::System::String** StaticGet_KHJLCBEHBKP()
		{
			return (::System::String**)UnitySDK::FromName("", "IJEKJNBKPJN")->GetStaticField(0x62C28);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CKAKLNIOGMD()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IJEKJNBKPJN")->GetStaticField(0x62C30);
		}

		static ::System::Int32* StaticGet_PCJKODHLJDH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IJEKJNBKPJN")->GetStaticField(0x14810);
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

		::System::Void LMCEDCHJKFF(::RPG::Client::AssemNPC* a1, ::RPG::GameCore::LevelNPCPossessionInfo* a2, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a3, ::RPG::Client::EAssemblyNPC a4, ::System::String* a5, ::UnityEngine::Vector3 a6, ::System::UInt32 a7, ::System::Action_1<::IJEKJNBKPJN*>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssemNPC*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*, ::RPG::Client::EAssemblyNPC, ::System::String*, ::UnityEngine::Vector3, ::System::UInt32, ::System::Action_1<::IJEKJNBKPJN*>*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
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

		::System::Void NGBACMKLIKD(::System::String* a1, ::System::Action_1<::KLKMCNOECAL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::KLKMCNOECAL*>*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGBACMKLIKD_OFFSET))(this, a1, a2);
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

		::System::Void CBAGHIMPPJP(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_CBAGHIMPPJP_OFFSET))(this, a1);
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
