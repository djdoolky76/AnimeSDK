#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceReplayGenderRow; }

#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D901270)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D900FA0)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9010E0)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D900F30)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D900F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayGenderRow_TypeDefinitionIndex = 14352;

	class PerformanceReplayGenderRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::RPG::GameCore::GenderType Gender; // 0x14
		::System::UInt32 PerformanceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplayGenderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplayGenderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplayGenderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplayGenderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
