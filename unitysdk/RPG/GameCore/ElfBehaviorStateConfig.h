#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfBehaviorState; }
namespace RPG::GameCore { class ElfBehaviorStateConfig; }

#define RPG_GAMECORE_ELFBEHAVIORSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D633C10)
#define RPG_GAMECORE_ELFBEHAVIORSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D633B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfBehaviorStateConfig_TypeDefinitionIndex = 18500;

	class ElfBehaviorStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfBehaviorState* BehaviorState; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfBehaviorStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfBehaviorStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
