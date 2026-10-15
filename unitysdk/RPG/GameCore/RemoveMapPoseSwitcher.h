#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveMapPoseSwitcher; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEMAPPOSESWITCHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D985A50)
#define RPG_GAMECORE_REMOVEMAPPOSESWITCHER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D985A60)
#define RPG_GAMECORE_REMOVEMAPPOSESWITCHER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D985A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveMapPoseSwitcher_TypeDefinitionIndex = 20942;

	class RemoveMapPoseSwitcher : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAPPOSESWITCHER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveMapPoseSwitcher* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveMapPoseSwitcher*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAPPOSESWITCHER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveMapPoseSwitcher* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveMapPoseSwitcher*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAPPOSESWITCHER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
