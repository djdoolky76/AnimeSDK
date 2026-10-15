#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MatchThreeFighterState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class CharacterAtlasFace; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client::LittleGame { class MatchThreeFighter_BKILIDKENHA; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_AIDDEAPAOPB_OFFSET UNITYSDK_OFFSET(0xD46F3E0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_BJGILJPLBCG_OFFSET UNITYSDK_OFFSET(0xD46F9A0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_CCTOR_OFFSET UNITYSDK_OFFSET(0xD46FB00)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_CTOR_OFFSET UNITYSDK_OFFSET(0xD46FA80)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0xD46F650)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD46F600)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_NDOGFBHIFLM_OFFSET UNITYSDK_OFFSET(0xD46F200)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_OKKLKOPEAKF_OFFSET UNITYSDK_OFFSET(0xD46F350)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_OLNAEGKOEPK_OFFSET UNITYSDK_OFFSET(0xD46EDA0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_OLPNKKFNHOE_OFFSET UNITYSDK_OFFSET(0xD46EE20)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_PIHKJEDFHPO_OFFSET UNITYSDK_OFFSET(0xD46EED0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_RESET_OFFSET UNITYSDK_OFFSET(0xD46F020)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETBODYMATERIAL_OFFSET UNITYSDK_OFFSET(0xD46E980)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETEMO_OFFSET UNITYSDK_OFFSET(0xD46E900)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETFACEMATERIAL_OFFSET UNITYSDK_OFFSET(0xD46EA30)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETSCALE_OFFSET UNITYSDK_OFFSET(0xD46EAE0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_STARTBATTLESHOW_OFFSET UNITYSDK_OFFSET(0xD46EF30)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_STARTLOOKAT_OFFSET UNITYSDK_OFFSET(0xD46EFD0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD46F290)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeFighter_TypeDefinitionIndex = 76554;

	class MatchThreeFighter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LittleGame::MatchThreeFighterState State; // 0x18
		::System::Single MoveToBornAlpha; // 0x1C
		::System::Single FaceToBornAlpha; // 0x20
		::System::Single TargetToNormalScaleAlpha; // 0x24
		::RPG::Client::CharacterAtlasFace* CharacterAtlasFace; // 0x28
		::UnityEngine::Renderer* FaceRenderer; // 0x30
		::UnityEngine::Renderer* BodyRenderer; // 0x38
		::UnityEngine::Transform* ArtMotion; // 0x40
		::UnityEngine::Transform* DeployPoint; // 0x48
		::UnityEngine::AnimationCurve* ScaleChangeCurve; // 0x50
		::UnityEngine::Animation* BlowUpAnimation; // 0x58
		::UnityEngine::Animator* ArtAnimator; // 0x60
		::RPG::Client::LookAtIK* LookAtIK; // 0x68
		::System::Single TargetScale; // 0x70
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* Glow; // 0x78
		::System::Int32 IOHCHCCBMDH; // 0x80
		::System::Int32 PHIBKEPIHGC; // 0x84
		::System::Int32 KIJJJDNMFIA; // 0x88
		::System::Int32 DOFLPLKDHJJ; // 0x8C
		::System::Boolean MBCFNFILJBH; // 0x90
		::System::Byte _padding1[0x7];
		::UnityEngine::Transform* NHNJKCPPLBA; // 0x98
		::RPG::Client::LittleGame::MatchThreeFighter_BKILIDKENHA* MAKGPNKGLFH; // 0xA0
		static ::System::Int32* StaticGet_GAOPHHCMAEE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame", "MatchThreeFighter")->GetStaticField(0xADE0);
		}

		// static const ::System::String* ADCPKADKEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_CCTOR_OFFSET))();
		}

		::System::Void SetEmo(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETEMO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetBodyMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETBODYMATERIAL_OFFSET))(this, a1);
		}

		::System::Void SetFaceMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETFACEMATERIAL_OFFSET))(this, a1);
		}

		::System::Void SetScale(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_SETSCALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartBattleShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_STARTBATTLESHOW_OFFSET))(this);
		}

		::System::Void StartLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_STARTLOOKAT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OKKLKOPEAKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_OKKLKOPEAKF_OFFSET))(this);
		}

		::System::Void HAOBJNHJFGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_HAOBJNHJFGM_OFFSET))(this);
		}

		::System::Void AIDDEAPAOPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_AIDDEAPAOPB_OFFSET))(this);
		}

		::System::Single OLPNKKFNHOE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_OLPNKKFNHOE_OFFSET))(this);
		}

		::System::Void PIHKJEDFHPO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_PIHKJEDFHPO_OFFSET))(this, a1);
		}

		::System::Void OLNAEGKOEPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_OLNAEGKOEPK_OFFSET))(this);
		}

		::System::Void NDOGFBHIFLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_NDOGFBHIFLM_OFFSET))(this);
		}

		::System::Single BJGILJPLBCG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEFIGHTER_BJGILJPLBCG_OFFSET))(this);
		}

	};
}
