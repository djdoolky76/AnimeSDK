#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropDynamicResConfigItem; }
namespace RPG::GameCore { class PropOverrideAnimLayerConfig; }
namespace RPG::GameCore { class PropOverrideColliderConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPDYNAMICRESCONFIGITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94A3B0)
#define RPG_GAMECORE_PROPDYNAMICRESCONFIGITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94A1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDynamicResConfigItem_TypeDefinitionIndex = 17586;

	class PropDynamicResConfigItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::System::String* JsonPath; // 0x20
		::Il2CppArray<::RPG::GameCore::PropOverrideAnimLayerConfig*>* AnimLayerConfigs; // 0x28
		::RPG::GameCore::PropOverrideColliderConfig* ColliderConfig; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDYNAMICRESCONFIGITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDynamicResConfigItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDynamicResConfigItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDYNAMICRESCONFIGITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
