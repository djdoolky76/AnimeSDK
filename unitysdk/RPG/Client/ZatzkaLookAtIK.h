#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class LookAtIK; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ZATZKALOOKATIK_AGAHKMLFEFF_OFFSET UNITYSDK_OFFSET(0xE48D8E0)
#define RPG_CLIENT_ZATZKALOOKATIK_AKCGHEJBEJB_OFFSET UNITYSDK_OFFSET(0xE48C3A0)
#define RPG_CLIENT_ZATZKALOOKATIK_APBDHCICPLG_OFFSET UNITYSDK_OFFSET(0xE48C950)
#define RPG_CLIENT_ZATZKALOOKATIK_AWAKE_OFFSET UNITYSDK_OFFSET(0xE48AE60)
#define RPG_CLIENT_ZATZKALOOKATIK_BBJDGIJHJNL_OFFSET UNITYSDK_OFFSET(0xE48BA50)
#define RPG_CLIENT_ZATZKALOOKATIK_CTOR_OFFSET UNITYSDK_OFFSET(0xE48DD70)
#define RPG_CLIENT_ZATZKALOOKATIK_EILPKDINLHM_OFFSET UNITYSDK_OFFSET(0xE48D040)
#define RPG_CLIENT_ZATZKALOOKATIK_FAKBHBHJLJC_OFFSET UNITYSDK_OFFSET(0xE48C840)
#define RPG_CLIENT_ZATZKALOOKATIK_GAOCJHDAGDH_OFFSET UNITYSDK_OFFSET(0xE48C5A0)
#define RPG_CLIENT_ZATZKALOOKATIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xE48AAF0)
#define RPG_CLIENT_ZATZKALOOKATIK_GPAHJIMIDNG_OFFSET UNITYSDK_OFFSET(0xE48D2B0)
#define RPG_CLIENT_ZATZKALOOKATIK_HIKHCDMOMBB_OFFSET UNITYSDK_OFFSET(0xE48CF00)
#define RPG_CLIENT_ZATZKALOOKATIK_IBCIJPLGPFE_OFFSET UNITYSDK_OFFSET(0xE48A7C0)
#define RPG_CLIENT_ZATZKALOOKATIK_JCLKKOFFGOB_OFFSET UNITYSDK_OFFSET(0xE48D970)
#define RPG_CLIENT_ZATZKALOOKATIK_JLNCGBDFABE_OFFSET UNITYSDK_OFFSET(0xE48C670)
#define RPG_CLIENT_ZATZKALOOKATIK_KFCJKMPPBOL_OFFSET UNITYSDK_OFFSET(0xE48C460)
#define RPG_CLIENT_ZATZKALOOKATIK_KJJECAHCCEA_OFFSET UNITYSDK_OFFSET(0xE48AA10)
#define RPG_CLIENT_ZATZKALOOKATIK_KOKICDNENPF_OFFSET UNITYSDK_OFFSET(0xE48D6B0)
#define RPG_CLIENT_ZATZKALOOKATIK_LBKECJCILAB_OFFSET UNITYSDK_OFFSET(0xE48C8D0)
#define RPG_CLIENT_ZATZKALOOKATIK_MHNCIMNFDAF_OFFSET UNITYSDK_OFFSET(0xE48CFB0)
#define RPG_CLIENT_ZATZKALOOKATIK_MKJJMLMFKKG_OFFSET UNITYSDK_OFFSET(0xE48B220)
#define RPG_CLIENT_ZATZKALOOKATIK_MLKFEHNLPNB_OFFSET UNITYSDK_OFFSET(0xE48D4B0)
#define RPG_CLIENT_ZATZKALOOKATIK_MOCGKDIPCKF_OFFSET UNITYSDK_OFFSET(0xE48B0B0)
#define RPG_CLIENT_ZATZKALOOKATIK_MPGJEFMLDLP_OFFSET UNITYSDK_OFFSET(0xE48B840)
#define RPG_CLIENT_ZATZKALOOKATIK_NNIOLPGAIEE_OFFSET UNITYSDK_OFFSET(0xE48CC90)
#define RPG_CLIENT_ZATZKALOOKATIK_OEDCKODNKEL_OFFSET UNITYSDK_OFFSET(0xE48B430)
#define RPG_CLIENT_ZATZKALOOKATIK_OFGODIDJKLF_OFFSET UNITYSDK_OFFSET(0xE48ABB0)
#define RPG_CLIENT_ZATZKALOOKATIK_OJKKPOLCLMA_OFFSET UNITYSDK_OFFSET(0xE48AA90)
#define RPG_CLIENT_ZATZKALOOKATIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE48AF30)
#define RPG_CLIENT_ZATZKALOOKATIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE48AEF0)
#define RPG_CLIENT_ZATZKALOOKATIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE48AEB0)
#define RPG_CLIENT_ZATZKALOOKATIK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE48AF90)
#define RPG_CLIENT_ZATZKALOOKATIK_PJFACMDEJEI_OFFSET UNITYSDK_OFFSET(0xE48DD00)
#define RPG_CLIENT_ZATZKALOOKATIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xE48AB50)
#define RPG_CLIENT_ZATZKALOOKATIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xE48A7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ZatzkaLookAtIK_TypeDefinitionIndex = 68501;

	class ZatzkaLookAtIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MaxYawAngle; // 0x18
		::System::Single MaxHeadRotAngle; // 0x1C
		::System::Single SpeedDecayMultiplier; // 0x20
		::System::Single SpeedDecayStrength; // 0x24
		::System::Single MinSpeedRatio; // 0x28
		::System::Single ReferenceAngleForFullSpeed; // 0x2C
		::System::Single MinAngleForMinSpeed; // 0x30
		::System::Boolean EnableTargetChangeDeadzone; // 0x34
		::System::Byte _padding0[0x3];
		::System::Single TargetChangeDeadzoneAngle; // 0x38
		::System::Single SmallRangeMaxAngle; // 0x3C
		::System::Single SmallRangeSpeedRatio; // 0x40
		::System::Single ApproachBoostPeakPosition; // 0x44
		::System::Single ApproachAccelSmoothMultiplier; // 0x48
		::System::Boolean EnableBehindPitchNeutralize; // 0x4C
		::System::Byte _padding1[0x3];
		::System::Single BehindZoneYawMin; // 0x50
		::System::Single BehindZoneYawMax; // 0x54
		::System::Single BehindNeutralPitchLimit; // 0x58
		::System::Single BehindPitchLimitBlendSpeed; // 0x5C
		::System::Single BehindZoneTransitionDegrees; // 0x60
		::System::Single BehindZoneEdgeFadeDegrees; // 0x64
		::RPG::Client::LookAtIK* FEIPKPLMKDO; // 0x68
		::System::Single ENEDICDNJID; // 0x70
		::System::Single JBKHMKAGBKJ; // 0x74
		::System::Single MODCPPJNCAL; // 0x78
		::System::Single NDBLJAEOKPM; // 0x7C
		::System::Boolean HEEFBABGFGL; // 0x80
		::System::Byte _padding2[0x7];
		::UnityEngine::Transform* BHAADDFJAFE; // 0x88
		::UnityEngine::Vector3 AIMKNENMEGG; // 0x90
		::UnityEngine::Vector3 KPNCJCBCGKM; // 0x9C
		::System::Boolean BANPPAAJKEF; // 0xA8
		::System::Byte _padding3[0x3];
		::UnityEngine::Quaternion OLFNMMEMMJF; // 0xAC
		::System::Boolean JOEFBOFMKMK; // 0xBC
		// static const ::System::Object JEPOPHHBFMM; // 0x0
		// static const ::System::Object HHMMPPPHBIM; // 0x0
		// static const ::System::Object OPBIKHDOELM; // 0x0
		// static const ::System::Object DDALEKEHLKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_CTOR_OFFSET))(this);
		}

		::System::Single IBCIJPLGPFE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_IBCIJPLGPFE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OFGODIDJKLF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_OFGODIDJKLF_OFFSET))(this, a1);
		}

		::System::Void KJJECAHCCEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_KJJECAHCCEA_OFFSET))(this);
		}

		::System::Void MOCGKDIPCKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_MOCGKDIPCKF_OFFSET))(this);
		}

		::UnityEngine::Vector3 BBJDGIJHJNL(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_BBJDGIJHJNL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 AKCGHEJBEJB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_AKCGHEJBEJB_OFFSET))(this, a1, a2);
		}

		::System::Single OEDCKODNKEL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_OEDCKODNKEL_OFFSET))(this);
		}

		::System::Single MPGJEFMLDLP(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_MPGJEFMLDLP_OFFSET))(this, a1, a2);
		}

		::System::Single KFCJKMPPBOL(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_KFCJKMPPBOL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GAOCJHDAGDH(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_GAOCJHDAGDH_OFFSET))(this, a1, a2, a3);
		}

		::System::Single JLNCGBDFABE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_JLNCGBDFABE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Single FAKBHBHJLJC(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_FAKBHBHJLJC_OFFSET))(a1);
		}

		::System::Void OJKKPOLCLMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_OJKKPOLCLMA_OFFSET))(this);
		}

		::System::Void MKJJMLMFKKG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_MKJJMLMFKKG_OFFSET))(this, a1);
		}

		::System::Void LBKECJCILAB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_LBKECJCILAB_OFFSET))(this, a1);
		}

		::System::Void HIKHCDMOMBB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_HIKHCDMOMBB_OFFSET))(this, a1);
		}

		::System::Single APBDHCICPLG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_APBDHCICPLG_OFFSET))(this);
		}

		::System::Single NNIOLPGAIEE(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_NNIOLPGAIEE_OFFSET))(this, a1);
		}

		static ::System::Boolean EILPKDINLHM(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_EILPKDINLHM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single GPAHJIMIDNG(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_GPAHJIMIDNG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single MLKFEHNLPNB(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_MLKFEHNLPNB_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single JCLKKOFFGOB(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_JCLKKOFFGOB_OFFSET))(a1, a2, a3);
		}

		static ::System::Single PJFACMDEJEI(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_PJFACMDEJEI_OFFSET))(a1);
		}

		static ::System::Boolean KOKICDNENPF(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_KOKICDNENPF_OFFSET))(a1, a2, a3);
		}

		static ::System::Single AGAHKMLFEFF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_AGAHKMLFEFF_OFFSET))(a1, a2);
		}

		static ::System::Single MHNCIMNFDAF(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_MHNCIMNFDAF_OFFSET))(a1);
		}

	};
}
