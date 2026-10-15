#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AutoGenCellType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ECGLPNCBKDM.h"
#include "unitysdk/JEDLNCLNLEE.h"
#include "unitysdk/OKLBEPJCBJG.h"
class AHCBAPLJPKB;
class DGHEDDKAKOF;
class KMKKJDJPMOF;
class LPBNBKGHOGA;
class MDLBOFGMBKH;
namespace RPG::GameCore { class BlockGrassData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageCaptureAliasLookup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define KMKKJDJPMOF_AABAHIPCCIJ_OFFSET UNITYSDK_OFFSET(0xB55E3F0)
#define KMKKJDJPMOF_ABHJIABDFFH_OFFSET UNITYSDK_OFFSET(0xB564540)
#define KMKKJDJPMOF_ADFIKOFCHEG_OFFSET UNITYSDK_OFFSET(0xB563B00)
#define KMKKJDJPMOF_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB562570)
#define KMKKJDJPMOF_CCIMBJOMCPJ_1_OFFSET UNITYSDK_OFFSET(0xB560A40)
#define KMKKJDJPMOF_CCIMBJOMCPJ_OFFSET UNITYSDK_OFFSET(0xB560960)
#define KMKKJDJPMOF_CCTOR_OFFSET UNITYSDK_OFFSET(0xB564920)
#define KMKKJDJPMOF_CINNPHEAKDA_OFFSET UNITYSDK_OFFSET(0xB5639A0)
#define KMKKJDJPMOF_COHADPKHAGP_OFFSET UNITYSDK_OFFSET(0xB5638E0)
#define KMKKJDJPMOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB55D9B0)
#define KMKKJDJPMOF_DDNKCEAELOE_OFFSET UNITYSDK_OFFSET(0xB560B60)
#define KMKKJDJPMOF_DEPCIFNDDAL_OFFSET UNITYSDK_OFFSET(0xB564310)
#define KMKKJDJPMOF_DIGNADCDGML_OFFSET UNITYSDK_OFFSET(0xB563A40)
#define KMKKJDJPMOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB564600)
#define KMKKJDJPMOF_DMGOEEIJEJH_OFFSET UNITYSDK_OFFSET(0xB55F700)
#define KMKKJDJPMOF_DPNKMMKJAJH_OFFSET UNITYSDK_OFFSET(0xB561220)
#define KMKKJDJPMOF_EJAPILGGFFH_OFFSET UNITYSDK_OFFSET(0xB561B00)
#define KMKKJDJPMOF_ELHJKMLOFIB_OFFSET UNITYSDK_OFFSET(0xB563C50)
#define KMKKJDJPMOF_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB564830)
#define KMKKJDJPMOF_GHGCDDIJKCM_OFFSET UNITYSDK_OFFSET(0xB560EF0)
#define KMKKJDJPMOF_GNBIDLADEMJ_OFFSET UNITYSDK_OFFSET(0xB5619D0)
#define KMKKJDJPMOF_GNFDKFFFBEN_OFFSET UNITYSDK_OFFSET(0xB562170)
#define KMKKJDJPMOF_HBDJLHHNDNE_OFFSET UNITYSDK_OFFSET(0xB55ECB0)
#define KMKKJDJPMOF_HIJADDDKOBK_OFFSET UNITYSDK_OFFSET(0xB561610)
#define KMKKJDJPMOF_HLIKDNBGPBA_OFFSET UNITYSDK_OFFSET(0xB55F0B0)
#define KMKKJDJPMOF_HPGEMLOHEIB_OFFSET UNITYSDK_OFFSET(0xB5640C0)
#define KMKKJDJPMOF_IADPJMKBNHA_OFFSET UNITYSDK_OFFSET(0xB563830)
#define KMKKJDJPMOF_IFBEABNMMOD_OFFSET UNITYSDK_OFFSET(0xB563FA0)
#define KMKKJDJPMOF_IGEMOJJIGOI_OFFSET UNITYSDK_OFFSET(0xB5623B0)
#define KMKKJDJPMOF_IIMFCMGCJGE_OFFSET UNITYSDK_OFFSET(0xB55E0E0)
#define KMKKJDJPMOF_JAFNIICFBDH_OFFSET UNITYSDK_OFFSET(0xB55EFA0)
#define KMKKJDJPMOF_JAOHNFPFFDI_OFFSET UNITYSDK_OFFSET(0xB55E330)
#define KMKKJDJPMOF_JGFEPFFCCEO_OFFSET UNITYSDK_OFFSET(0xB5644C0)
#define KMKKJDJPMOF_JIAOPGEEAGN_OFFSET UNITYSDK_OFFSET(0xB5600D0)
#define KMKKJDJPMOF_JLIJBECFKJD_OFFSET UNITYSDK_OFFSET(0xB560060)
#define KMKKJDJPMOF_KDNFIPDBNNJ_OFFSET UNITYSDK_OFFSET(0xB560F80)
#define KMKKJDJPMOF_KDNONNNPAGL_OFFSET UNITYSDK_OFFSET(0xB5645C0)
#define KMKKJDJPMOF_LNANKMEOBMO_OFFSET UNITYSDK_OFFSET(0xB563E90)
#define KMKKJDJPMOF_LPKCJPKAGGH_1_OFFSET UNITYSDK_OFFSET(0xB55EB40)
#define KMKKJDJPMOF_LPKCJPKAGGH_OFFSET UNITYSDK_OFFSET(0xB55E290)
#define KMKKJDJPMOF_MEIJIFEDKPN_OFFSET UNITYSDK_OFFSET(0xB564650)
#define KMKKJDJPMOF_MEODFKNFKEN_OFFSET UNITYSDK_OFFSET(0xB562B20)
#define KMKKJDJPMOF_MGIDGACPCKD_OFFSET UNITYSDK_OFFSET(0xB55F3A0)
#define KMKKJDJPMOF_MKLNHEHCNOM_OFFSET UNITYSDK_OFFSET(0xB560CD0)
#define KMKKJDJPMOF_NABNHENIMCK_1_OFFSET UNITYSDK_OFFSET(0xB5620A0)
#define KMKKJDJPMOF_NABNHENIMCK_OFFSET UNITYSDK_OFFSET(0xB561580)
#define KMKKJDJPMOF_NHLCFJICCDD_OFFSET UNITYSDK_OFFSET(0xB5609C0)
#define KMKKJDJPMOF_NKDMJFAGKBM_OFFSET UNITYSDK_OFFSET(0xB55FA60)
#define KMKKJDJPMOF_NMMEJOPGNEC_OFFSET UNITYSDK_OFFSET(0xB55E4D0)
#define KMKKJDJPMOF_OJHACPCCNON_OFFSET UNITYSDK_OFFSET(0xB563E40)
#define KMKKJDJPMOF_OJJIKBADNBK_OFFSET UNITYSDK_OFFSET(0xB5630D0)
#define KMKKJDJPMOF_OMDOBCHCLGD_1_OFFSET UNITYSDK_OFFSET(0xB5643F0)
#define KMKKJDJPMOF_OMDOBCHCLGD_OFFSET UNITYSDK_OFFSET(0xB5633C0)
#define KMKKJDJPMOF_OMFHBLBAEPO_OFFSET UNITYSDK_OFFSET(0xB5621F0)
#define KMKKJDJPMOF_PBOLIFDNOAC_OFFSET UNITYSDK_OFFSET(0xB560260)
#define KMKKJDJPMOF_PCBDFNEMANE_OFFSET UNITYSDK_OFFSET(0xB561A80)

