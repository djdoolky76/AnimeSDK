#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ServantConfig.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServantOverrideConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SERVANTOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8F3A0)
#define RPG_GAMECORE_SERVANTOVERRIDECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8F4C0)
#define RPG_GAMECORE_SERVANTOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA915F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantOverrideConfig_TypeDefinitionIndex = 16522;

	class ServantOverrideConfig : public ::RPG::GameCore::ServantConfig
	{
	public:
		::System::String* ParentConfigPath; // 0x258
		::Il2CppArray<::System::String*>* InheritSkillList; // 0x260
		::Il2CppArray<::System::String*>* ReplacedSkillList; // 0x268
		::ENEIHJJPNPI* AdditiveDynamicValues; // 0x270
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServantOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServantOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServantOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServantOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTOVERRIDECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
