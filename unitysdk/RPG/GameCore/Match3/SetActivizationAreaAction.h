#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class SetActivizationAreaAction; }

#define RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D822B30)
#define RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D822B40)
#define RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D822AE0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetActivizationAreaAction_TypeDefinitionIndex = 24912;

	class SetActivizationAreaAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Boolean Enduring; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetActivizationAreaAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetActivizationAreaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetActivizationAreaAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetActivizationAreaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETACTIVIZATIONAREAACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
