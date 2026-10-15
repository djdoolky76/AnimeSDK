#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentOptionStepConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76D6C0)
#define RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76D6D0)
#define RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76D670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentOptionStepConfig_TypeDefinitionIndex = 16806;

	class HipplenIncidentOptionStepConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 DialogID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::HipplenIncidentOptionConfig*>* Options; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentOptionStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentOptionStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentOptionStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentOptionStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
