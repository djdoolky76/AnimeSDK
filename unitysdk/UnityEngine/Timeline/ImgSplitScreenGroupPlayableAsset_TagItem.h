#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_TAGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC35370)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupPlayableAsset_TagItem_TypeDefinitionIndex = 32437;

	class ImgSplitScreenGroupPlayableAsset_TagItem : public ::System::Object
	{
	public:
		// static const ::System::String* GROUP_NAME; // 0x0
		::System::Int32 id; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_TAGITEM__CTOR_OFFSET))(this);
		}
	};
}