	class KMKKJDJPMOF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageCaptureAliasLookup*>* LGDBCCELCMO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::AHCBAPLJPKB*>* AELGCIMKLNE; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::DGHEDDKAKOF*>* AHNLOPFMLAH; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageCaptureAliasLookup*>* EPNCIPLJDGG; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* KNEMAJKGDHM; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::LPBNBKGHOGA*>* PANACPGGDDJ; // 0x38
		::System::Text::StringBuilder* HAOFFAJOJLL; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* EPPFOALFJJO; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BlockGrassData*>* JBLPAONGMDL; // 0x50
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_PGKHBIPPNAP()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "KMKKJDJPMOF")->GetStaticField(0x605C0);
		}

		static ::KMKKJDJPMOF** StaticGet_EMLNOINPICJ()
		{
			return (::KMKKJDJPMOF**)UnitySDK::FromName("", "KMKKJDJPMOF")->GetStaticField(0x605C8);
		}

		static ::System::Int32* StaticGet_KBEAKBKHMPH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KMKKJDJPMOF")->GetStaticField(0x14970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMKKJDJPMOF_CCTOR_OFFSET))();
		}

		::System::String* IIMFCMGCJGE(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_IIMFCMGCJGE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::LPBNBKGHOGA* LPKCJPKAGGH(::LPBNBKGHOGA* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::LPBNBKGHOGA*(*)(::PVOID, ::LPBNBKGHOGA*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_LPKCJPKAGGH_OFFSET))(this, a1, a2, a3);
		}

		::LPBNBKGHOGA* LPKCJPKAGGH_1(::System::String* a1)
		{
			return ((::LPBNBKGHOGA*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_LPKCJPKAGGH_1_OFFSET))(this, a1);
		}

		::LPBNBKGHOGA* JAFNIICFBDH(::System::String* a1, ::System::String* a2, ::RPG::GameCore::BlockNodeConfig* a3, ::RPG::GameCore::StageBaseConfig* a4, ::System::Boolean a5)
		{
			return ((::LPBNBKGHOGA*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StageBaseConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_JAFNIICFBDH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::LPBNBKGHOGA* HBDJLHHNDNE(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::StageBaseConfig* a4, ::System::Boolean a5)
		{
			return ((::LPBNBKGHOGA*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::StageBaseConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_HBDJLHHNDNE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::LPBNBKGHOGA* JLIJBECFKJD(::RPG::GameCore::BlockNodeConfig* a1)
		{
			return ((::LPBNBKGHOGA*(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_JLIJBECFKJD_OFFSET))(this, a1);
		}

		::LPBNBKGHOGA* JAOHNFPFFDI(::System::String* a1)
		{
			return ((::LPBNBKGHOGA*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_JAOHNFPFFDI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* JIAOPGEEAGN(::RPG::GameCore::BlockNodeConfig* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_JIAOPGEEAGN_OFFSET))(this, a1);
		}

		::System::Void PBOLIFDNOAC(::RPG::GameCore::BlockNodeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_PBOLIFDNOAC_OFFSET))(this, a1);
		}

		::System::Void CCIMBJOMCPJ(::RPG::GameCore::BlockNodeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_CCIMBJOMCPJ_OFFSET))(this, a1);
		}

		::System::Void CCIMBJOMCPJ_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_CCIMBJOMCPJ_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::OKLBEPJCBJG>* NHLCFJICCDD(::RPG::GameCore::BlockNodeConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::OKLBEPJCBJG>*(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_NHLCFJICCDD_OFFSET))(this, a1, a2);
		}

		::System::Void NKDMJFAGKBM(::System::String* a1, ::System::String* a2, ::LPBNBKGHOGA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::LPBNBKGHOGA*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_NKDMJFAGKBM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GHGCDDIJKCM(::LPBNBKGHOGA* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPBNBKGHOGA*, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_GHGCDDIJKCM_OFFSET))(this, a1, a2);
		}

		::System::Void NABNHENIMCK(::LPBNBKGHOGA* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPBNBKGHOGA*, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_NABNHENIMCK_OFFSET))(this, a1, a2);
		}

		::System::String* KDNFIPDBNNJ(::LPBNBKGHOGA* a1)
		{
			return ((::System::String*(*)(::PVOID, ::LPBNBKGHOGA*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_KDNFIPDBNNJ_OFFSET))(this, a1);
		}

		::System::Void DPNKMMKJAJH(::System::String* a1, ::LPBNBKGHOGA* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::LPBNBKGHOGA*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_DPNKMMKJAJH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EJAPILGGFFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_EJAPILGGFFH_OFFSET))(this);
		}

		::System::Void NABNHENIMCK_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_NABNHENIMCK_1_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void MEODFKNFKEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_MEODFKNFKEN_OFFSET))(this);
		}

		::System::Void AABAHIPCCIJ(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_AABAHIPCCIJ_OFFSET))(this, a1, a2);
		}

		::System::Void NMMEJOPGNEC(::System::String* a1, ::LPBNBKGHOGA* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::LPBNBKGHOGA*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_NMMEJOPGNEC_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::StageCaptureAliasLookup* IADPJMKBNHA(::System::String* a1)
		{
			return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_IADPJMKBNHA_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageCaptureAliasLookup* MGIDGACPCKD(::System::String* a1, ::System::String* a2, ::RPG::GameCore::BlockNodeConfig* a3, ::RPG::GameCore::StageBaseConfig* a4)
		{
			return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_MGIDGACPCKD_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::StageCaptureAliasLookup* COHADPKHAGP(::System::String* a1)
		{
			return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_COHADPKHAGP_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageCaptureAliasLookup* DMGOEEIJEJH(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::StageBaseConfig* a4)
		{
			return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_DMGOEEIJEJH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PCBDFNEMANE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_PCBDFNEMANE_OFFSET))(this, a1);
		}

		::DGHEDDKAKOF* HLIKDNBGPBA(::System::String* a1, ::System::String* a2, ::RPG::GameCore::BlockNodeConfig* a3, ::RPG::GameCore::StageBaseConfig* a4, ::System::Boolean a5)
		{
			return ((::DGHEDDKAKOF*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StageBaseConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_HLIKDNBGPBA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::DGHEDDKAKOF* DIGNADCDGML(::System::String* a1)
		{
			return ((::DGHEDDKAKOF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_DIGNADCDGML_OFFSET))(this, a1);
		}

		::System::Void ADFIKOFCHEG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_ADFIKOFCHEG_OFFSET))(this, a1);
		}

		::RPG::GameCore::BlockGrassData* ELHJKMLOFIB(::System::String* a1)
		{
			return ((::RPG::GameCore::BlockGrassData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_ELHJKMLOFIB_OFFSET))(this, a1);
		}

		::RPG::GameCore::BlockGrassData* OJHACPCCNON(::System::String* a1)
		{
			return ((::RPG::GameCore::BlockGrassData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_OJHACPCCNON_OFFSET))(this, a1);
		}

		::System::Void LNANKMEOBMO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_LNANKMEOBMO_OFFSET))(this, a1);
		}

		::System::Void IFBEABNMMOD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_IFBEABNMMOD_OFFSET))(this, a1);
		}

		::System::Void HIJADDDKOBK(::LPBNBKGHOGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPBNBKGHOGA*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_HIJADDDKOBK_OFFSET))(this, a1);
		}

		::AHCBAPLJPKB* OJJIKBADNBK(::System::String* a1, ::System::Boolean a2)
		{
			return ((::AHCBAPLJPKB*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_OJJIKBADNBK_OFFSET))(this, a1, a2);
		}

		::AHCBAPLJPKB* HPGEMLOHEIB(::System::String* a1, ::System::Boolean a2)
		{
			return ((::AHCBAPLJPKB*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_HPGEMLOHEIB_OFFSET))(this, a1, a2);
		}

		::ECGLPNCBKDM OMDOBCHCLGD(::JEDLNCLNLEE a1, ::System::Boolean a2)
		{
			return ((::ECGLPNCBKDM(*)(::PVOID, ::JEDLNCLNLEE, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_OMDOBCHCLGD_OFFSET))(this, a1, a2);
		}

		::ECGLPNCBKDM OMDOBCHCLGD_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::ECGLPNCBKDM(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_OMDOBCHCLGD_1_OFFSET))(this, a1, a2, a3);
		}

		::ECGLPNCBKDM DEPCIFNDDAL(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::ECGLPNCBKDM(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_DEPCIFNDDAL_OFFSET))(this, a1, a2, a3);
		}

		::ECGLPNCBKDM JGFEPFFCCEO(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::ECGLPNCBKDM(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_JGFEPFFCCEO_OFFSET))(this, a1, a2, a3);
		}

		::ECGLPNCBKDM ABHJIABDFFH(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::ECGLPNCBKDM(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_ABHJIABDFFH_OFFSET))(this, a1, a2, a3);
		}

		static ::AHCBAPLJPKB* KDNONNNPAGL(::System::String* a1)
		{
			return ((::AHCBAPLJPKB*(*)(::System::String*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_KDNONNNPAGL_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MEIJIFEDKPN(::UnityEngine::GameObject* a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_MEIJIFEDKPN_OFFSET))(this, a1, a2);
		}

		static ::KMKKJDJPMOF* GGBLHEHJBDO()
		{
			return ((::KMKKJDJPMOF*(*)())((::PBYTE)hIl2Cpp + KMKKJDJPMOF_GGBLHEHJBDO_OFFSET))();
		}

		static ::System::Void GNBIDLADEMJ(::LPBNBKGHOGA* a1)
		{
			return ((::System::Void(*)(::LPBNBKGHOGA*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_GNBIDLADEMJ_OFFSET))(a1);
		}

		static ::System::Void MKLNHEHCNOM(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AutoGenCellType, ::MDLBOFGMBKH*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AutoGenCellType, ::MDLBOFGMBKH*>*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_MKLNHEHCNOM_OFFSET))(a1);
		}

		static ::System::Void GNFDKFFFBEN(::AHCBAPLJPKB* a1)
		{
			return ((::System::Void(*)(::AHCBAPLJPKB*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_GNFDKFFFBEN_OFFSET))(a1);
		}

		static ::System::Void CINNPHEAKDA(::DGHEDDKAKOF* a1)
		{
			return ((::System::Void(*)(::DGHEDDKAKOF*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_CINNPHEAKDA_OFFSET))(a1);
		}

		::System::Void OMFHBLBAEPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_OMFHBLBAEPO_OFFSET))(this);
		}

		::System::Void IGEMOJJIGOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_IGEMOJJIGOI_OFFSET))(this);
		}

		static ::System::Void DDNKCEAELOE(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + KMKKJDJPMOF_DDNKCEAELOE_OFFSET))(a1);
		}

	};
