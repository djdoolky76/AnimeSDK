#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SkirtIK_HeadDirEnum.h"
#include "unitysdk/SkirtIK_LookDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/GBONKNNPFLF.h"
#include "unitysdk/SkirtIK_CCIGOEDBOJA.h"
class KHPADOCDNBD;
class SkirtIK_HairIKFreeAxisClass;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class SkirtIKConfig_Runtime; }
namespace RPG::Client { class SkirtIKConfig_TransformLUT; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define SKIRTIK_ACCLAHOLINB_OFFSET UNITYSDK_OFFSET(0xE963EA0)
#define SKIRTIK_AMGKEBJEMLJ_OFFSET UNITYSDK_OFFSET(0xE966C60)
#define SKIRTIK_AMHCAGPECFN_OFFSET UNITYSDK_OFFSET(0xE966BB0)
#define SKIRTIK_AOOGEEJFJHB_OFFSET UNITYSDK_OFFSET(0xE962890)
#define SKIRTIK_AWAKE_OFFSET UNITYSDK_OFFSET(0xE962670)
#define SKIRTIK_BCNMGDLIAHH_OFFSET UNITYSDK_OFFSET(0xE964BC0)
#define SKIRTIK_BGFOLIMADME_OFFSET UNITYSDK_OFFSET(0xE966AD0)
#define SKIRTIK_BMFMMLCFAOB_OFFSET UNITYSDK_OFFSET(0xE964AE0)
#define SKIRTIK_CGIJGIMHHFF_OFFSET UNITYSDK_OFFSET(0xE9660B0)
#define SKIRTIK_CKHMCNHKDOE_OFFSET UNITYSDK_OFFSET(0xE967C60)
#define SKIRTIK_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0xE95FBA0)
#define SKIRTIK_CTOR_OFFSET UNITYSDK_OFFSET(0xE968370)
#define SKIRTIK_DISABLEHAIRCUSTOMCURVEOFFSET_OFFSET UNITYSDK_OFFSET(0xE9625D0)
#define SKIRTIK_DMMFDFODDAM_OFFSET UNITYSDK_OFFSET(0xE965080)
#define SKIRTIK_FEPDNHGNJPP_OFFSET UNITYSDK_OFFSET(0xE964CA0)
#define SKIRTIK_FLUSHTHREADDATA_OFFSET UNITYSDK_OFFSET(0xE961C30)
#define SKIRTIK_FMDIMGLHCEA_OFFSET UNITYSDK_OFFSET(0xE965260)
#define SKIRTIK_GETCURVEEVALUATEVALUE_OFFSET UNITYSDK_OFFSET(0xE964E70)
#define SKIRTIK_GETPERFORMANCERUNTIMECACHE_OFFSET UNITYSDK_OFFSET(0xE95F650)
#define SKIRTIK_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xE95F750)
#define SKIRTIK_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0xE964D70)
#define SKIRTIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xE961D00)
#define SKIRTIK_GMOFPMPPMGA_OFFSET UNITYSDK_OFFSET(0xE962B00)
#define SKIRTIK_IHKHIANLAKP_OFFSET UNITYSDK_OFFSET(0xE9669D0)
#define SKIRTIK_JMAEKLAJMOB_OFFSET UNITYSDK_OFFSET(0xE968320)
#define SKIRTIK_KKPCHJEHCHD_OFFSET UNITYSDK_OFFSET(0xE966D00)
#define SKIRTIK_MNFGNDFAKBA_OFFSET UNITYSDK_OFFSET(0xE962250)
#define SKIRTIK_PJKOOCKDNPG_1_OFFSET UNITYSDK_OFFSET(0xE964FF0)
#define SKIRTIK_PJKOOCKDNPG_OFFSET UNITYSDK_OFFSET(0xE964F50)
#define SKIRTIK_PREPROCESS_OFFSET UNITYSDK_OFFSET(0xE961EC0)
#define SKIRTIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xE962190)
#define SKIRTIK_RECORDBEFOREIK_OFFSET UNITYSDK_OFFSET(0xE9622D0)
#define SKIRTIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xE961DA0)
#define SKIRTIK_SETHAIRCUSTOMCURVEOFFSET_OFFSET UNITYSDK_OFFSET(0xE962520)
#define SKIRTIK_START_OFFSET UNITYSDK_OFFSET(0xE9626E0)
#define SKIRTIK_UPDATESKIRTIKSERIALIZEDATAFROMASSET_OFFSET UNITYSDK_OFFSET(0xE962080)
#define SKIRTIK_UPDATESKIRTIKSERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0xE962620)

inline static constexpr unsigned int SkirtIK_TypeDefinitionIndex = 47250;

