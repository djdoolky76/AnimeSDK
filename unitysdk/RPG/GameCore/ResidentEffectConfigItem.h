#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResidentEffectConfigItem; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }

#define RPG_GAMECORE_RESIDENTEFFECTCONFIGITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95F1B0)
#define RPG_GAMECORE_RESIDENTEFFECTCONFIGITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95F080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResidentEffectConfigItem_TypeDefinitionIndex = 16535;

	class ResidentEffectConfigItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* ConfigKeys; // 0x10
		::Il2CppArray<::RPG::GameCore::TriggerEffect*>* Effects; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTEFFECTCONFIGITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResidentEffectConfigItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResidentEffectConfigItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTEFFECTCONFIGITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
