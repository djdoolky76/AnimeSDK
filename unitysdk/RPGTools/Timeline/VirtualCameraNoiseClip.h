#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class VirtualCameraNoiseConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_ABHBBPHAHKL_OFFSET UNITYSDK_OFFSET(0xE950B30)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_CADBJOAGAKL_OFFSET UNITYSDK_OFFSET(0xE950A40)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE950B80)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE950CE0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_DMFALDEJLAL_OFFSET UNITYSDK_OFFSET(0xE950AF0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_FONLBCEIDAB_OFFSET UNITYSDK_OFFSET(0xE950A80)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE950B70)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_GET_VIRTUALCAMERANOISECONFIGS_OFFSET UNITYSDK_OFFSET(0xE950AC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VirtualCameraNoiseClip_TypeDefinitionIndex = 47827;

	class VirtualCameraNoiseClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean IsActive; // 0x18
		::System::Boolean UseTemplate; // 0x19
		::System::Byte _padding0[0x6];
		::System::String* TemplateName; // 0x20
		::RPGTools::Timeline::VirtualCameraNoiseConfig* NoiseConfig; // 0x28
		::System::String* NewTemplateName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_CTOR_OFFSET))(this);
		}

		::System::Void CADBJOAGAKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_CADBJOAGAKL_OFFSET))(this);
		}

		::System::Void FONLBCEIDAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_FONLBCEIDAB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_VirtualCameraNoiseConfigs()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_GET_VIRTUALCAMERANOISECONFIGS_OFFSET))(this);
		}

		::System::Void DMFALDEJLAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_DMFALDEJLAL_OFFSET))(this);
		}

		::System::Void ABHBBPHAHKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_ABHBBPHAHKL_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
