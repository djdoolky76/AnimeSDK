#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_LineRendererAni_CullingMode.h"
#include "unitysdk/RPG/Client/Effect_LineRendererAni_DynamicCenterUpdateMode.h"
#include "unitysdk/RPG/Client/Effect_LineRendererAni_NoiseQualityMode.h"
#include "unitysdk/RPG/Client/Effect_LineRendererAni_Vector3Curve.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_LINERENDERERANI_AAMLDAGCMFP_OFFSET UNITYSDK_OFFSET(0xCD45660)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_BIPKLDKKFNP_OFFSET UNITYSDK_OFFSET(0xCD45D70)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_CBJCNJEBMAN_OFFSET UNITYSDK_OFFSET(0xCD46DC0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD49050)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_CGJFNGCEPJD_1_OFFSET UNITYSDK_OFFSET(0xCD46690)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_CGJFNGCEPJD_OFFSET UNITYSDK_OFFSET(0xCD46610)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_CTOR_OFFSET UNITYSDK_OFFSET(0xCD48C80)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD41E20)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_DLGOBELGIJL_OFFSET UNITYSDK_OFFSET(0xCD44DC0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_DMHOOMPPFMK_OFFSET UNITYSDK_OFFSET(0xCD45F00)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_EIMHJEOOJMG_OFFSET UNITYSDK_OFFSET(0xCD47570)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_EJEBMNCLIOO_OFFSET UNITYSDK_OFFSET(0xCD46D00)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_EMFGNBPGOPF_OFFSET UNITYSDK_OFFSET(0xCD46C40)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xCD429D0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_FAINKAFENAL_OFFSET UNITYSDK_OFFSET(0xCD42620)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_FIOEFKBHKJF_OFFSET UNITYSDK_OFFSET(0xCD42EF0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_FLASHING_OFFSET UNITYSDK_OFFSET(0xCD44960)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_GCNFOAGCCPM_OFFSET UNITYSDK_OFFSET(0xCD457F0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_HAOPGMJEFBP_OFFSET UNITYSDK_OFFSET(0xCD488F0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_HKBIIBEKLNA_OFFSET UNITYSDK_OFFSET(0xCD42580)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_HNLKKLDOMNG_OFFSET UNITYSDK_OFFSET(0xCD41D80)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_IBOGPLBCKAF_OFFSET UNITYSDK_OFFSET(0xCD46EB0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_IEJGGEBMHJH_OFFSET UNITYSDK_OFFSET(0xCD45240)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_IEOBJLGPFBP_OFFSET UNITYSDK_OFFSET(0xCD46A50)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_IGPCIHDDHNF_OFFSET UNITYSDK_OFFSET(0xCD455D0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_JOHJGPOEEAG_OFFSET UNITYSDK_OFFSET(0xCD46400)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_KEENHNJNEDC_OFFSET UNITYSDK_OFFSET(0xCD481A0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_LENBJJJBBPE_OFFSET UNITYSDK_OFFSET(0xCD45BD0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_MELBFJJHBFE_OFFSET UNITYSDK_OFFSET(0xCD470B0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_MEOFNFEALAI_OFFSET UNITYSDK_OFFSET(0xCD42B30)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_MLKPOHLOJKI_1_OFFSET UNITYSDK_OFFSET(0xCD468E0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_MLKPOHLOJKI_OFFSET UNITYSDK_OFFSET(0xCD46800)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_MPNKJADCCGK_OFFSET UNITYSDK_OFFSET(0xCD46570)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_NDKNAHHHFKG_OFFSET UNITYSDK_OFFSET(0xCD42B90)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_NHKJFGCFMDN_OFFSET UNITYSDK_OFFSET(0xCD461F0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_NMDDMMILMJL_OFFSET UNITYSDK_OFFSET(0xCD41FB0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_NOGNBLJBDEI_OFFSET UNITYSDK_OFFSET(0xCD46B20)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_OIKEECCKEFF_OFFSET UNITYSDK_OFFSET(0xCD44B20)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_OMGBCODAFNK_OFFSET UNITYSDK_OFFSET(0xCD48840)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD42310)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD41E60)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_OOAOPFIIIMH_OFFSET UNITYSDK_OFFSET(0xCD45C80)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_PCGCCKNCEFL_1_OFFSET UNITYSDK_OFFSET(0xCD430E0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_PCGCCKNCEFL_OFFSET UNITYSDK_OFFSET(0xCD426F0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_PODELHAGLLG_OFFSET UNITYSDK_OFFSET(0xCD41C40)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_RESET_OFFSET UNITYSDK_OFFSET(0xCD41CD0)
#define RPG_CLIENT_EFFECT_LINERENDERERANI_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD42430)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_LineRendererAni_TypeDefinitionIndex = 70499;

	class Effect_LineRendererAni : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 LineLength; // 0x18
		::System::Single FollowSpeed; // 0x1C
		::UnityEngine::AnimationCurve* FollowCurve; // 0x20
		::UnityEngine::ParticleSystemSimulationSpace simulationSpace; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* customSimulationSpace; // 0x30
		::System::Boolean UseTimeDelay; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single TimeDelay; // 0x3C
		::UnityEngine::AnimationCurve* TimeBlinkCurve; // 0x40
		::System::Boolean DOPLKAEJBBN; // 0x48
		::System::Byte _padding2[0x3];
		::System::Single PHMCBNDJNIL; // 0x4C
		::System::Single JOLHIGLIPLF; // 0x50
		::UnityEngine::Vector3 LineTailOffset; // 0x54
		::System::Single LineTailOffsetLength; // 0x60
		::System::Boolean LineTailCurveOffsetEnable; // 0x64
		::System::Byte _padding3[0x3];
		::RPG::Client::Effect_LineRendererAni_Vector3Curve LineTailOffsetCurve; // 0x68
		::System::Boolean LineTailCenterOffsetEnable; // 0x78
		::System::Byte _padding4[0x3];
		::System::Single LineTailCenterOffsetRatio; // 0x7C
		::System::Boolean UseRatioSym; // 0x80
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector3 PointOffsetRandom; // 0x84
		::UnityEngine::Vector3 WaveOffset; // 0x90
		::System::Single WaveLength; // 0x9C
		::System::Single WaveSpeed; // 0xA0
		::System::Boolean UseLifeTimeScaling; // 0xA4
		::System::Byte _padding6[0x3];
		::System::Single LifeTime; // 0xA8
		::System::Byte _padding7[0x4];
		::UnityEngine::AnimationCurve* ScalingPosCurve; // 0xB0
		::UnityEngine::AnimationCurve* ScalingWidthCurve; // 0xB8
		::System::Boolean UseTransScale; // 0xC0
		::System::Byte _padding8[0x3];
		::System::Single OriWidthMultiplier; // 0xC4
		::System::Boolean UseDynamicMode; // 0xC8
		::System::Byte _padding9[0x7];
		::UnityEngine::Transform* CustomDynamicCenter; // 0xD0
		::RPG::Client::Effect_LineRendererAni_DynamicCenterUpdateMode CenterUpdateMode; // 0xD8
		::System::Single CenterForceScale; // 0xDC
		::System::Single DragForce; // 0xE0
		::System::Single DynamicForceBlend; // 0xE4
		::System::Boolean NoiseEnable; // 0xE8
		::System::Byte _padding10[0x3];
		::System::Single NoiseStrength; // 0xEC
		::System::Single NoiseFrequency; // 0xF0
		::RPG::Client::Effect_LineRendererAni_NoiseQualityMode NoiseQuality; // 0xF4
		::System::Single ScrollSpeed; // 0xF8
		::System::Byte _padding11[0x4];
		::UnityEngine::AnimationCurve* NoiseRatioCurve; // 0x100
		::System::Boolean _UseNoiseSetupRatioTime; // 0x108
		::System::Byte _padding12[0x3];
		::System::Single _NoiseSetupRatioStartTime; // 0x10C
		::System::Single _NoiseSetupRatioEndTime; // 0x110
		::System::Single _NoiseWeight; // 0x114
		::System::UInt32 _fixedTickRate; // 0x118
		::System::Boolean _updatePointInLateTick; // 0x11C
		::System::Boolean BlinkSmooth; // 0x11D
		::System::Byte _padding13[0x2];
		::System::Single BlinkSmoothMaxRange; // 0x120
		::System::Single BlinkSmoottFollowSpeedPow; // 0x124
		::System::Single FlashCommitMinDistance; // 0x128
		::System::Boolean FlashCommitManual; // 0x12C
		::System::Boolean EditorPreview; // 0x12D
		::System::Boolean UpdateDistanceEnable; // 0x12E
		::System::Byte _padding14[0x1];
		::System::Single UpdateDistanceScale; // 0x130
		::System::Single UpdateBoundsSizeScale; // 0x134
		::System::Boolean ContinuousUpdateBounds; // 0x138
		::System::Byte _padding15[0x3];
		::RPG::Client::Effect_LineRendererAni_CullingMode LineRenderCullingMode; // 0x13C
		::System::Boolean VisableState; // 0x140
		::System::Boolean UpdateState; // 0x141
		::System::Byte _padding16[0x2];
		::System::Int32 TargetWaitCount; // 0x144
		::System::Int32 UpdateCount; // 0x148
		::System::Byte _padding17[0x4];
		::UnityEngine::LineRenderer* MFAHAGLIOMK; // 0x150
		::Il2CppArray<::UnityEngine::Vector3>* NDLHIIGJMEL; // 0x158
		::Il2CppArray<::UnityEngine::Vector3>* PCFDMAPICLM; // 0x160
		::System::Nullable_1<::UnityEngine::Matrix4x4> LNHFKPFGJFG; // 0x168
		::System::Byte _padding18[0x3C];
		::System::Nullable_1<::UnityEngine::Matrix4x4> GKGPNHIDBMB; // 0x1AC
		::System::Byte _padding19[0x3C];
		::System::Boolean GGMBMBPBIPG; // 0x1F0
		::System::Boolean DODGGBONNPK; // 0x1F1
		::System::Boolean GCCOEINGCPH; // 0x1F2
		::System::Byte _padding20[0x1];
		::UnityEngine::Vector3 OFOBKCMBBDP; // 0x1F4
		::UnityEngine::Matrix4x4 KPKAEPANNGD; // 0x200
		::System::Single APKGABOANPB; // 0x240
		::System::Boolean IMCNIMNDENN; // 0x244
		::System::Byte _padding21[0x3];
		::UnityEngine::Vector3 BJOCBPFKJDP; // 0x248
		::UnityEngine::Vector3 BBMPPHGMLCH; // 0x254
		::UnityEngine::Bounds LEMEEBPKBJB; // 0x260
		::System::Boolean DNALBLMLCHM; // 0x278
		::System::Byte _padding22[0x3];
		::UnityEngine::Vector3 ILGGJJHMJIC; // 0x27C
		::System::Single CIEOKMJDNEO; // 0x288
		::System::Single HKHFGIOJEPK; // 0x28C
		::System::Single LGDJALFABCL; // 0x290
		::System::Single HGAJKMDAOOL; // 0x294
		::System::Boolean BJMJLOKEEIB; // 0x298
		::System::Byte _padding23[0x3];
		::UnityEngine::Vector2 PNLCJNLHHDN; // 0x29C
		::UnityEngine::Vector2 NHCDJGAFIOI; // 0x2A4
		::UnityEngine::Vector3 PADCEMKOHGM; // 0x2AC
		::UnityEngine::Vector2 KNGJMGMEFLG; // 0x2B8
		::UnityEngine::Vector2 PFFINHHHDHB; // 0x2C0
		::UnityEngine::Vector2 EKDKKIIEGGK; // 0x2C8
		::UnityEngine::Vector2 EJCEHDBOFAM; // 0x2D0
		::UnityEngine::Vector2 NCOFCKHEAFF; // 0x2D8
		::UnityEngine::Vector2 IDFLDDNOOMK; // 0x2E0
		::UnityEngine::Vector2 AAPLOECJNJN; // 0x2E8
		::UnityEngine::Vector2 JGDIJAKHOFB; // 0x2F0
		static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_GACDMFGMLLG()
		{
			return (::Il2CppArray<::UnityEngine::Plane>**)UnitySDK::FromName("RPG.Client", "Effect_LineRendererAni")->GetStaticField(0x39B70);
		}

		static ::Il2CppArray<::System::Single>** StaticGet_GBOFOONMIFB()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("RPG.Client", "Effect_LineRendererAni")->GetStaticField(0x39B78);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_AFCBNPOGMPI()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)UnitySDK::FromName("RPG.Client", "Effect_LineRendererAni")->GetStaticField(0x39B80);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_LNEBFEMHHAB()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("RPG.Client", "Effect_LineRendererAni")->GetStaticField(0x39B88);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_IEOEMHDOLMD()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("RPG.Client", "Effect_LineRendererAni")->GetStaticField(0x39B90);
		}

		static ::System::Int32* StaticGet_RandomSeedShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_LineRendererAni")->GetStaticField(0xC4D0);
		}

		static ::System::Int32* StaticGet_QualitySetting()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_LineRendererAni")->GetStaticField(0xC4D4);
		}

		// static const ::System::Object JCGBLOEMAPO; // 0x0
		// static const ::System::Object KPPEIPKFBLP; // 0x0
		// static const ::System::Object MADLEAMLGOL; // 0x0
		// static const ::System::Object HKGIGHNENPK; // 0x0
		// static const ::System::Object JOEOFOLJCLE; // 0x0
		// static const ::System::Object PGIDIJKAFCE; // 0x0
		// static const ::System::Object JPPPKIFNNKP; // 0x0
		// static const ::System::Object ANGIHJMACEO; // 0x0
		// static const ::System::Object KCPOFDBDJPC; // 0x0
		// static const ::System::Object NMIBFCHMFOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_CCTOR_OFFSET))();
		}

		::System::Single PODELHAGLLG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_PODELHAGLLG_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_UPDATE_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void HKBIIBEKLNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_HKBIIBEKLNA_OFFSET))(this);
		}

		::System::Void NMDDMMILMJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_NMDDMMILMJL_OFFSET))(this);
		}

		::System::Void PCGCCKNCEFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_PCGCCKNCEFL_OFFSET))(this);
		}

		::System::Void OIKEECCKEFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_OIKEECCKEFF_OFFSET))(this);
		}

		::System::Void DLGOBELGIJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_DLGOBELGIJL_OFFSET))(this);
		}

		::System::Void AAMLDAGCMFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_AAMLDAGCMFP_OFFSET))(this);
		}

		::System::Void IGPCIHDDHNF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_IGPCIHDDHNF_OFFSET))(this, a1);
		}

		::System::Void PCGCCKNCEFL_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_PCGCCKNCEFL_1_OFFSET))(this, a1, a2);
		}

		::System::Void GCNFOAGCCPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_GCNFOAGCCPM_OFFSET))(this);
		}

		::System::Void OOAOPFIIIMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_OOAOPFIIIMH_OFFSET))(this);
		}

		::System::Void MEOFNFEALAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_MEOFNFEALAI_OFFSET))(this);
		}

		::System::Void NDKNAHHHFKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_NDKNAHHHFKG_OFFSET))(this);
		}

		::System::Single LENBJJJBBPE(::System::Boolean a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_LENBJJJBBPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Flashing(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_FLASHING_OFFSET))(this, a1);
		}

		::System::Boolean FAINKAFENAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_FAINKAFENAL_OFFSET))(this);
		}

		::System::Boolean NHKJFGCFMDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_NHKJFGCFMDN_OFFSET))(this);
		}

		::System::Single JOHJGPOEEAG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_JOHJGPOEEAG_OFFSET))(this);
		}

		::System::Boolean DMHOOMPPFMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_DMHOOMPPFMK_OFFSET))(this);
		}

		::System::Boolean BIPKLDKKFNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_BIPKLDKKFNP_OFFSET))(this);
		}

		::System::Void FIOEFKBHKJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_FIOEFKBHKJF_OFFSET))(this);
		}

		::System::Void HNLKKLDOMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_HNLKKLDOMNG_OFFSET))(this);
		}

		::System::Int32 MPNKJADCCGK(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_MPNKJADCCGK_OFFSET))(this, a1);
		}

		::System::Single CGJFNGCEPJD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_CGJFNGCEPJD_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 CGJFNGCEPJD_1(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Vector2 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_CGJFNGCEPJD_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Single MLKPOHLOJKI(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_MLKPOHLOJKI_OFFSET))(this, a1, a2, a3);
		}

		::System::Single MLKPOHLOJKI_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_MLKPOHLOJKI_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single IEOBJLGPFBP(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_IEOBJLGPFBP_OFFSET))(this, a1);
		}

		::System::Single NOGNBLJBDEI(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_NOGNBLJBDEI_OFFSET))(this, a1);
		}

		::System::Single EMFGNBPGOPF(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_EMFGNBPGOPF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 EJEBMNCLIOO(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_EJEBMNCLIOO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CBJCNJEBMAN(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_CBJCNJEBMAN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 IBOGPLBCKAF(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_IBOGPLBCKAF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 MELBFJJHBFE(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_MELBFJJHBFE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 EIMHJEOOJMG(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_EIMHJEOOJMG_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Vector3>* KEENHNJNEDC(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_KEENHNJNEDC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 HAOPGMJEFBP(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_HAOPGMJEFBP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::Vector3 OMGBCODAFNK(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_OMGBCODAFNK_OFFSET))(this, a1, a2);
		}

		::System::Void IEJGGEBMHJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERANI_IEJGGEBMHJH_OFFSET))(this);
		}

	};
}
