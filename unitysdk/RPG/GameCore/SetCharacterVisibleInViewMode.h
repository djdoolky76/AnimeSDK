#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterVisibleInViewMode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6EB90)
#define RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6EBD0)
#define RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6EB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterVisibleInViewMode_TypeDefinitionIndex = 23189;

	class SetCharacterVisibleInViewMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsVisibleInViewMode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterVisibleInViewMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterVisibleInViewMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterVisibleInViewMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterVisibleInViewMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
