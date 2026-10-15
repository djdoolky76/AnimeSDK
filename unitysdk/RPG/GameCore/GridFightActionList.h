#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionList; }

#define RPG_GAMECORE_GRIDFIGHTACTIONLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F7270)
#define RPG_GAMECORE_GRIDFIGHTACTIONLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F7230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionList_TypeDefinitionIndex = 19340;

	class GridFightActionList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
