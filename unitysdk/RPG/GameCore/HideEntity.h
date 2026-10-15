#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideEntity; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73A720)
#define RPG_GAMECORE_HIDEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73A730)
#define RPG_GAMECORE_HIDEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73A6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEntity_TypeDefinitionIndex = 21667;

	class HideEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean IsHide; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
