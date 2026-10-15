#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIAdaptiveConfig; }
namespace RPG::GameCore { class UIOperationConfig; }

#define RPG_GAMECORE_UIADAPTIVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6EFB0)
#define RPG_GAMECORE_UIADAPTIVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6EEC0)

namespace RPG::GameCore
{
	class UIAdaptiveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::UIOperationConfig* DefaultOperations; // 0x10
		::Il2CppArray<::RPG::GameCore::UIOperationConfig*>* UIPrefabOperations; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIAdaptiveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIAdaptiveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
