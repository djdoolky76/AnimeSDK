#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BoundsDrawer_BoundsDrawerInspectorMode.h"
#include "unitysdk/RPG/Client/OpenWorld/LodTemplateSourceType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceLoadingState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceLodState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingState.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/GEEOPFIMJEM.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DGPKLNNFELK;
class HPKACEPPPCA;
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define BOUNDSDRAWER_ABOAJLKHKEH_OFFSET UNITYSDK_OFFSET(0xC1B88A0)
#define BOUNDSDRAWER_BEKBHNCIAGC_OFFSET UNITYSDK_OFFSET(0xC1B84B0)
#define BOUNDSDRAWER_BKMMNBKNFHJ_OFFSET UNITYSDK_OFFSET(0xC1B8B30)
#define BOUNDSDRAWER_CADMMFIDKBO_OFFSET UNITYSDK_OFFSET(0xC1B9280)
#define BOUNDSDRAWER_CCBGIKNFCCI_OFFSET UNITYSDK_OFFSET(0xC1B9970)
#define BOUNDSDRAWER_CHAKBAEFJLF_OFFSET UNITYSDK_OFFSET(0xC1B8920)
#define BOUNDSDRAWER_CNDODKJHPAE_OFFSET UNITYSDK_OFFSET(0xC1B9B10)
#define BOUNDSDRAWER_CTOR_OFFSET UNITYSDK_OFFSET(0xC1B9D90)
#define BOUNDSDRAWER_DEFJFFLBOMC_OFFSET UNITYSDK_OFFSET(0xC1B9600)
#define BOUNDSDRAWER_DFPIHPABNGH_OFFSET UNITYSDK_OFFSET(0xC1B8C10)
#define BOUNDSDRAWER_DMMHKJPIBEN_OFFSET UNITYSDK_OFFSET(0xC1B8C80)
#define BOUNDSDRAWER_EAGNNLOAPNK_OFFSET UNITYSDK_OFFSET(0xC1B87A0)
#define BOUNDSDRAWER_EKEHCGBMCGA_OFFSET UNITYSDK_OFFSET(0xC1B95A0)
#define BOUNDSDRAWER_EMIFKCOILMH_OFFSET UNITYSDK_OFFSET(0xC1B9790)
#define BOUNDSDRAWER_FAFICIEPOIL_OFFSET UNITYSDK_OFFSET(0xC1B93A0)
#define BOUNDSDRAWER_FBDFOCFLKMA_OFFSET UNITYSDK_OFFSET(0xC1B9730)
#define BOUNDSDRAWER_FBGAGJKFDDP_OFFSET UNITYSDK_OFFSET(0xC1B9080)
#define BOUNDSDRAWER_FEBHJMJNMJH_OFFSET UNITYSDK_OFFSET(0xC1B9A90)
#define BOUNDSDRAWER_GBAJEECJMHF_OFFSET UNITYSDK_OFFSET(0xC1B79C0)
#define BOUNDSDRAWER_GET_CULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0xC1B8880)
#define BOUNDSDRAWER_GET_LODTEMPLATECFG_OFFSET UNITYSDK_OFFSET(0xC1B9910)
#define BOUNDSDRAWER_GET_PRELOADCULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0xC1B8860)
#define BOUNDSDRAWER_GGPBABJFLKB_OFFSET UNITYSDK_OFFSET(0xC1B8E20)
#define BOUNDSDRAWER_GHDDPOAOGLI_OFFSET UNITYSDK_OFFSET(0xC1B8500)
#define BOUNDSDRAWER_HHHIFCAOFLG_OFFSET UNITYSDK_OFFSET(0xC1B8F50)
#define BOUNDSDRAWER_HKEBOGFOCHJ_OFFSET UNITYSDK_OFFSET(0xC1B96C0)
#define BOUNDSDRAWER_HMJJMOBCLLJ_OFFSET UNITYSDK_OFFSET(0xC1B90F0)
#define BOUNDSDRAWER_HOAPGEHPABH_OFFSET UNITYSDK_OFFSET(0xC1B8410)
#define BOUNDSDRAWER_HOBNKEAMHOC_OFFSET UNITYSDK_OFFSET(0xC1B8BA0)
#define BOUNDSDRAWER_IBOFNAKAPFG_OFFSET UNITYSDK_OFFSET(0xC1B8800)
#define BOUNDSDRAWER_IDDFLMLGMLF_OFFSET UNITYSDK_OFFSET(0xC1B8CF0)
#define BOUNDSDRAWER_IELKEOOKAPD_OFFSET UNITYSDK_OFFSET(0xC1B8980)
#define BOUNDSDRAWER_IINNEALBCNH_OFFSET UNITYSDK_OFFSET(0xC1B8320)
#define BOUNDSDRAWER_IOKLLBPGFJM_OFFSET UNITYSDK_OFFSET(0xC1B8570)
#define BOUNDSDRAWER_JHJLMAKHMHF_OFFSET UNITYSDK_OFFSET(0xC1B9420)
#define BOUNDSDRAWER_JKAONODONLN_OFFSET UNITYSDK_OFFSET(0xC1B9880)
#define BOUNDSDRAWER_JPNJJLBKFMF_OFFSET UNITYSDK_OFFSET(0xC1B86B0)
#define BOUNDSDRAWER_KBAALPPAPAF_OFFSET UNITYSDK_OFFSET(0xC1B8A50)
#define BOUNDSDRAWER_KCNDNBEJAEL_OFFSET UNITYSDK_OFFSET(0xC1B9A30)
#define BOUNDSDRAWER_LEFONFPDHKN_OFFSET UNITYSDK_OFFSET(0xC1B9BD0)
#define BOUNDSDRAWER_LGDBJHIAAKN_OFFSET UNITYSDK_OFFSET(0xC1B9D30)
#define BOUNDSDRAWER_LKCDENFNBAL_OFFSET UNITYSDK_OFFSET(0xC1B8370)
#define BOUNDSDRAWER_LOPLOJEFEMB_OFFSET UNITYSDK_OFFSET(0xC1B9660)
#define BOUNDSDRAWER_MEDECELCGPF_OFFSET UNITYSDK_OFFSET(0xC1B9160)
#define BOUNDSDRAWER_MFAMKFKGLBB_OFFSET UNITYSDK_OFFSET(0xC1B9540)
#define BOUNDSDRAWER_MHLDNHIEHLI_OFFSET UNITYSDK_OFFSET(0xC1B94E0)
#define BOUNDSDRAWER_NAGGPAIKHJF_OFFSET UNITYSDK_OFFSET(0xC1B9C70)
#define BOUNDSDRAWER_NAKHEIAKAEO_OFFSET UNITYSDK_OFFSET(0xC1B8710)
#define BOUNDSDRAWER_NAMEFOOLFDH_OFFSET UNITYSDK_OFFSET(0xC1B89E0)
#define BOUNDSDRAWER_NGEEOKOIPKI_OFFSET UNITYSDK_OFFSET(0xC1B85E0)
#define BOUNDSDRAWER_NIGIOHLOJIJ_OFFSET UNITYSDK_OFFSET(0xC1B97F0)
#define BOUNDSDRAWER_NNLBIGNJOOB_OFFSET UNITYSDK_OFFSET(0xC1B83C0)
#define BOUNDSDRAWER_NOAMNICPDPK_OFFSET UNITYSDK_OFFSET(0xC1B7640)
#define BOUNDSDRAWER_OBFGMIDLBLC_OFFSET UNITYSDK_OFFSET(0xC1B80F0)
#define BOUNDSDRAWER_OCMOOAKHPGL_OFFSET UNITYSDK_OFFSET(0xC1B99D0)
#define BOUNDSDRAWER_OKKDFDAFEND_OFFSET UNITYSDK_OFFSET(0xC1B7330)
#define BOUNDSDRAWER_OMHJJCMHOFI_OFFSET UNITYSDK_OFFSET(0xC1B9B70)
#define BOUNDSDRAWER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1B75B0)
#define BOUNDSDRAWER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1B7570)
#define BOUNDSDRAWER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xC1B75F0)
#define BOUNDSDRAWER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC1B7530)
#define BOUNDSDRAWER_PHOODOLFPKO_OFFSET UNITYSDK_OFFSET(0xC1B8460)
#define BOUNDSDRAWER_PKKALEBIPNN_OFFSET UNITYSDK_OFFSET(0xC1B9CD0)
#define BOUNDSDRAWER_PLNGKJBFMPJ_OFFSET UNITYSDK_OFFSET(0xC1B8AC0)
#define BOUNDSDRAWER_PMBLOJBHKBJ_OFFSET UNITYSDK_OFFSET(0xC1B8190)
#define BOUNDSDRAWER_PNLBMILLJBL_OFFSET UNITYSDK_OFFSET(0xC1B9480)
#define BOUNDSDRAWER_SETBOUND_OFFSET UNITYSDK_OFFSET(0xC1B72B0)
#define BOUNDSDRAWER_SETOWNERINSTANCE_OFFSET UNITYSDK_OFFSET(0xC1B7440)
#define BOUNDSDRAWER_SET_CULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0xC1B8890)
#define BOUNDSDRAWER_SET_PRELOADCULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0xC1B8870)
#define BOUNDSDRAWER_START_OFFSET UNITYSDK_OFFSET(0xC1B7490)

	class BoundsDrawer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* AJEFFDBGDML; // 0x18
		::System::Boolean GJCGOFIKCBB; // 0x20
		::System::Byte _padding0[0x3];
		::BoundsDrawer_BoundsDrawerInspectorMode InspectorMode; // 0x24
		::System::Int32 ObjectIndex; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* LoadingStatus; // 0x30
		::System::Single DistanceToCamera; // 0x38
		::System::Single DistanceRatio; // 0x3C
		::System::Single RealDistanceToCamera; // 0x40
		::System::Byte _padding2[0x4];
		::System::String* _PreloadCullingStatus_k__BackingField; // 0x48
		::System::String* _CullingStatus_k__BackingField; // 0x50
		::HPKACEPPPCA* OwnerInstance; // 0x58
		::RPG::Client::OpenWorld::StreamingItemData* ItemData; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_CTOR_OFFSET))(this);
		}

		::System::Void SetBound(::UnityEngine::Bounds a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_SETBOUND_OFFSET))(this, a1, a2);
		}

		::System::Void SetOwnerInstance(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_SETOWNERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void NOAMNICPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_NOAMNICPDPK_OFFSET))(this);
		}

		::System::Void GBAJEECJMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_GBAJEECJMHF_OFFSET))(this);
		}

		::System::Void OKKDFDAFEND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_OKKDFDAFEND_OFFSET))(this);
		}

		::System::Boolean PMBLOJBHKBJ(::RPG::Client::Stage* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Stage*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_PMBLOJBHKBJ_OFFSET))(this, a1, a2);
		}

		::System::Void OBFGMIDLBLC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_OBFGMIDLBLC_OFFSET))(this, a1);
		}

		::System::Boolean IINNEALBCNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_IINNEALBCNH_OFFSET))(this);
		}

		::System::Boolean LKCDENFNBAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_LKCDENFNBAL_OFFSET))(this);
		}

		::System::Boolean NNLBIGNJOOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_NNLBIGNJOOB_OFFSET))(this);
		}

		::System::Boolean HOAPGEHPABH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_HOAPGEHPABH_OFFSET))(this);
		}

		::System::Boolean PHOODOLFPKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_PHOODOLFPKO_OFFSET))(this);
		}

		::System::Boolean BEKBHNCIAGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_BEKBHNCIAGC_OFFSET))(this);
		}

		::System::String* GHDDPOAOGLI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_GHDDPOAOGLI_OFFSET))(this);
		}

		::System::String* IOKLLBPGFJM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_IOKLLBPGFJM_OFFSET))(this);
		}

		::System::String* NGEEOKOIPKI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_NGEEOKOIPKI_OFFSET))(this);
		}

		::System::Int32 JPNJJLBKFMF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_JPNJJLBKFMF_OFFSET))(this);
		}

		::System::Int32 NAKHEIAKAEO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_NAKHEIAKAEO_OFFSET))(this);
		}

		::System::Int32 EAGNNLOAPNK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_EAGNNLOAPNK_OFFSET))(this);
		}

		::System::Int32 IBOFNAKAPFG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_IBOFNAKAPFG_OFFSET))(this);
		}

		::System::String* get_PreloadCullingStatus()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_GET_PRELOADCULLINGSTATUS_OFFSET))(this);
		}

		::System::Void set_PreloadCullingStatus(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_SET_PRELOADCULLINGSTATUS_OFFSET))(this, a1);
		}

		::System::String* get_CullingStatus()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_GET_CULLINGSTATUS_OFFSET))(this);
		}

		::System::Void set_CullingStatus(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_SET_CULLINGSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean ABOAJLKHKEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_ABOAJLKHKEH_OFFSET))(this);
		}

		::System::Boolean CHAKBAEFJLF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_CHAKBAEFJLF_OFFSET))(this);
		}

		::System::Boolean IELKEOOKAPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_IELKEOOKAPD_OFFSET))(this);
		}

		::System::Int32 NAMEFOOLFDH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_NAMEFOOLFDH_OFFSET))(this);
		}

		::System::String* KBAALPPAPAF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_KBAALPPAPAF_OFFSET))(this);
		}

		::System::String* PLNGKJBFMPJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_PLNGKJBFMPJ_OFFSET))(this);
		}

		::System::String* BKMMNBKNFHJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_BKMMNBKNFHJ_OFFSET))(this);
		}

		::System::Boolean HOBNKEAMHOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_HOBNKEAMHOC_OFFSET))(this);
		}

		::System::Boolean DFPIHPABNGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_DFPIHPABNGH_OFFSET))(this);
		}

		::System::Single DMMHKJPIBEN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_DMMHKJPIBEN_OFFSET))(this);
		}

		::UnityEngine::Vector3 IDDFLMLGMLF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_IDDFLMLGMLF_OFFSET))(this);
		}

		::UnityEngine::Vector3 GGPBABJFLKB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_GGPBABJFLKB_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHHIFCAOFLG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_HHHIFCAOFLG_OFFSET))(this);
		}

		::System::Int32 FBGAGJKFDDP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_FBGAGJKFDDP_OFFSET))(this);
		}

		::System::String* HMJJMOBCLLJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_HMJJMOBCLLJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 MEDECELCGPF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_MEDECELCGPF_OFFSET))(this);
		}

		::UnityEngine::Vector3 CADMMFIDKBO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_CADMMFIDKBO_OFFSET))(this);
		}

		::GEEOPFIMJEM FAFICIEPOIL()
		{
			return ((::GEEOPFIMJEM(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_FAFICIEPOIL_OFFSET))(this);
		}

		::System::String* JHJLMAKHMHF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_JHJLMAKHMHF_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::LodTemplateSourceType PNLBMILLJBL()
		{
			return ((::RPG::Client::OpenWorld::LodTemplateSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_PNLBMILLJBL_OFFSET))(this);
		}

		::System::String* MHLDNHIEHLI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_MHLDNHIEHLI_OFFSET))(this);
		}

		::RPG::GameCore::StreamingLayerType MFAMKFKGLBB()
		{
			return ((::RPG::GameCore::StreamingLayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_MFAMKFKGLBB_OFFSET))(this);
		}

		::System::Single EKEHCGBMCGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_EKEHCGBMCGA_OFFSET))(this);
		}

		::System::Single DEFJFFLBOMC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_DEFJFFLBOMC_OFFSET))(this);
		}

		::System::Single LOPLOJEFEMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_LOPLOJEFEMB_OFFSET))(this);
		}

		::System::Single HKEBOGFOCHJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_HKEBOGFOCHJ_OFFSET))(this);
		}

		::System::Boolean FBDFOCFLKMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_FBDFOCFLKMA_OFFSET))(this);
		}

		::System::Boolean EMIFKCOILMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_EMIFKCOILMH_OFFSET))(this);
		}

		::System::Int32 NIGIOHLOJIJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_NIGIOHLOJIJ_OFFSET))(this);
		}

		::System::Int32 JKAONODONLN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_JKAONODONLN_OFFSET))(this);
		}

		::DGPKLNNFELK* get_LodTemplateCfg()
		{
			return ((::DGPKLNNFELK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_GET_LODTEMPLATECFG_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::StreamingState CCBGIKNFCCI()
		{
			return ((::RPG::Client::OpenWorld::StreamingState(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_CCBGIKNFCCI_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::StreamingInstanceLoadingState OCMOOAKHPGL()
		{
			return ((::RPG::Client::OpenWorld::StreamingInstanceLoadingState(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_OCMOOAKHPGL_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::StreamingInstanceLodState KCNDNBEJAEL()
		{
			return ((::RPG::Client::OpenWorld::StreamingInstanceLodState(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_KCNDNBEJAEL_OFFSET))(this);
		}

		::System::Int32 FEBHJMJNMJH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_FEBHJMJNMJH_OFFSET))(this);
		}

		::System::Int32 CNDODKJHPAE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_CNDODKJHPAE_OFFSET))(this);
		}

		::System::Int32 OMHJJCMHOFI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_OMHJJCMHOFI_OFFSET))(this);
		}

		::System::Boolean LEFONFPDHKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_LEFONFPDHKN_OFFSET))(this);
		}

		::System::Boolean NAGGPAIKHJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_NAGGPAIKHJF_OFFSET))(this);
		}

		::System::Boolean PKKALEBIPNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_PKKALEBIPNN_OFFSET))(this);
		}

		::System::Int32 LGDBJHIAAKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_LGDBJHIAAKN_OFFSET))(this);
		}

	};
