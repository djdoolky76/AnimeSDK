#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ServantConfig.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServantOverrideConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SERVANTOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F853760)
#define RPG_GAMECORE_SERVANTOVERRIDECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F853880)
#define RPG_GAMECORE_SERVANTOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F855900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantOverrideConfig_TypeDefinitionIndex = 16688;

	class ServantOverrideConfig : public ::RPG::GameCore::ServantConfig
	{
	public:
		::System::String* ParentConfigPath; // 0x270
		::Il2CppArray<::System::String*>* InheritSkillList; // 0x278
		::Il2CppArray<::System::String*>* ReplacedSkillList; // 0x280
		::ENEIHJJPNPI* AdditiveDynamicValues; // 0x288
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
