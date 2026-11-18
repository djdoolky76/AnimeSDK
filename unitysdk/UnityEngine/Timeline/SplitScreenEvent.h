#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/KeyEventBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_TIMELINE_SPLITSCREENEVENT_GETEDITORSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1FF33C70)
#define UNITYENGINE_TIMELINE_SPLITSCREENEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF33CB0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SplitScreenEvent_TypeDefinitionIndex = 32418;

	class SplitScreenEvent : public ::UnityEngine::Timeline::KeyEventBase
	{
	public:
		::System::Int32 animIndex; // 0x40
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* imgPosModifyInfos; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SPLITSCREENEVENT__CTOR_OFFSET))(this);
		}

		::System::String* GetEditorShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SPLITSCREENEVENT_GETEDITORSHOWNAME_OFFSET))(this);
		}
	};
}
