#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupInitMemberEntityDynamicValues; }
namespace RPG::GameCore { class SubLevelGraphDynamicOverrideSet; }

#define RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74B3A0)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D74B3B0)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D74B370)

namespace RPG::GameCore
{
	class GroupInitMemberEntityDynamicValues : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EntityInstanceID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::SubLevelGraphDynamicOverrideSet* InitDynamicValueSet; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupInitMemberEntityDynamicValues* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupInitMemberEntityDynamicValues*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupInitMemberEntityDynamicValues* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupInitMemberEntityDynamicValues*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYDYNAMICVALUES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
