#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceSubMissionLinkRow; }

#define RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB20690)
#define RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1EB20310)
#define RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB204B0)
#define RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1EB20290)
#define RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_RESET_OFFSET UNITYSDK_OFFSET(0x1EB202F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSubMissionLinkRow_TypeDefinitionIndex = 14506;

	class PerformanceSubMissionLinkRow : public ::System::Object
	{
	public:
		::System::UInt32 SubMissionID; // 0x10
		::System::Boolean HasCg; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x18
		::System::UInt32 PerformanceID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSubMissionLinkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSubMissionLinkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSubMissionLinkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSubMissionLinkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
