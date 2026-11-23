#pragma once
#include "unitysdk/unitysdk.h"

class FE25F068D7DFD68E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_UI_UIPLUGIN_MONOUIPLUGINCONTAINER_B9B1A8034318EFEE_OFFSET UNITYSDK_OFFSET(0x169C070)
#define ABC_UI_UIPLUGIN_MONOUIPLUGINCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x2095050)

namespace ABC::UI::UIPlugin
{
	inline static constexpr unsigned int MonoUIPluginContainer_TypeDefinitionIndex = 8529;

	class MonoUIPluginContainer
	{
	public:
		::System::Collections::Generic::List_1<::FE25F068D7DFD68E*>* _pluginDataList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_UIPLUGIN_MONOUIPLUGINCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FE25F068D7DFD68E*>* B9B1A8034318EFEE()
		{
			return ((::System::Collections::Generic::List_1<::FE25F068D7DFD68E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_UIPLUGIN_MONOUIPLUGINCONTAINER_B9B1A8034318EFEE_OFFSET))(this);
		}
	};
}