	class SkirtIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean UseConfigData; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::Client::SkirtIKConfig_Runtime* ConfigData; // 0x20
		::RPG::Client::SkirtIKConfig_TransformLUT* TransformLUT; // 0x28
		::System::Boolean DisableSkirtIk; // 0x30
		::System::Boolean DisableHairIk; // 0x31
		::System::Byte _padding1[0x2];
		::System::Single SkirtEndDecayRate; // 0x34
		::System::Single SkirtStartDecayRate; // 0x38
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* left_HipL; // 0x40
		::UnityEngine::Transform* left_KneeL; // 0x48
		::System::Single fLOriWeight; // 0x50
		::UnityEngine::Quaternion minL; // 0x54
		::UnityEngine::Quaternion maxL; // 0x64
		::System::Boolean LMaxWeightAdjust; // 0x74
		::System::Byte _padding3[0x3];
		::UnityEngine::AnimationCurve* LWeightCurve; // 0x78
		::System::Single lLerp; // 0x80
		::System::Byte _padding4[0x4];
		::Il2CppArray<::System::Object*>* LSkirtIK; // 0x88
		::UnityEngine::Transform* right_HipR; // 0x90
		::UnityEngine::Transform* right_KneeR; // 0x98
		::System::Single fROriWeight; // 0xA0
		::UnityEngine::Quaternion minR; // 0xA4
		::UnityEngine::Quaternion maxR; // 0xB4
		::System::Boolean RMaxWeightAdjust; // 0xC4
		::System::Byte _padding5[0x3];
		::UnityEngine::AnimationCurve* RWeightCurve; // 0xC8
		::System::Single rLerp; // 0xD0
		::System::Byte _padding6[0x4];
		::Il2CppArray<::System::Object*>* RSkirtIK; // 0xD8
		::System::Boolean NLOGDFIGNLE; // 0xE0
		::System::Byte _padding7[0x3];
		::System::Single MoveX; // 0xE4
		::System::Single MoveY; // 0xE8
		::System::Byte _padding8[0x4];
		::UnityEngine::AnimationCurve* UDRatioCurve; // 0xF0
		::UnityEngine::AnimationCurve* LRRatioCurve; // 0xF8
		::System::Single UDWeight; // 0x100
		::System::Single LRWeight; // 0x104
		::UnityEngine::Vector2 vCorrect; // 0x108
		::System::Single HairErrTolerRate; // 0x110
		::System::Single HairDecayRate; // 0x114
		::System::Single HairStartDecayRate; // 0x118
		::System::Boolean UseNewRotationEvaluateMode; // 0x11C
		::System::Boolean UseDirectionPosition; // 0x11D
		::System::Boolean AccurateAngleEnable; // 0x11E
		::System::Byte _padding9[0x1];
		::UnityEngine::Vector3 SpecialUpAngle; // 0x120
		::UnityEngine::Vector3 SpecialDownAngle; // 0x12C
		::UnityEngine::Vector4 SpecialLeftAngle; // 0x138
		::UnityEngine::Vector4 SpecialRightAngle; // 0x148
		::UnityEngine::Vector4 DebugValue; // 0x158
		::UnityEngine::Vector2 HairIKUDAngle; // 0x168
		::UnityEngine::Vector2 HairIKCentre; // 0x170
		::UnityEngine::Vector2 HairIKLRAngle; // 0x178
		::System::Int32 From; // 0x180
		::System::Int32 To; // 0x184
		::System::Int32 BoneNum; // 0x188
		::System::Byte _padding10[0x4];
		::Il2CppArray<::System::Object*>* HairBoneData; // 0x190
		::Il2CppArray<::System::Object*>* HairIKUp; // 0x198
		::Il2CppArray<::System::Object*>* HairIKLeft; // 0x1A0
		::Il2CppArray<::System::Object*>* HairIKRight; // 0x1A8
		::Il2CppArray<::System::Object*>* HairIKDown; // 0x1B0
		::Il2CppArray<::System::Object*>* HairIKCustom; // 0x1B8
		::System::Collections::Generic::List_1<::System::Object*>* HairIKFreeAxisData; // 0x1C0
		::System::Boolean DisableHairRestrict; // 0x1C8
		::System::Byte _padding11[0x3];
		::System::Single HairMaxRestrict; // 0x1CC
		::System::Single accuracy; // 0x1D0
		::UnityEngine::Quaternion minL_Knee; // 0x1D4
		::UnityEngine::Quaternion maxL_Knee; // 0x1E4
		::UnityEngine::Quaternion minR_Knee; // 0x1F4
		::UnityEngine::Quaternion maxR_Knee; // 0x204
		::UnityEngine::Quaternion CFBICALDKAK; // 0x214
		::UnityEngine::Quaternion APPCEJICOBN; // 0x224
		::System::Single LFNMBHDAOLP; // 0x234
		::System::Single HHCOOIBFCHM; // 0x238
		::System::Single EHPHNMIJLEC; // 0x23C
		::System::Single BPNPJMDHKBJ; // 0x240
		::System::Byte _padding12[0x4];
		::UnityEngine::GameObject* DLLJAOHOJPE; // 0x248
		::UnityEngine::GameObject* MEMDBKCPPFB; // 0x250
		::RootMotion::FinalIK::GrounderIK* JDLKFNLHNAF; // 0x258
		::RPG::Client::LookAtIK* FFOBPOJECCP; // 0x260
		::UnityEngine::Transform* ABEAPFBFMJB; // 0x268
		::RPG::Client::AttachPointMapping* GAKNPJENDNE; // 0x270
		::RPG::Client::CharacterMonoAvatar* BFKHDDHKNPM; // 0x278
		::System::Boolean KMEHBKEPCCB; // 0x280
		::System::Byte _padding13[0x3];
		::UnityEngine::Vector3 MGIDGGGJEFL; // 0x284
		::System::Boolean GLBAECDBOJB; // 0x290
		::System::Byte _padding14[0x7];
		::UnityEngine::Animator* OONIEDHHBIK; // 0x298
		::System::Boolean GBMHOKIFHDJ; // 0x2A0
		::System::Boolean JCANLMFHMDF; // 0x2A1
		::System::Boolean JJBOABOLNCP; // 0x2A2
		::System::Boolean AOJJOPECNLJ; // 0x2A3
		::System::Boolean MOIJEJOCOGN; // 0x2A4
		::System::Boolean ACECJFJDIHL; // 0x2A5
		::System::Boolean IEKLKGAKPJE; // 0x2A6
		::System::Boolean MJDCCOCFCHG; // 0x2A7
		::System::Boolean JFCBOFIAEHE; // 0x2A8
		::System::Boolean BLNEOIGBCNG; // 0x2A9
		::System::Boolean AIAGFPFNKED; // 0x2AA
		::System::Boolean MLMHMBCNPLE; // 0x2AB
		::System::Boolean HAOBHLGMHML; // 0x2AC
		::System::Byte _padding15[0x3];
		::System::Single ACGFCKJCAEL; // 0x2B0
		::System::Single GKGKNKIPFBK; // 0x2B4
		::System::Single DPFNJHBAPHO; // 0x2B8
		::System::Single GMPOEHGLJEL; // 0x2BC
		::System::Single CODAAIJJCCD; // 0x2C0
		::System::Single BFDMPAEODHK; // 0x2C4
		::System::Single EFNIAMJOJIL; // 0x2C8
		::System::Boolean EEOGHCFKOGK; // 0x2CC
		::System::Byte _padding16[0x3];
		::Il2CppArray<::System::Object*>* BHOLEKGMOKC; // 0x2D0
		::Il2CppArray<::UnityEngine::Vector2>* EOENKKFOEBJ; // 0x2D8
		::Il2CppArray<::System::Object*>* DACMPHFBAMH; // 0x2E0
		::SkirtIK_HairIKFreeAxisClass* IAAICLKMEHL; // 0x2E8
		::System::Boolean POLGBPPGGKE; // 0x2F0
		::System::Byte _padding17[0x3];
		::UnityEngine::Vector3 PNFMOMICCJN; // 0x2F4
		::SkirtIK_LookDirection GFICLNHEDNG; // 0x300
		::System::Boolean BEOMHGAKAPA; // 0x304
		::System::Byte _padding18[0x3];
		::System::Single NCFGEFEFDFA; // 0x308
		::System::Single BMHIIAEFFGO; // 0x30C
		::System::Single AMIHIIPPDKB; // 0x310
		::System::Single LANNFMNNGLA; // 0x314
		::UnityEngine::AnimationCurve* APJKHKJCAAC; // 0x318
		::System::Boolean NJCPBBJDLPL; // 0x320
		::System::Byte _padding19[0x3];
		::System::Single BPFGJIOJNCM; // 0x324
		::System::Single EBDHLMIGOAD; // 0x328
		::System::Single BKFHNJGFKGN; // 0x32C
		::System::Single GMANFGHFIEO; // 0x330
		::System::Byte _padding20[0x4];
		::Il2CppArray<::UnityEngine::Transform*>* _HairBone; // 0x338
		::Il2CppArray<::UnityEngine::Transform*>* _LeftSkirtBone; // 0x340
		::Il2CppArray<::UnityEngine::Transform*>* _RightSkirtBone; // 0x348
		// static const ::System::String* FKJAOKPLLKN; // 0x0
		// static const ::System::String* GLDNHOKDGHO; // 0x0
		// static const ::System::String* KENCLPDDFIE; // 0x0
		// static const ::System::String* ANCLPAIBHJN; // 0x0
		// static const ::System::Object DNJHKABICLF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_CTOR_OFFSET))(this);
		}

		::System::Boolean GetPerformanceRuntimeCache(::System::String* a1, ::KHPADOCDNBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::KHPADOCDNBD*))((::PBYTE)hIl2Cpp + SKIRTIK_GETPERFORMANCERUNTIMECACHE_OFFSET))(this, a1, a2);
		}

		::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + SKIRTIK_GETREFERENCETRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::GBONKNNPFLF a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::GBONKNNPFLF))((::PBYTE)hIl2Cpp + SKIRTIK_COLLECTTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Void FlushThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::GBONKNNPFLF a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::GBONKNNPFLF))((::PBYTE)hIl2Cpp + SKIRTIK_FLUSHTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + SKIRTIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Void PreProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_PREPROCESS_OFFSET))(this);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void RecordBeforeIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_RECORDBEFOREIK_OFFSET))(this);
		}

		::System::Void SetHairCustomCurveOffset(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + SKIRTIK_SETHAIRCUSTOMCURVEOFFSET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DisableHairCustomCurveOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_DISABLEHAIRCUSTOMCURVEOFFSET_OFFSET))(this);
		}

		::System::Void UpdateSkirtIKSerializeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_UPDATESKIRTIKSERIALIZEDATA_OFFSET))(this);
		}

		::System::Void UpdateSkirtIKSerializeDataFromAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_UPDATESKIRTIKSERIALIZEDATAFROMASSET_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_START_OFFSET))(this);
		}

		::System::Void MNFGNDFAKBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_MNFGNDFAKBA_OFFSET))(this);
		}

		::System::Void AOOGEEJFJHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_AOOGEEJFJHB_OFFSET))(this);
		}

		::System::Single BMFMMLCFAOB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_BMFMMLCFAOB_OFFSET))(this, a1);
		}

		::System::Single BCNMGDLIAHH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_BCNMGDLIAHH_OFFSET))(this, a1);
		}

		::System::Single FEPDNHGNJPP(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_FEPDNHGNJPP_OFFSET))(this, a1, a2);
		}

		static ::System::Single GetWeight(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_GETWEIGHT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single GetCurveEvaluateValue(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SKIRTIK_GETCURVEEVALUATEVALUE_OFFSET))(a1, a2, a3);
		}

		::System::Single PJKOOCKDNPG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_PJKOOCKDNPG_OFFSET))(this, a1, a2, a3);
		}

		::System::Single PJKOOCKDNPG_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_PJKOOCKDNPG_1_OFFSET))(this, a1, a2);
		}

		::System::Void GMOFPMPPMGA(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SKIRTIK_GMOFPMPPMGA_OFFSET))(this, a1, a2);
		}

		::System::Void ACCLAHOLINB(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SKIRTIK_ACCLAHOLINB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FMDIMGLHCEA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_FMDIMGLHCEA_OFFSET))(this, a1, a2);
		}

		::System::Int32 IHKHIANLAKP(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_IHKHIANLAKP_OFFSET))(this, a1);
		}

		static ::SkirtIK_CCIGOEDBOJA BGFOLIMADME(::SkirtIK_HairIKFreeAxisClass* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::SkirtIK_CCIGOEDBOJA(*)(::SkirtIK_HairIKFreeAxisClass*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_BGFOLIMADME_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 AMHCAGPECFN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_AMHCAGPECFN_OFFSET))(a1, a2, a3);
		}

		::System::Void CGIJGIMHHFF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SKIRTIK_CGIJGIMHHFF_OFFSET))(this, a1, a2);
		}

		::SkirtIK_HeadDirEnum AMGKEBJEMLJ(::UnityEngine::Vector2 a1)
		{
			return ((::SkirtIK_HeadDirEnum(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SKIRTIK_AMGKEBJEMLJ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 DMMFDFODDAM(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SKIRTIK_DMMFDFODDAM_OFFSET))(this, a1);
		}

		::System::Void KKPCHJEHCHD(::SkirtIK_LookDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::SkirtIK_LookDirection))((::PBYTE)hIl2Cpp + SKIRTIK_KKPCHJEHCHD_OFFSET))(this, a1);
		}

		::System::Void CKHMCNHKDOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_CKHMCNHKDOE_OFFSET))(this);
		}

		::System::Void JMAEKLAJMOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_JMAEKLAJMOB_OFFSET))(this);
		}

	};
