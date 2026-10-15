#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDitherGroup; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDITHERGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9ED20)
#define RPG_GAMECORE_SETDITHERGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9ED30)
#define RPG_GAMECORE_SETDITHERGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9ECF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDitherGroup_TypeDefinitionIndex = 22911;

	class SetDitherGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::TargetEvaluator* ShowList; // 0x20
		::RPG::GameCore::TargetEvaluator* HideList; // 0x28
		::System::Int32 Priority; // 0x30
		::System::Single FadeDuration; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDITHERGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDitherGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDitherGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDITHERGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDitherGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDitherGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDITHERGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
