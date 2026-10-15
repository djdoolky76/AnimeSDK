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

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_AHCKLCNKGBG_OFFSET UNITYSDK_OFFSET(0xD4E0BD0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_AIKCBFJNDMG_OFFSET UNITYSDK_OFFSET(0xD4DFBD0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_AJAGKOKBPMJ_OFFSET UNITYSDK_OFFSET(0xD4DEF30)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_AKKGCBFLJGL_OFFSET UNITYSDK_OFFSET(0xD4E0470)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_BEJOBODHKNE_OFFSET UNITYSDK_OFFSET(0xD4DE740)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_BLNIJMNJHPD_OFFSET UNITYSDK_OFFSET(0xD4E1100)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xD4E2D60)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CDCDPCGKCFE_OFFSET UNITYSDK_OFFSET(0xD4DEE80)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD4DD1D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CHMKJAFFDHD_OFFSET UNITYSDK_OFFSET(0xD4E1360)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CNGOABKBJKM_OFFSET UNITYSDK_OFFSET(0xD4DF4C0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD4E2C70)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_DCNICNGGHJK_OFFSET UNITYSDK_OFFSET(0xD4E0E30)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_DDDADBCKJCE_OFFSET UNITYSDK_OFFSET(0xD4E28D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_DOJMIGMCCIL_OFFSET UNITYSDK_OFFSET(0xD4E2530)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_EDFFBLFHOGO_1_OFFSET UNITYSDK_OFFSET(0xD4DCE60)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_EDFFBLFHOGO_OFFSET UNITYSDK_OFFSET(0xD4E19E0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_EGHPOPIAEDF_OFFSET UNITYSDK_OFFSET(0xD4E0CD0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FAPNGOBHKPF_OFFSET UNITYSDK_OFFSET(0xD4DE860)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FBEIKKJAKHE_OFFSET UNITYSDK_OFFSET(0xD4E0850)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FGDJNECEJLJ_OFFSET UNITYSDK_OFFSET(0xD4DD490)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FMMOCCBKFPA_OFFSET UNITYSDK_OFFSET(0xD4E17F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FNNNGIGFNIK_OFFSET UNITYSDK_OFFSET(0xD4DF470)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_FPLDJIHKCJK_OFFSET UNITYSDK_OFFSET(0xD4E0B50)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GAIOPOHGCIH_OFFSET UNITYSDK_OFFSET(0xD4E0FC0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_CURRENTCONFIGINDEX_OFFSET UNITYSDK_OFFSET(0xD4DB900)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xD4DB3E0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ANCHORPOSITIONONTRACK_OFFSET UNITYSDK_OFFSET(0xD4DB790)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTCONFIG_OFFSET UNITYSDK_OFFSET(0xD4DB400)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0xD4DB570)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__ISFORWARD_OFFSET UNITYSDK_OFFSET(0xD4DB5F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD4DB530)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GKABJFGMNCP_OFFSET UNITYSDK_OFFSET(0xD4E2380)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_HEBJLGHEFCA_OFFSET UNITYSDK_OFFSET(0xD4E05E0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_HFAFOBDFPLI_OFFSET UNITYSDK_OFFSET(0xD4DE4D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_HFMJFBKOPMK_OFFSET UNITYSDK_OFFSET(0xD4DC280)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_HGBAMGPBKAD_OFFSET UNITYSDK_OFFSET(0xD4DF130)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_IBCCKCAIPHF_OFFSET UNITYSDK_OFFSET(0xD4DEE20)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_IGEAPHPJONH_OFFSET UNITYSDK_OFFSET(0xD4E1A90)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_IHAENAIGJAE_OFFSET UNITYSDK_OFFSET(0xD4DE470)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_JDBAJLPKCOB_OFFSET UNITYSDK_OFFSET(0xD4E2710)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_JHODNFKKFLE_OFFSET UNITYSDK_OFFSET(0xD4E2B10)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_JJGHJNAABCM_OFFSET UNITYSDK_OFFSET(0xD4E1510)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_JMMMHIGBNBB_OFFSET UNITYSDK_OFFSET(0xD4E22F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xD4DD6A0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KCKGPPDFNHK_OFFSET UNITYSDK_OFFSET(0xD4DE5A0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KCLCNKKKKNG_OFFSET UNITYSDK_OFFSET(0xD4DF620)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KHCOLFELLPD_OFFSET UNITYSDK_OFFSET(0xD4DCD90)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KLPCCHHFAHE_OFFSET UNITYSDK_OFFSET(0xD4E06D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KOCFHHPKAMO_OFFSET UNITYSDK_OFFSET(0xD4DD720)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD4DB910)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_KPOHGADNNCE_OFFSET UNITYSDK_OFFSET(0xD4DCD10)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_LHHBFAAJHCI_OFFSET UNITYSDK_OFFSET(0xD4DC000)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_LNPEKGHDIIP_OFFSET UNITYSDK_OFFSET(0xD4E0EE0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MAHPJNEPJGK_OFFSET UNITYSDK_OFFSET(0xD4E1060)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MEBEGPMCELO_OFFSET UNITYSDK_OFFSET(0xD4DFE40)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD4DCDF0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MFOMODLCIDP_OFFSET UNITYSDK_OFFSET(0xD4DB820)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MHFCMBNKMHD_OFFSET UNITYSDK_OFFSET(0xD4DCB50)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xD4DD8D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MJAEBFHACKG_OFFSET UNITYSDK_OFFSET(0xD4E29A0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MNDCJFDCODG_OFFSET UNITYSDK_OFFSET(0xD4DF8F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_MOJJBPBAFFA_OFFSET UNITYSDK_OFFSET(0xD4DDAD0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xD4DD870)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_NFKMIDIPMMG_OFFSET UNITYSDK_OFFSET(0xD4DCBB0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_OEAKGCNIKOA_OFFSET UNITYSDK_OFFSET(0xD4E2090)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_OFOHAEODGEA_OFFSET UNITYSDK_OFFSET(0xD4DF280)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xD4DD7B0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_OLNPHEPNAHP_OFFSET UNITYSDK_OFFSET(0xD4E1F20)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_ONHMHFLFDGJ_OFFSET UNITYSDK_OFFSET(0xD4E0170)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PBDKGLFEMOK_OFFSET UNITYSDK_OFFSET(0xD4E1A30)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD4DBCC0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PCNDBBHMOKN_OFFSET UNITYSDK_OFFSET(0xD4DE620)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PKKHHBLLDBK_OFFSET UNITYSDK_OFFSET(0xD4E2670)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PMEELILDEFE_OFFSET UNITYSDK_OFFSET(0xD4E2470)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xD4DD830)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_PPJOGFADAAH_OFFSET UNITYSDK_OFFSET(0xD4E0570)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_SET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xD4DB3F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xD4DD930)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_TypeDefinitionIndex = 70904;

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
		static ::System::Int32* StaticGet__MaxLoopCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LoopGenerateBehavior")->GetStaticField(0xD520);
		}

		static ::System::Int32* StaticGet__NextEndpointGroupId()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LoopGenerateBehavior")->GetStaticField(0xD524);
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
