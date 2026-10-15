#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterEnableEmptyModel; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D542770)
#define RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5427B0)
#define RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D542710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEnableEmptyModel_TypeDefinitionIndex = 23204;

	class CharacterEnableEmptyModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterEnableEmptyModel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterEnableEmptyModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterEnableEmptyModel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterEnableEmptyModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
