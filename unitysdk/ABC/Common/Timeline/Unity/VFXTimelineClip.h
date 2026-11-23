#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDAD7F45EA9CF9E9/EE285593635B9C51.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace B1B240D8198636DC { class F696C8E938A1EDE5; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1FC6960)
#define ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_CREATERUNTIMEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1FC6A20)
#define ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1FC6CD0)
#define ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_GET_PARENTTRACK_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_GET_VFXPREFAB_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_SET_PARENTTRACK_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_SET_VFXPREFAB_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6CC0)

namespace ABC::Common::Timeline::Unity
{
	inline static constexpr unsigned int VFXTimelineClip_TypeDefinitionIndex = 6834;

	class VFXTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::GameObject* _VFXPrefab_k__BackingField; // 0x18
		::UnityEngine::Timeline::TrackAsset* _ParentTrack_k__BackingField; // 0x20
		::UnityEngine::Vector3 OffsetPosition; // 0x28
		::UnityEngine::Vector3 OffsetRotation; // 0x34
		::System::Single OffsetScale; // 0x40
		::System::Boolean IgnoreTargetRotation; // 0x44
		::System::Boolean IgnoreTargetScale; // 0x45
		::System::Boolean OnlyFirstFrame; // 0x46
		::System::Byte _padding0[0x1];
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> Character; // 0x48
		::System::Byte _padding1[0x8];
		::System::Boolean UseFixedRandomSeed; // 0x58
		::System::Byte _padding2[0x3];
		::System::UInt32 RandomSeed; // 0x5C
		::B1B240D8198636DC::F696C8E938A1EDE5* _behaviour; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::System::Void set_VFXPrefab(::UnityEngine::GameObject* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_SET_VFXPREFAB_OFFSET))(this, E937D4885DAA1AE8);
		}

		::FA1EDF0909FD0302::AE42330449B9EF25 CreateRuntimePlayable(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_CREATERUNTIMEPLAYABLE_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809);
		}

		::UnityEngine::GameObject* get_VFXPrefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_GET_VFXPREFAB_OFFSET))(this);
		}

		::FA1EDF0909FD0302::AE42330449B9EF25 CreatePlayable(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809);
		}

		::System::Void set_ParentTrack(::UnityEngine::Timeline::TrackAsset* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_SET_PARENTTRACK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::BDAD7F45EA9CF9E9::EE285593635B9C51 get_clipCaps()
		{
			return ((::BDAD7F45EA9CF9E9::EE285593635B9C51(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* get_ParentTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_VFXTIMELINECLIP_GET_PARENTTRACK_OFFSET))(this);
		}
	};
}
