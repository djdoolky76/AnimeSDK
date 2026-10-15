#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/GravityBallBallController_BallState.h"
#include "unitysdk/UnityEngine/ContactPoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class GravityBallBallController_ACLFAIBEJAF; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_AKHFGFKOHNE_OFFSET UNITYSDK_OFFSET(0xDCF2040)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_AMJHJEKMFBH_OFFSET UNITYSDK_OFFSET(0xDCF1430)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDCF0AE0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xDCF2D00)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xDCF0FB0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_GETBLLSTATE_OFFSET UNITYSDK_OFFSET(0xDCF1D20)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_HDEOKBGOPDN_OFFSET UNITYSDK_OFFSET(0xDCF10B0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_JFCHIOOBIMM_OFFSET UNITYSDK_OFFSET(0xDCF2A10)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_JIPBMFAAGPF_OFFSET UNITYSDK_OFFSET(0xDCF2200)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_LOLDJAOBNGI_OFFSET UNITYSDK_OFFSET(0xDCF1860)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONBALLAPPEAR_OFFSET UNITYSDK_OFFSET(0xDCF19A0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONBALLOUTOFPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCF1B10)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xDCF1DB0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0xDCF2480)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0xDCF2530)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDCF0EE0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_OOEIHDIDOHB_OFFSET UNITYSDK_OFFSET(0xDCF2AE0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_PPCBBOCNMJK_OFFSET UNITYSDK_OFFSET(0xDCF1010)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_RESETDSTTARGET_OFFSET UNITYSDK_OFFSET(0xDCF1C90)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_SETGRAVITYAFFECT_OFFSET UNITYSDK_OFFSET(0xDCF1D60)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCF0D80)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER__ONEXIT_OFFSET UNITYSDK_OFFSET(0xDCF2BB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallBallController_TypeDefinitionIndex = 78588;

	class GravityBallBallController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rigidbody* PANDMEPOLJP; // 0x18
		::UnityEngine::Transform* ICMGAIJCGBI; // 0x20
		::RPG::Client::Prop::GravityBallBallController_BallState BLDNGENJNEL; // 0x28
		::System::Single LPEEFIFKNFH; // 0x2C
		::System::Single NACCCMEJFHI; // 0x30
		::UnityEngine::Vector3 G; // 0x34
		::System::Single DragAffectVelocity; // 0x40
		::System::Single DragTime; // 0x44
		::System::Single DragAcceleration; // 0x48
		::System::Single ReachDistanceEpsilon; // 0x4C
		::System::Single DragInPuzzle; // 0x50
		::System::Single DragOutOfPuzzle; // 0x54
		::System::Single AngleDragInPuzzle; // 0x58
		::System::Single AngleDragOutOfPuzzle; // 0x5C
		::System::Single EffectStayTime; // 0x60
		::System::Single BallHitAudioThresholdLowerLimit; // 0x64
		::System::Single BallHitAudioThresholdUpperLimit; // 0x68
		::System::Single BallRollAudioThresholdLowerLimit; // 0x6C
		::System::Single BallRollAudioThresholdUpperLimit; // 0x70
		::System::Byte _padding0[0x4];
		::RPG::Client::Prop::GravityBallBallController_ACLFAIBEJAF* MEGKBJCPBAG; // 0x78
		::System::Boolean LPNDGOJBCCC; // 0x80
		::System::Boolean HHAILANFBED; // 0x81
		::System::Byte _padding1[0x6];
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Il2CppArray<::UnityEngine::ContactPoint>*>* AMOJOCPHCFJ; // 0x88
		::System::Single FMIKOFLIGIN; // 0x90
		::System::Boolean OLJCOAMKGNH; // 0x94
		// static const ::System::String* HIKEJIIFBLA; // 0x0
		// static const ::System::String* FPOABENNEJF; // 0x0
		// static const ::System::String* LFHPHINNNKI; // 0x0
		// static const ::System::String* LFAIOAGLOKO; // 0x0
		// static const ::System::String* ONHBILHKLGM; // 0x0
		// static const ::System::String* ENANLIOGEMI; // 0x0
		// static const ::System::String* KAAGIDFNLGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void PPCBBOCNMJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_PPCBBOCNMJK_OFFSET))(this);
		}

		::UnityEngine::Vector3 LOLDJAOBNGI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_LOLDJAOBNGI_OFFSET))(this);
		}

		::System::Void HDEOKBGOPDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_HDEOKBGOPDN_OFFSET))(this);
		}

		::System::Void OnBallAppear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONBALLAPPEAR_OFFSET))(this);
		}

		::System::Void OnBallOutofPuzzle(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONBALLOUTOFPUZZLE_OFFSET))(this, a1);
		}

		::System::Void ResetDstTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_RESETDSTTARGET_OFFSET))(this);
		}

		::RPG::Client::Prop::GravityBallBallController_BallState GetBllState()
		{
			return ((::RPG::Client::Prop::GravityBallBallController_BallState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_GETBLLSTATE_OFFSET))(this);
		}

		::System::Void SetGravityAffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_SETGRAVITYAFFECT_OFFSET))(this, a1);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnCollisionStay(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONSTAY_OFFSET))(this, a1);
		}

		::System::Single JFCHIOOBIMM(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_JFCHIOOBIMM_OFFSET))(this, a1);
		}

		::System::Void JIPBMFAAGPF(::UnityEngine::Collision* a1, ::UnityEngine::ContactPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*, ::UnityEngine::ContactPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_JIPBMFAAGPF_OFFSET))(this, a1, a2);
		}

		::System::Single OOEIHDIDOHB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_OOEIHDIDOHB_OFFSET))(this, a1);
		}

		::System::Void AMJHJEKMFBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_AMJHJEKMFBH_OFFSET))(this);
		}

		::System::Void AKHFGFKOHNE(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_AKHFGFKOHNE_OFFSET))(this, a1);
		}

		::System::Void _OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER__ONEXIT_OFFSET))(this);
		}

	};
}
