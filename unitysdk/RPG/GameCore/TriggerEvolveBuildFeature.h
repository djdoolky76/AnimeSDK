#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildFeatureType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerEvolveBuildFeature; }

#define RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC25150)
#define RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC25160)
#define RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC25120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEvolveBuildFeature_TypeDefinitionIndex = 22519;

	class TriggerEvolveBuildFeature : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EvolveBuildFeatureType Feature; // 0x18
		::System::Boolean IsRevert; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEvolveBuildFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEvolveBuildFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEvolveBuildFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEvolveBuildFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREVOLVEBUILDFEATURE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
