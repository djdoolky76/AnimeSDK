#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTransformDelRoleRuleSet; }

#define RPG_GAMECORE_GRIDFIGHTTRANSFORMDELROLERULESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95C230)
#define RPG_GAMECORE_GRIDFIGHTTRANSFORMDELROLERULESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E95C1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTransformDelRoleRuleSet_TypeDefinitionIndex = 19701;

	class GridFightTransformDelRoleRuleSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRANSFORMDELROLERULESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTransformDelRoleRuleSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTransformDelRoleRuleSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRANSFORMDELROLERULESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
