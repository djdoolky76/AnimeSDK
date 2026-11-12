#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_FBBFAKCAFAN.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_GenerateConfig.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_SliderTemplate.h"
namespace RPG::Client { class LoopGenerateBehavior_RuntimeSlider; }
namespace RPG::Client { class LoopGenerateMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_AHCKLCNKGBG_OFFSET UNITYSDK_OFFSET(0xDF313D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_AIKCBFJNDMG_OFFSET UNITYSDK_OFFSET(0xDF303D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_AJAGKOKBPMJ_OFFSET UNITYSDK_OFFSET(0xDF2F730)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_AKKGCBFLJGL_OFFSET UNITYSDK_OFFSET(0xDF30C70)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_BEJOBODHKNE_OFFSET UNITYSDK_OFFSET(0xDF2EF40)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_BLNIJMNJHPD_OFFSET UNITYSDK_OFFSET(0xDF31900)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF33530)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CDCDPCGKCFE_OFFSET UNITYSDK_OFFSET(0xDF2F680)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xDF2D9D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CHMKJAFFDHD_OFFSET UNITYSDK_OFFSET(0xDF31B60)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CNGOABKBJKM_OFFSET UNITYSDK_OFFSET(0xDF2FCC0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDF33440)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_DCNICNGGHJK_OFFSET UNITYSDK_OFFSET(0xDF31630)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_DDDADBCKJCE_OFFSET UNITYSDK_OFFSET(0xDF330A0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_DOJMIGMCCIL_OFFSET UNITYSDK_OFFSET(0xDF32D00)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_EDFFBLFHOGO_1_OFFSET UNITYSDK_OFFSET(0xDF2D660)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_EDFFBLFHOGO_OFFSET UNITYSDK_OFFSET(0xDF321B0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_EGHPOPIAEDF_OFFSET UNITYSDK_OFFSET(0xDF314D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FAPNGOBHKPF_OFFSET UNITYSDK_OFFSET(0xDF2F060)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FBEIKKJAKHE_OFFSET UNITYSDK_OFFSET(0xDF31050)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FGDJNECEJLJ_OFFSET UNITYSDK_OFFSET(0xDF2DC90)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FMMOCCBKFPA_OFFSET UNITYSDK_OFFSET(0xDF31FF0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FNNNGIGFNIK_OFFSET UNITYSDK_OFFSET(0xDF2FC70)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FPLDJIHKCJK_OFFSET UNITYSDK_OFFSET(0xDF31350)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GAIOPOHGCIH_OFFSET UNITYSDK_OFFSET(0xDF317C0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_CURRENTCONFIGINDEX_OFFSET UNITYSDK_OFFSET(0xDF2C100)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xDF2BBE0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ANCHORPOSITIONONTRACK_OFFSET UNITYSDK_OFFSET(0xDF2BF90)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTCONFIG_OFFSET UNITYSDK_OFFSET(0xDF2BC00)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0xDF2BD70)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ISFORWARD_OFFSET UNITYSDK_OFFSET(0xDF2BDF0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xDF2BD30)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GKABJFGMNCP_OFFSET UNITYSDK_OFFSET(0xDF32B50)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_HEBJLGHEFCA_OFFSET UNITYSDK_OFFSET(0xDF30DE0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_HFAFOBDFPLI_OFFSET UNITYSDK_OFFSET(0xDF2ECD0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_HFMJFBKOPMK_OFFSET UNITYSDK_OFFSET(0xDF2CA80)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_HGBAMGPBKAD_OFFSET UNITYSDK_OFFSET(0xDF2F930)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_IBCCKCAIPHF_OFFSET UNITYSDK_OFFSET(0xDF2F620)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_IGEAPHPJONH_OFFSET UNITYSDK_OFFSET(0xDF32260)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_IHAENAIGJAE_OFFSET UNITYSDK_OFFSET(0xDF2EC70)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_JDBAJLPKCOB_OFFSET UNITYSDK_OFFSET(0xDF32EE0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_JHODNFKKFLE_OFFSET UNITYSDK_OFFSET(0xDF332E0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_JJGHJNAABCM_OFFSET UNITYSDK_OFFSET(0xDF31D10)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_JMMMHIGBNBB_OFFSET UNITYSDK_OFFSET(0xDF32AC0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xDF2DEA0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KCKGPPDFNHK_OFFSET UNITYSDK_OFFSET(0xDF2EDA0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KCLCNKKKKNG_OFFSET UNITYSDK_OFFSET(0xDF2FE20)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KHCOLFELLPD_OFFSET UNITYSDK_OFFSET(0xDF2D590)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KLPCCHHFAHE_OFFSET UNITYSDK_OFFSET(0xDF30ED0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KOCFHHPKAMO_OFFSET UNITYSDK_OFFSET(0xDF2DF20)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDF2C110)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KPOHGADNNCE_OFFSET UNITYSDK_OFFSET(0xDF2D510)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_LHHBFAAJHCI_OFFSET UNITYSDK_OFFSET(0xDF2C800)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_LNPEKGHDIIP_OFFSET UNITYSDK_OFFSET(0xDF316E0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MAHPJNEPJGK_OFFSET UNITYSDK_OFFSET(0xDF31860)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MEBEGPMCELO_OFFSET UNITYSDK_OFFSET(0xDF30640)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xDF2D5F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MFOMODLCIDP_OFFSET UNITYSDK_OFFSET(0xDF2C020)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MHFCMBNKMHD_OFFSET UNITYSDK_OFFSET(0xDF2D350)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xDF2E0D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MJAEBFHACKG_OFFSET UNITYSDK_OFFSET(0xDF33170)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MNDCJFDCODG_OFFSET UNITYSDK_OFFSET(0xDF300F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MOJJBPBAFFA_OFFSET UNITYSDK_OFFSET(0xDF2E2D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xDF2E070)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_NFKMIDIPMMG_OFFSET UNITYSDK_OFFSET(0xDF2D3B0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_OEAKGCNIKOA_OFFSET UNITYSDK_OFFSET(0xDF32860)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_OFOHAEODGEA_OFFSET UNITYSDK_OFFSET(0xDF2FA80)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xDF2DFB0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_OLNPHEPNAHP_OFFSET UNITYSDK_OFFSET(0xDF326F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_ONHMHFLFDGJ_OFFSET UNITYSDK_OFFSET(0xDF30970)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PBDKGLFEMOK_OFFSET UNITYSDK_OFFSET(0xDF32200)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xDF2C4C0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PCNDBBHMOKN_OFFSET UNITYSDK_OFFSET(0xDF2EE20)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PKKHHBLLDBK_OFFSET UNITYSDK_OFFSET(0xDF32E40)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PMEELILDEFE_OFFSET UNITYSDK_OFFSET(0xDF32C40)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xDF2E030)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PPJOGFADAAH_OFFSET UNITYSDK_OFFSET(0xDF30D70)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_SET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xDF2BBF0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xDF2E130)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_TypeDefinitionIndex = 72883;

	class LoopGenerateBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _PreviewMode_k__BackingField; // 0x38
		::System::Boolean _IsTransitionState; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single _TransitionSpeed; // 0x3C
		::System::Boolean _IfUseTempSpeed; // 0x40
		::System::Byte _padding1[0x3];
		::System::Single _TempSpeed; // 0x44
		::System::Collections::Generic::List_1<::System::Object*>* _CurrentUnusedSliderPool; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* _CurrentUsedSliderPool; // 0x50
		::System::Collections::Generic::List_1<::System::Object*>* _LastUsedSliderPool; // 0x58
		::UnityEngine::Vector2 _FilledRange; // 0x60
		::System::Int32 _CurrentConfigIndex; // 0x68
		::System::Int32 _CurrentGroupWeightPairIndex; // 0x6C
		::System::Int32 _CurrentElementIndex; // 0x70
		::System::Int32 _ActivePhaseIndex; // 0x74
		::System::Single _PhaseElapsed; // 0x78
		::System::Single _PhaseComputedSpeed; // 0x7C
		::System::Int32 _PhaseConfigCursor; // 0x80
		::System::Boolean _PhaseCompleted; // 0x84
		::System::Byte _padding2[0x3];
		::System::Collections::Generic::List_1<::System::Int32>* _LoadedPhaseConfigIndices; // 0x88
		::System::Boolean _StopEndpointSpawned; // 0x90
		::System::Byte _padding3[0x7];
		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* _StopEndpointSlider; // 0x98
		::System::Single _StopDockDistance; // 0xA0
		::System::Single _StopDockStartProgress; // 0xA4
		::System::Single _StopLastEndpointCenterOnTrack; // 0xA8
		::System::Boolean _StopLastEndpointCenterOnTrackValid; // 0xAC
		::System::Boolean _SkipPhaseTimeOnce; // 0xAD
		::System::Boolean _HasPendingConfigSwitch; // 0xAE
		::System::Byte _padding4[0x1];
		::System::Int32 _PendingConfigIndex; // 0xB0
		::System::Boolean _PendingSwitchAfterCurrentGroup; // 0xB4
		::System::Boolean _PendingSkipAssetManagement; // 0xB5
		static ::System::Int32* StaticGet__NextEndpointGroupId()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LoopGenerateBehavior")->GetStaticField(0xF290);
		}

		static ::System::Int32* StaticGet__MaxLoopCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LoopGenerateBehavior")->GetStaticField(0xF294);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Boolean get_PreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_PREVIEWMODE_OFFSET))(this);
		}

		::System::Void set_PreviewMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_SET_PREVIEWMODE_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerateBehavior_GenerateConfig get__CurrentConfig()
		{
			return ((::RPG::Client::LoopGenerateBehavior_GenerateConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTCONFIG_OFFSET))(this);
		}

		::System::Single get__CurrentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTSPEED_OFFSET))(this);
		}

		::System::Boolean get__IsForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ISFORWARD_OFFSET))(this);
		}

		::System::Single get__AnchorPositionOnTrack()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ANCHORPOSITIONONTRACK_OFFSET))(this);
		}

		::System::Single MFOMODLCIDP(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_MFOMODLCIDP_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentConfigIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_CURRENTCONFIGINDEX_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void KOCFHHPKAMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_KOCFHHPKAMO_OFFSET))(this, a1);
		}

