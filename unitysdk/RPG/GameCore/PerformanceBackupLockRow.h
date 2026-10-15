#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceBackupLockRow; }

#define RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F7060)
#define RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D8F6D20)
#define RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F6EA0)
#define RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D8F6CB0)
#define RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D8F6D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceBackupLockRow_TypeDefinitionIndex = 14355;

	class PerformanceBackupLockRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ELevelPerformanceType BackupPerformanceType; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x14
		::System::UInt32 BackupPerformanceID; // 0x18
		::System::UInt32 PerformanceID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceBackupLockRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceBackupLockRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceBackupLockRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceBackupLockRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
