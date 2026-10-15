#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Event; }

#define ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F665290)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS_GETUNITYKEYCODE_OFFSET UNITYSDK_OFFSET(0x1F666F20)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS_GETWINDOWSKEYCODE_OFFSET UNITYSDK_OFFSET(0x1F666D60)

namespace ZenFulcrum::EmbeddedBrowser
{
	class KeyMappings : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::KeyCode>** StaticGet_reverseMappings()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::KeyCode>**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "KeyMappings")->GetStaticField(0x46710);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Int32>** StaticGet_mappings()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Int32>**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "KeyMappings")->GetStaticField(0x46718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS_CCTOR_OFFSET))();
		}

		static ::System::Int32 GetWindowsKeyCode(::UnityEngine::Event* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS_GETWINDOWSKEYCODE_OFFSET))(a1);
		}

		static ::UnityEngine::KeyCode GetUnityKeyCode(::System::Int32 a1)
		{
			return ((::UnityEngine::KeyCode(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYMAPPINGS_GETUNITYKEYCODE_OFFSET))(a1);
		}

	};
}
