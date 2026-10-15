#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SelectorConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8C940)
#define RPG_GAMECORE_SELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8C950)
#define RPG_GAMECORE_SELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8C910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelectorConfig_TypeDefinitionIndex = 23784;

	class SelectorConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
