#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/CustomGroupTrackDataBase.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_PERFORMERMETA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C754930)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformerMeta_TypeDefinitionIndex = 49496;

	class PerformerMeta : public ::UnityEngine::Timeline::CustomGroupTrackDataBase
	{
	public:
		::System::String* performerPrefabPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMERMETA_CTOR_OFFSET))(this);
		}

	};
}