		static ::System::Void HFAFOBDFPLI(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_HFAFOBDFPLI_OFFSET))(a1, a2);
		}

		static ::System::Void KCKGPPDFNHK(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::LoopGenerateBehavior_RuntimeSlider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_KCKGPPDFNHK_OFFSET))(a1, a2);
		}

		::System::Void PCNDBBHMOKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_PCNDBBHMOKN_OFFSET))(this);
		}

		::System::Void BEJOBODHKNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_BEJOBODHKNE_OFFSET))(this);
		}

		::System::Void IHAENAIGJAE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_IHAENAIGJAE_OFFSET))(this, a1);
		}

		::System::Void IBCCKCAIPHF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_IBCCKCAIPHF_OFFSET))(this, a1);
		}

		::System::Void FAPNGOBHKPF(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_FAPNGOBHKPF_OFFSET))(this, a1, a2);
		}

		::System::Void OFOHAEODGEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_OFOHAEODGEA_OFFSET))(this);
		}

		::System::Void HGBAMGPBKAD(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_HGBAMGPBKAD_OFFSET))(this, a1);
		}

		::System::Void CDCDPCGKCFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_CDCDPCGKCFE_OFFSET))(this);
		}

		::System::Void AJAGKOKBPMJ(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_AJAGKOKBPMJ_OFFSET))(this, a1);
		}

		::System::Boolean CNGOABKBJKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_CNGOABKBJKM_OFFSET))(this);
		}

		::RPG::Client::LoopGenerateBehavior_FBBFAKCAFAN KCLCNKKKKNG(::System::Single a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_FBBFAKCAFAN(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_KCLCNKKKKNG_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* MNDCJFDCODG(::RPG::Client::LoopGenerateBehavior_SliderTemplate a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_SliderTemplate, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_MNDCJFDCODG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* AIKCBFJNDMG(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_AIKCBFJNDMG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MEBEGPMCELO(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_MEBEGPMCELO_OFFSET))(this, a1);
		}

		::System::Boolean ONHMHFLFDGJ(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_ONHMHFLFDGJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* FNNNGIGFNIK()
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_FNNNGIGFNIK_OFFSET))(this);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* AKKGCBFLJGL(::System::Boolean a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_AKKGCBFLJGL_OFFSET))(this, a1);
		}

		::System::Void HEBJLGHEFCA(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_HEBJLGHEFCA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* KLPCCHHFAHE(::System::Int32 a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_KLPCCHHFAHE_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* NFKMIDIPMMG(::System::Int32 a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_NFKMIDIPMMG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* FBEIKKJAKHE(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_FBEIKKJAKHE_OFFSET))(this, a1);
		}

		::System::Void AHCKLCNKGBG(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_AHCKLCNKGBG_OFFSET))(this, a1, a2);
		}

		::System::Void EGHPOPIAEDF(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_EGHPOPIAEDF_OFFSET))(this, a1, a2, a3);
		}

		::System::Single FPLDJIHKCJK(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_FPLDJIHKCJK_OFFSET))(this, a1);
		}

		::System::Void DCNICNGGHJK(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_DCNICNGGHJK_OFFSET))(this, a1);
		}

		::System::Single LNPEKGHDIIP(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_LNPEKGHDIIP_OFFSET))(this, a1);
		}

		static ::System::Boolean GAIOPOHGCIH(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GAIOPOHGCIH_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::LoopGenerateBehavior_RuntimeSlider* MAHPJNEPJGK(::System::Int32 a1)
		{
			return ((::RPG::Client::LoopGenerateBehavior_RuntimeSlider*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_MAHPJNEPJGK_OFFSET))(this, a1);
		}

		::System::Void BLNIJMNJHPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_BLNIJMNJHPD_OFFSET))(this, a1);
		}

		::System::Void CHMKJAFFDHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_CHMKJAFFDHD_OFFSET))(this);
		}

		::System::Boolean JJGHJNAABCM(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_JJGHJNAABCM_OFFSET))(this, a1, a2);
		}

		::System::Void FMMOCCBKFPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_FMMOCCBKFPA_OFFSET))(this);
		}

		::System::Void EDFFBLFHOGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_EDFFBLFHOGO_OFFSET))(this);
		}

		::System::Void EDFFBLFHOGO_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_EDFFBLFHOGO_1_OFFSET))(this, a1);
		}

		::System::Void LHHBFAAJHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_LHHBFAAJHCI_OFFSET))(this);
		}

		::System::Void IGEAPHPJONH(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_IGEAPHPJONH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OLNPHEPNAHP(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_OLNPHEPNAHP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHCOLFELLPD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_KHCOLFELLPD_OFFSET))(this, a1);
		}

		::System::Void MHFCMBNKMHD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_MHFCMBNKMHD_OFFSET))(this, a1);
		}

		::System::Single OEAKGCNIKOA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_OEAKGCNIKOA_OFFSET))(this, a1, a2);
		}

		::System::Single JMMMHIGBNBB(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_JMMMHIGBNBB_OFFSET))(this, a1, a2);
		}

		::System::Single GKABJFGMNCP(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GKABJFGMNCP_OFFSET))(this, a1, a2);
		}

		::System::Void PBDKGLFEMOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_PBDKGLFEMOK_OFFSET))(this);
		}

		::System::Boolean PMEELILDEFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_PMEELILDEFE_OFFSET))(this);
		}

		::System::Void DOJMIGMCCIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_DOJMIGMCCIL_OFFSET))(this);
		}

		::System::Void PPJOGFADAAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_PPJOGFADAAH_OFFSET))(this);
		}

		::System::Void PKKHHBLLDBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_PKKHHBLLDBK_OFFSET))(this);
		}

		::System::Void MOJJBPBAFFA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_MOJJBPBAFFA_OFFSET))(this, a1);
		}

		::System::Void KPOHGADNNCE(::System::Int32 a1, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_KPOHGADNNCE_OFFSET))(this, a1, a2);
		}

		::System::Void JDBAJLPKCOB(::RPG::Client::LoopGenerateBehavior_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerateBehavior_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_JDBAJLPKCOB_OFFSET))(this, a1);
		}

		::System::Void HFMJFBKOPMK(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_HFMJFBKOPMK_OFFSET))(this, a1, a2);
		}

		::System::Void JHODNFKKFLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_JHODNFKKFLE_OFFSET))(this);
		}

		::System::Void FGDJNECEJLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_FGDJNECEJLJ_OFFSET))(this);
		}

		::System::Boolean DDDADBCKJCE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_DDDADBCKJCE_OFFSET))(this, a1);
		}

		::System::Single MJAEBFHACKG(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_MJAEBFHACKG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LoopGenerateMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::LoopGenerateMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
