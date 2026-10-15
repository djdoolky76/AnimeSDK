#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceReplayOverrideRow; }

#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D49B0)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D8D4660)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8D47F0)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D8D45F0)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D8D4650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayOverrideRow_TypeDefinitionIndex = 14340;

	class PerformanceReplayOverrideRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x20
		::System::UInt32 PerformanceID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplayOverrideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplayOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceReplayOverrideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceReplayOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
