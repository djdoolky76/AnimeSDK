#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/DecorateEventBase.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_EDITORICONISUNITYINNER_OFFSET UNITYSDK_OFFSET(0x1FB059D0)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_GETEDITORICONPATH_OFFSET UNITYSDK_OFFSET(0x1FB05990)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_GETEDITORSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1FB05950)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_ONSPRITECHANGE_OFFSET UNITYSDK_OFFSET(0x1FB05920)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_SETSPRITEBYPATH_OFFSET UNITYSDK_OFFSET(0x1FB05940)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_SHOWANIMINFO_OFFSET UNITYSDK_OFFSET(0x1FB05930)
#define UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB059E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImageExchangeEventZoneVer_TypeDefinitionIndex = 32413;

	class ImageExchangeEventZoneVer : public ::UnityEngine::Timeline::DecorateEventBase
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x58
		::System::Single animDuration; // 0x60
		::System::Byte _padding0[0x4];
		::UnityEngine::Sprite* femaleSprite; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER__CTOR_OFFSET))(this);
		}

		::System::Void OnSpriteChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_ONSPRITECHANGE_OFFSET))(this);
		}

		::System::Boolean ShowAnimInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_SHOWANIMINFO_OFFSET))(this);
		}

		::System::Void SetSpriteByPath(::System::String* relativePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_SETSPRITEBYPATH_OFFSET))(this, relativePath);
		}

		::System::String* GetEditorShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_GETEDITORSHOWNAME_OFFSET))(this);
		}

		::System::String* GetEditorIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_GETEDITORICONPATH_OFFSET))(this);
		}

		::System::Boolean EditorIconIsUnityInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEEXCHANGEEVENTZONEVER_EDITORICONISUNITYINNER_OFFSET))(this);
		}
	};
}
