#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentStepConfig; }
namespace RPG::GameCore { class HipplenIncidentStoryStepConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D740380)
#define RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D740390)
#define RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D740510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentStoryStepConfig_TypeDefinitionIndex = 16804;

	class HipplenIncidentStoryStepConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 DialogID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::HipplenIncidentStepConfig* Next; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentStoryStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentStoryStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentStoryStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentStoryStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
