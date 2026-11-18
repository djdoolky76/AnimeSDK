#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class HNLACBJDCGI;
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C686560)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_1_OFFSET UNITYSDK_OFFSET(0x1C686690)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_OFFSET UNITYSDK_OFFSET(0x1C686630)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C686930)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationImage_TypeDefinitionIndex = 73902;

	class UILocalizationImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* key; // 0x18
		::UnityEngine::UI::Image* _curImage; // 0x20
		::HNLACBJDCGI* _assetLoadProxy; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateImage(::HNLACBJDCGI* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_OFFSET))(this, proxy);
		}

		::System::Void UpdateImage_1(::HNLACBJDCGI* proxy, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_1_OFFSET))(this, proxy, key);
		}
	};
}
