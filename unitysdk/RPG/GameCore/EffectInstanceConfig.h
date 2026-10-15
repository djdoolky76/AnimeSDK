#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectInstanceConfig; }
namespace RPG::GameCore { class EffectPreloadLinkConfig; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTINSTANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6026D0)
#define RPG_GAMECORE_EFFECTINSTANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D602440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectInstanceConfig_TypeDefinitionIndex = 16343;

	class EffectInstanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* EffectTypes; // 0x10
		::Il2CppArray<::System::String*>* Tags; // 0x18
		::Il2CppArray<::System::String*>* EffectInstanceList; // 0x20
		::Il2CppArray<::System::String*>* ModelInstanceList; // 0x28
		::Il2CppArray<::System::String*>* AssetList; // 0x30
		::Il2CppArray<::RPG::GameCore::EffectPreloadLinkConfig*>* PreloadLinkList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTINSTANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectInstanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectInstanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTINSTANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
