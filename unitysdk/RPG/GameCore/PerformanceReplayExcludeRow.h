#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceReplayExcludeRow; }

#define RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D900F20)
#define RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D900D00)
#define RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D900DF0)
#define RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D900C90)
#define RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D900CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayExcludeRow_TypeDefinitionIndex = 14346;

	class PerformanceReplayExcludeRow : public ::System::Object
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplayExcludeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplayExcludeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplayExcludeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplayExcludeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
