#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReleaseCharacterHUDVisibleControl; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D977C10)
#define RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D977C20)
#define RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D977BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseCharacterHUDVisibleControl_TypeDefinitionIndex = 22819;

	class ReleaseCharacterHUDVisibleControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTERHUDVISIBLECONTROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
