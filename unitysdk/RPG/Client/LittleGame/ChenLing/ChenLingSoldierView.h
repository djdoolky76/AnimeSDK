#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingGameView.h"
#include "unitysdk/RPG/GameCore/ChenLingSoldierScale.h"
#include "unitysdk/UnityEngine/Vector3.h"
class SoftBodyIK;
namespace RPG::Client::LittleGame::ChenLing { class ChenLingRagdollPart; }
namespace RPG::GameCore { class ChenLingDeathEffectConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_AFNDMCNCMGE_OFFSET UNITYSDK_OFFSET(0xD4095C0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_AHBPJFGGFOH_OFFSET UNITYSDK_OFFSET(0xD408400)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_APPLYPERFORMANCEFORCE_OFFSET UNITYSDK_OFFSET(0xD408870)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_CNEHCACLECN_OFFSET UNITYSDK_OFFSET(0xD4086E0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD40A720)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_EGHOOGCEDAM_OFFSET UNITYSDK_OFFSET(0xD409480)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_EMHNPDNGJBP_OFFSET UNITYSDK_OFFSET(0xD409A50)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_FJLMINFMLHI_OFFSET UNITYSDK_OFFSET(0xD40A530)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GETANIMATIONCURVEBYNAME_OFFSET UNITYSDK_OFFSET(0xD4089D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GET_AIRMOTIONCURVE_OFFSET UNITYSDK_OFFSET(0xD4089B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GET_DEATHFLYCURVE_OFFSET UNITYSDK_OFFSET(0xD4089C0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_JCAFONNCCPK_OFFSET UNITYSDK_OFFSET(0xD409110)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_JKGCMNDECMG_OFFSET UNITYSDK_OFFSET(0xD408470)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_KEOEOPBIENN_OFFSET UNITYSDK_OFFSET(0xD408730)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_LOPFOGPLFOO_OFFSET UNITYSDK_OFFSET(0xD40A420)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_MHEPODNPODA_OFFSET UNITYSDK_OFFSET(0xD409250)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_MKFHIJDFLPC_OFFSET UNITYSDK_OFFSET(0xD408E90)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_PBAIGHJNGJJ_OFFSET UNITYSDK_OFFSET(0xD40A2F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_SETCHENLINGAUDIOGROUP_OFFSET UNITYSDK_OFFSET(0xD40A5C0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_START_OFFSET UNITYSDK_OFFSET(0xD4087A0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_TRIGGERDEATHEFFECT_OFFSET UNITYSDK_OFFSET(0xD408AE0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingSoldierView_TypeDefinitionIndex = 77976;

	class ChenLingSoldierView : public ::RPG::Client::LittleGame::ChenLing::ChenLingGameView
	{
	public:
		::SoftBodyIK* DIKBMPOEIFK; // 0x48
		::UnityEngine::Transform* _WeaponAttachPoint; // 0x50
		::UnityEngine::Transform* _NodeShadowPlugin; // 0x58
		::UnityEngine::AnimationCurve* _AirMotionCurve; // 0x60
		::System::Collections::Generic::List_1<::System::Object*>* _AnimationCurves; // 0x68
		::UnityEngine::AnimationCurve* _DeathFlyCurve; // 0x70
		::System::Single DeathXMaxDistance; // 0x78
		::System::Single DeathXMinDistance; // 0x7C
		::System::Single DeathYMaxHeight; // 0x80
		::System::Single DeathYMinHeight; // 0x84
		::System::Boolean AEJONBIOOPO; // 0x88
		::System::Byte _padding0[0x7];
		::System::Action* CIFOILLJFNF; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingRagdollPart*>* INALEIOJCPJ; // 0x98
		::System::Int32 AAFFNEGHJDG; // 0xA0
		::System::Byte _padding1[0x4];
		::RPG::GameCore::ChenLingDeathEffectConfig* GAKDCABGLDP; // 0xA8
		::UnityEngine::AnimationClip* AttackAnimation; // 0xB0
		::UnityEngine::GameObject* ArtGO; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_CTOR_OFFSET))(this);
		}

		::System::Void AHBPJFGGFOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_AHBPJFGGFOH_OFFSET))(this);
		}

		::System::Void KEOEOPBIENN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_KEOEOPBIENN_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_START_OFFSET))(this);
		}

		::System::Void ApplyPerformanceForce(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_APPLYPERFORMANCEFORCE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationCurve* get_AirMotionCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GET_AIRMOTIONCURVE_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_DeathFlyCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GET_DEATHFLYCURVE_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* GetAnimationCurveByName(::System::String* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_GETANIMATIONCURVEBYNAME_OFFSET))(this, a1);
		}

		::System::Void TriggerDeathEffect(::UnityEngine::Vector3 a1, ::System::Action* a2, ::RPG::GameCore::ChenLingSoldierScale a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*, ::RPG::GameCore::ChenLingSoldierScale, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_TRIGGERDEATHEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AFNDMCNCMGE(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_AFNDMCNCMGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EGHOOGCEDAM(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_EGHOOGCEDAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PBAIGHJNGJJ(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_PBAIGHJNGJJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EMHNPDNGJBP(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_EMHNPDNGJBP_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 MKFHIJDFLPC(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_MKFHIJDFLPC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JCAFONNCCPK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_JCAFONNCCPK_OFFSET))(this);
		}

		::System::Void JKGCMNDECMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_JKGCMNDECMG_OFFSET))(this);
		}

		::System::Void LOPFOGPLFOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_LOPFOGPLFOO_OFFSET))(this, a1);
		}

		::System::Void CNEHCACLECN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_CNEHCACLECN_OFFSET))(this);
		}

		::System::Void FJLMINFMLHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_FJLMINFMLHI_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingDeathEffectConfig* MHEPODNPODA()
		{
			return ((::RPG::GameCore::ChenLingDeathEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_MHEPODNPODA_OFFSET))(this);
		}

		::System::Void SetChenLingAudioGroup(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERVIEW_SETCHENLINGAUDIOGROUP_OFFSET))(this, a1);
		}

	};
}
