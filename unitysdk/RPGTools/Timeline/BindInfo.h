#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BindInfo_BindReference.h"
namespace RPGTools::Timeline { class ArchiveAsset; }
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_BINDINFO_PFMNODOHKGB_OFFSET UNITYSDK_OFFSET(0xF73D0)

namespace RPGTools::Timeline
{
	struct alignas(8) BindInfo
	{
		::RPGTools::Timeline::BindInfo_BindReference Referene; // 0x10
		::RPGTools::Timeline::ArchiveAsset* Asset; // 0x28
		::System::String* RelativePath; // 0x30
		::System::String* Component; // 0x38
		::System::Void PFMNODOHKGB(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BINDINFO_PFMNODOHKGB_OFFSET))(this, a1, a2);
		}

	};
}
