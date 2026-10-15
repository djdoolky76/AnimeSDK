#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrepTutorialRemoveEquipTrackParam; }

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALREMOVEEQUIPTRACKPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73B190)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALREMOVEEQUIPTRACKPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73B0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialRemoveEquipTrackParam_TypeDefinitionIndex = 19970;

	class GridFightPrepTutorialRemoveEquipTrackParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RoleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALREMOVEEQUIPTRACKPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPrepTutorialRemoveEquipTrackParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPrepTutorialRemoveEquipTrackParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALREMOVEEQUIPTRACKPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
