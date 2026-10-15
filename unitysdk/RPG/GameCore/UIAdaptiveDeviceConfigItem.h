#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIAdaptiveDeviceConfigItem; }
namespace System { class String; }

#define RPG_GAMECORE_UIADAPTIVEDEVICECONFIGITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6F420)
#define RPG_GAMECORE_UIADAPTIVEDEVICECONFIGITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6F2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIAdaptiveDeviceConfigItem_TypeDefinitionIndex = 24428;

	class UIAdaptiveDeviceConfigItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* DeviceModelList; // 0x10
		::RPG::GameCore::UIAdaptiveDeviceType DeviceType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVEDEVICECONFIGITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIAdaptiveDeviceConfigItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIAdaptiveDeviceConfigItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVEDEVICECONFIGITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
