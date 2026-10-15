#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PlaybackTimelineClip_TimelinePlaybackOptions.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
namespace System { class String; }

#define INLLHDNHJMA_CABAPJJIEFK_OFFSET UNITYSDK_OFFSET(0x164F7050)
#define INLLHDNHJMA_CTOR_OFFSET UNITYSDK_OFFSET(0x164F7130)

inline static constexpr unsigned int INLLHDNHJMA_TypeDefinitionIndex = 48456;

	class INLLHDNHJMA : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Il2CppArray<::System::String*>* GNJOBBDLHEI; // 0x10
		::System::String* EHJELGDJLPC; // 0x18
		::RPGTools::Timeline::PlaybackTimelineClip_TimelinePlaybackOptions ALEGIFEHGLH; // 0x20
		::System::Boolean LFNHCFMGPBP; // 0x24
		::System::Byte _padding0[0x3];
		::System::Double OAPLHPJNELN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLLHDNHJMA_CTOR_OFFSET))(this);
		}

		::System::Boolean CABAPJJIEFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INLLHDNHJMA_CABAPJJIEFK_OFFSET))(this);
		}

	};
