#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceBackupConfig; }

#define RPG_GAMECORE_PERFORMANCEBACKUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C92E0)
#define RPG_GAMECORE_PERFORMANCEBACKUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C9050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceBackupConfig_TypeDefinitionIndex = 19034;

	class PerformanceBackupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BackupPerformanceID; // 0x10
		::RPG::GameCore::ELevelPerformanceType BackupPerformanceType; // 0x14
		::Il2CppArray<::System::UInt32>* ExtraActiveGroupList; // 0x18
		::System::Boolean IsOverridePosition; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::MVector3 OverridePosition; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceBackupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceBackupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
