#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightOverrideBackEndHP; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_GRIDFIGHTOVERRIDEBACKENDHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E946B40)
#define RPG_GAMECORE_GRIDFIGHTOVERRIDEBACKENDHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E946B50)
#define RPG_GAMECORE_GRIDFIGHTOVERRIDEBACKENDHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E946B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOverrideBackEndHP_TypeDefinitionIndex = 20308;

	class GridFightOverrideBackEndHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetBE; // 0x18
		::RPG::GameCore::TargetEvaluator* HPEntity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTOVERRIDEBACKENDHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightOverrideBackEndHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightOverrideBackEndHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTOVERRIDEBACKENDHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightOverrideBackEndHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightOverrideBackEndHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTOVERRIDEBACKENDHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
