#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/FA1EDF0909FD0302/B98D7A2DC3621144.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x4184830)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x4184880)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x41846D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_GETPLAYABLEASSETDURATION_OFFSET UNITYSDK_OFFSET(0x41847F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableAsset_TypeDefinitionIndex = 17785;

	class PlayableAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_GetPlayableAssetDuration(::UnityEngine::Playables::PlayableAsset* B286159CFDC40A9F, ::System::IntPtr BA051EB5EAC069E5)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_GETPLAYABLEASSETDURATION_OFFSET))(B286159CFDC40A9F, BA051EB5EAC069E5);
		}

		static ::System::Void Internal_CreatePlayable(::UnityEngine::Playables::PlayableAsset* B286159CFDC40A9F, ::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* AD1247287D2D9217, ::System::IntPtr B03018C24D85EDA4)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_CREATEPLAYABLE_OFFSET))(B286159CFDC40A9F, FF3BC15A84BE456D, AD1247287D2D9217, B03018C24D85EDA4);
		}

		::System::Collections::Generic::IEnumerable_1<::FA1EDF0909FD0302::B98D7A2DC3621144>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FA1EDF0909FD0302::B98D7A2DC3621144>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_OUTPUTS_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_DURATION_OFFSET))(this);
		}
	};
}
