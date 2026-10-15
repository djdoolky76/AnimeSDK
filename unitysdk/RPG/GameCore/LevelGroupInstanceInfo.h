#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDataExportTarget.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelDimensionFilter; }
namespace RPG::GameCore { class LevelGroupInstanceInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELGROUPINSTANCEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B1010)
#define RPG_GAMECORE_LEVELGROUPINSTANCEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B1020)
#define RPG_GAMECORE_LEVELGROUPINSTANCEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B0FC0)

namespace RPG::GameCore
{
	class LevelGroupInstanceInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::String* GroupGUID; // 0x38
		::System::String* GroupPath; // 0x40
		::RPG::GameCore::LevelDataExportTarget ExportTarget; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::GameCore::LevelDimensionFilter* DimensionFilter; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINSTANCEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupInstanceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupInstanceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINSTANCEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupInstanceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupInstanceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINSTANCEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
