#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_UI_UIPLUGIN_UIWWISEAUDIOPLUGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3CAD0)

namespace ABC::UI::UIPlugin
{
	inline static constexpr unsigned int UIWwiseAudioPluginConfig_TypeDefinitionIndex = 7626;

	class UIWwiseAudioPluginConfig
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* AnimationOverridesKeys; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* AnimationOverridesValues; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_UIPLUGIN_UIWWISEAUDIOPLUGINCONFIG__CTOR_OFFSET))(this);
		}
	};
}
