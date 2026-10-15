#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightFunctionNodeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrepTutorialNodeVisibleParam; }

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALNODEVISIBLEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73A520)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALNODEVISIBLEPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73A3C0)

namespace RPG::GameCore
{
	class GridFightPrepTutorialNodeVisibleParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::GridFightFunctionNodeType NodeType; // 0x10
		::System::Boolean Visible; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALNODEVISIBLEPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPrepTutorialNodeVisibleParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPrepTutorialNodeVisibleParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALNODEVISIBLEPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
