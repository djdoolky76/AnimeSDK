#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EMJIDLCDFMI;
class FDPALAEIHPB;
class KHPOKIKCOFO;
class OAFCCICMILM;
class PLAGENLANML;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDC76B0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC76A0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1CDC7260)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0x1CDC6820)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONHIT_OFFSET UNITYSDK_OFFSET(0x1CDC7410)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONINVISIBLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1CDC75D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONPLAYERHITSTATEREMOVED_OFFSET UNITYSDK_OFFSET(0x1CDC7090)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONPLAYERHITSTATE_OFFSET UNITYSDK_OFFSET(0x1CDC6EB0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0x1CDC6E30)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x1CDC6B90)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1CDC6DE0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMBOOLPARAM_OFFSET UNITYSDK_OFFSET(0x1CDC7470)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x1CDC74E0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0x1CDC7560)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1CDC7390)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1CDC7300)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameBoss_TypeDefinitionIndex = 78933;

	class MovieGameBoss : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::KHPOKIKCOFO* KAKEIDJDNHJ; // 0x20
		::OAFCCICMILM* PDENFEFCAGN; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* BodyRenderers; // 0x30
		::System::Boolean APMACBAGBPG; // 0x38
		::System::Byte _padding0[0x7];
		::UnityEngine::Animator* AnimatorController; // 0x40
		::UnityEngine::Transform* CenterTrans; // 0x48
		static ::System::Int32* StaticGet_CLPEMGKEBHC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame", "MovieGameBoss")->GetStaticField(0xE560);
		}

		static ::System::Int32* StaticGet_NKDECDGECFL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame", "MovieGameBoss")->GetStaticField(0xE564);
		}

		static ::System::Int32* StaticGet_ICAHOECEIAH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame", "MovieGameBoss")->GetStaticField(0xE568);
		}

		static ::System::Int32* StaticGet_DCOMLJEFCBI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.LittleGame", "MovieGameBoss")->GetStaticField(0xE56C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_CCTOR_OFFSET))();
		}

		::System::Void InitializeView(::PLAGENLANML* a1, ::EMJIDLCDFMI* a2, ::KHPOKIKCOFO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::EMJIDLCDFMI*, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void RegisterListeners(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_REGISTERLISTENERS_OFFSET))(this, a1);
		}

		::System::Void OnPlayerHitState(::KHPOKIKCOFO* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONPLAYERHITSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayerHitStateRemoved(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONPLAYERHITSTATEREMOVED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void OnHit(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONHIT_OFFSET))(this, a1);
		}

		::System::Void SetAnimBoolParam(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMBOOLPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimFloatParam(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMFLOATPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_SETANIMTRIGGER_OFFSET))(this, a1);
		}

		::System::Void OnInvisibleRemoved(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBOSS_ONINVISIBLEREMOVED_OFFSET))(this, a1);
		}

	};
}
