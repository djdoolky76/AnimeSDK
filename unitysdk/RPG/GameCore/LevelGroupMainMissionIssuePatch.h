#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatch; }

#define RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D783AC0)
#define RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D783920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMainMissionIssuePatch_TypeDefinitionIndex = 17365;

	class LevelGroupMainMissionIssuePatch : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x10
		::System::UInt32 FloorID; // 0x14
		::System::UInt32 GroupID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupMainMissionIssuePatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupMainMissionIssuePatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
