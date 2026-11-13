#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6F69A0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F5D40)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_GET_FPS_OFFSET UNITYSDK_OFFSET(0x1D6F6990)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_SET_FPS_OFFSET UNITYSDK_OFFSET(0x1D6F2D00)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset_EditorSettings_TypeDefinitionIndex = 39723;

	class TimelineAsset_EditorSettings : public ::System::Object
	{
	public:
		::System::Single m_Framerate; // 0x10
		static ::System::Single* StaticGet_kMaxFps()
		{
			return (::System::Single*)UnitySDK::FromName("UnityEngine.Timeline", "EditorSettings")->GetStaticField(0xC980);
		}

		static ::System::Single* StaticGet_kDefaultFps()
		{
			return (::System::Single*)UnitySDK::FromName("UnityEngine.Timeline", "EditorSettings")->GetStaticField(0xC984);
		}

		static ::System::Single* StaticGet_kMinFps()
		{
			return (::System::Single*)UnitySDK::FromName("UnityEngine.Timeline", "EditorSettings")->GetStaticField(0xC988);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_CCTOR_OFFSET))();
		}

		::System::Single get_fps()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_GET_FPS_OFFSET))(this);
		}

		::System::Void set_fps(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_SET_FPS_OFFSET))(this, a1);
		}

	};
}
