#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/BlendTarget.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_AWAKE_OFFSET UNITYSDK_OFFSET(0x119362F0)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_COLLECTBINDINGDICT_OFFSET UNITYSDK_OFFSET(0x11936340)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_COLLECTBRANCHBINDINGDICT_OFFSET UNITYSDK_OFFSET(0x11936D50)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_GETTRACKBINDING_OFFSET UNITYSDK_OFFSET(0x11937DD0)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_GET_ISBRANCHTIMELINEV2_OFFSET UNITYSDK_OFFSET(0x11936290)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_ISANIMATIONTRACK_OFFSET UNITYSDK_OFFSET(0x11938260)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x11938540)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKOUTPUTWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x11938A10)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKOUTPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x11938890)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETTRACKDYNAMIC_OFFSET UNITYSDK_OFFSET(0x11937950)
#define MOLEMOLE_MONODIRECTORBINDINGREPLACE__CTOR_OFFSET UNITYSDK_OFFSET(0x11938D20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDirectorBindingReplace_TypeDefinitionIndex = 39441;

	class MonoDirectorBindingReplace : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* LEMDDJFGKMM; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Playables::PlayableBinding>* MMMIGECPPGC; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Playables::PlayableDirector*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Playables::PlayableBinding>*>* OMLLIEBPGAA; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBranchTimelineV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_GET_ISBRANCHTIMELINEV2_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_AWAKE_OFFSET))(this);
		}

		::System::Void CollectBindingDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_COLLECTBINDINGDICT_OFFSET))(this);
		}

		::System::Void CollectBranchBindingDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_COLLECTBRANCHBINDINGDICT_OFFSET))(this);
		}

		::System::Void SetTrackDynamic(::System::String* BAJMDFNHLNN, ::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETTRACKDYNAMIC_OFFSET))(this, BAJMDFNHLNN, NJOAJLDJCCJ);
		}

		::UnityEngine::Object* GetTrackBinding(::System::String* BAJMDFNHLNN)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_GETTRACKBINDING_OFFSET))(this, BAJMDFNHLNN);
		}

		::System::Boolean IsAnimationTrack(::System::String* BAJMDFNHLNN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_ISANIMATIONTRACK_OFFSET))(this, BAJMDFNHLNN);
		}

		::System::Void SetAnimationTrackBlendTarget(::System::String* BAJMDFNHLNN, ::UnityEngine::Animations::BlendTarget FECIHLIHCJL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Animations::BlendTarget))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKBLENDTARGET_OFFSET))(this, BAJMDFNHLNN, FECIHLIHCJL);
		}

		::System::Void SetAnimationTrackOutputWeight(::System::Collections::Generic::List_1<::System::String*>* NCCEFMKIKBA, ::System::Single IECOJPMPJMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKOUTPUTWEIGHT_OFFSET))(this, NCCEFMKIKBA, IECOJPMPJMP);
		}

		::System::Void SetAnimationTrackOutputWeight_1(::System::String* BAJMDFNHLNN, ::System::Single IECOJPMPJMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIRECTORBINDINGREPLACE_SETANIMATIONTRACKOUTPUTWEIGHT_1_OFFSET))(this, BAJMDFNHLNN, IECOJPMPJMP);
		}
	};
}
