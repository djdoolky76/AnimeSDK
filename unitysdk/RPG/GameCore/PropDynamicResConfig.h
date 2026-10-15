#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropDynamicResConfig; }
namespace RPG::GameCore { class PropDynamicResConfigItem; }
namespace System { class String; }

#define RPG_GAMECORE_PROPDYNAMICRESCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91C860)
#define RPG_GAMECORE_PROPDYNAMICRESCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D91C680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDynamicResConfig_TypeDefinitionIndex = 17587;

	class PropDynamicResConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DefaultDynamicAnimController; // 0x10
		::Il2CppArray<::System::String*>* LayerDefaultClipNames; // 0x18
		::Il2CppArray<::System::String*>* LayerSpeedParamNames; // 0x20
		::Il2CppArray<::RPG::GameCore::PropDynamicResConfigItem*>* ConfigItems; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDYNAMICRESCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDynamicResConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDynamicResConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDYNAMICRESCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
