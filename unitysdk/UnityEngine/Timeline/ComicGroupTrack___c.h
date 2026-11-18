#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F43DCF0)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F43DD30)
#define UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__GET_SPLITSCREENCLIPS_B__22_0_OFFSET UNITYSDK_OFFSET(0x1F43DD40)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ComicGroupTrack___c_TypeDefinitionIndex = 32397;

	class ComicGroupTrack___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Timeline::TimelineClip*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::TimelineClip*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ComicGroupTrack___c_TypeDefinitionIndex)->GetStaticField(0x29120);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ComicGroupTrack___c_TypeDefinitionIndex)->GetStaticField(0x29128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_SplitScreenClips_b__22_0(::UnityEngine::Timeline::TimelineClip* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMICGROUPTRACK___C__GET_SPLITSCREENCLIPS_B__22_0_OFFSET))(this, c);
		}
	};
}
