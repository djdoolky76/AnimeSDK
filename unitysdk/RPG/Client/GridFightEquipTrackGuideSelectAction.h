#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPreparationPendingAction.h"
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D190380)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION_GET_REFDATA_OFFSET UNITYSDK_OFFSET(0x1D190360)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION_SET_REFDATA_OFFSET UNITYSDK_OFFSET(0x1D190370)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0x1D190550)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0x1D190390)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION___ONSTART_B__6_0_OFFSET UNITYSDK_OFFSET(0x1D1905B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackGuideSelectAction_TypeDefinitionIndex = 67107;

	class GridFightEquipTrackGuideSelectAction : public ::RPG::Client::GridFightPreparationPendingAction
	{
	public:
		::RPG::Client::LuaUIController* _HandleUI; // 0x20
		::System::Object* _RefData_k__BackingField; // 0x28
		// static const ::System::String* _SCRIPT_PATH; // 0x0
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION_CTOR_OFFSET))(this, a1);
		}

		::System::Object* get_RefData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION_GET_REFDATA_OFFSET))(this);
		}

		::System::Void set_RefData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION_SET_REFDATA_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION__ONSTART_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION__ONFINISH_OFFSET))(this);
		}

		::System::Void __OnStart_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKGUIDESELECTACTION___ONSTART_B__6_0_OFFSET))(this);
		}

	};
}
