#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RemoveStageAbilityByName; }

#define RPG_GAMECORE_REMOVESTAGEABILITYBYNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D986980)
#define RPG_GAMECORE_REMOVESTAGEABILITYBYNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D986990)
#define RPG_GAMECORE_REMOVESTAGEABILITYBYNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D986950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveStageAbilityByName_TypeDefinitionIndex = 22972;

	class RemoveStageAbilityByName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StageAbilityName; // 0x18
		::System::Boolean ReadFromTable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTAGEABILITYBYNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTAGEABILITYBYNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTAGEABILITYBYNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
