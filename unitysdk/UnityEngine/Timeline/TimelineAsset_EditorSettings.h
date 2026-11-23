#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x3558E70)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x40D6400)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x40D62F0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x40D6390)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset_EditorSettings_TypeDefinitionIndex = 20200;

	class TimelineAsset_EditorSettings : public ::System::Object
	{
	public:
		static ::System::Double* StaticGet_kMinFrameRate()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineAsset_EditorSettings_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Double* StaticGet_kMaxFrameRate()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineAsset_EditorSettings_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Double* StaticGet_kDefaultFrameRate()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TimelineAsset_EditorSettings_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::System::Double m_Framerate; // 0x10
		::System::Boolean m_ScenePreview; // 0x18

		::System::Double get_frameRate()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Void set_frameRate(::System::Double E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS_SET_FRAMERATE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_EDITORSETTINGS__CCTOR_OFFSET))();
		}
	};
}
