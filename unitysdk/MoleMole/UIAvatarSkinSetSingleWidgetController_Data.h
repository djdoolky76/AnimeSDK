#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCDKJNPJEDM;

#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15946A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSkinSetSingleWidgetController_Data_TypeDefinitionIndex = 68367;

	class UIAvatarSkinSetSingleWidgetController_Data : public ::System::Object
	{
	public:
		::KCDKJNPJEDM* PreviewItemContext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
