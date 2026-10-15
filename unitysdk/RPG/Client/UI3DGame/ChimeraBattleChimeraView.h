#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class EMJIDLCDFMI;
class KDKHADGLIPJ;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0xE34E960)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xE34E950)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xE34DA70)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE34D9D0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0xE34DA20)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_IMOJCHKGCAA_OFFSET UNITYSDK_OFFSET(0xE34E720)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE34DAB0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_JAIHJDJLGLD_OFFSET UNITYSDK_OFFSET(0xE34E1E0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_JPPHNADENJD_OFFSET UNITYSDK_OFFSET(0xE34E5A0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_OANPILEOMJI_OFFSET UNITYSDK_OFFSET(0xE34E2A0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_OBKGEBIEKGP_OFFSET UNITYSDK_OFFSET(0xE34E420)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PAIDAEBKNPL_OFFSET UNITYSDK_OFFSET(0xE34DE70)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PERFORMLEAVE_OFFSET UNITYSDK_OFFSET(0xE34DC50)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PLAYBACK_OFFSET UNITYSDK_OFFSET(0xE34E8A0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0xE34DF40)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xE34DB50)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xE34DBF0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleChimeraView_TypeDefinitionIndex = 75771;

	class ChimeraBattleChimeraView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::KDKHADGLIPJ* FKPHGIAHAEB; // 0x18
		::RPG::Client::RPGAnimationEvent* AnimEvent; // 0x20
		::UnityEngine::Animator* Animator; // 0x28
		static ::System::Int32* StaticGet_OBNLLCMDLMC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleChimeraView")->GetStaticField(0x8350);
		}

		static ::System::Int32* StaticGet_EIBDIFDPDON()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleChimeraView")->GetStaticField(0x8354);
		}

		static ::System::Int32* StaticGet_HOHEPNHALEB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleChimeraView")->GetStaticField(0x8358);
		}

		static ::System::Int32* StaticGet_HCEPHDJBNAB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleChimeraView")->GetStaticField(0x835C);
		}

		static ::System::Int32* StaticGet_BPEHNENDJJA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleChimeraView")->GetStaticField(0x8360);
		}

		static ::System::Int32* StaticGet_NGDKMBGNOED()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleChimeraView")->GetStaticField(0x8364);
		}

		static ::System::Int32* StaticGet_EDIILJHAIJL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleChimeraView")->GetStaticField(0x8368);
		}

		static ::System::Int32* StaticGet_JNKLJNFOIPO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleChimeraView")->GetStaticField(0x836C);
		}

		static ::System::Int32* StaticGet_EEDIOLAHMDC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "ChimeraBattleChimeraView")->GetStaticField(0x8370);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_CCTOR_OFFSET))();
		}

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetUnityObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETUNITYOBJECT_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_GETENTITY_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void PerformLeave(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PERFORMLEAVE_OFFSET))(this, a1);
		}

		::System::Void Play(::RPG::GameCore::ChimeraBattleAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PLAY_OFFSET))(this, a1);
		}

		::System::Void PAIDAEBKNPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PAIDAEBKNPL_OFFSET))(this);
		}

		::System::Void JPPHNADENJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_JPPHNADENJD_OFFSET))(this);
		}

		::System::Void IMOJCHKGCAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_IMOJCHKGCAA_OFFSET))(this);
		}

		::System::Void OBKGEBIEKGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_OBKGEBIEKGP_OFFSET))(this);
		}

		::System::Void JAIHJDJLGLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_JAIHJDJLGLD_OFFSET))(this);
		}

		::System::Void OANPILEOMJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_OANPILEOMJI_OFFSET))(this);
		}

		::System::Void PlayBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECHIMERAVIEW_PLAYBACK_OFFSET))(this);
		}

	};
}
