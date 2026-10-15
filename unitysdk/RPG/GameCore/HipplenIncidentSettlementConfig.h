#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentSettlementConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76DB10)
#define RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76DCE0)
#define RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76CB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentSettlementConfig_TypeDefinitionIndex = 16801;

	class HipplenIncidentSettlementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ImagePath; // 0x18
		::System::UInt32 DialogID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentSettlementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentSettlementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentSettlementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentSettlementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
