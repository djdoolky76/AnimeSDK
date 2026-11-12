#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceReplayOverrideRow; }

#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB1B790)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1EB1B440)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB1B5D0)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1EB1B3D0)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1EB1B430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayOverrideRow_TypeDefinitionIndex = 14497;

	class PerformanceReplayOverrideRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::RPG::Client::TextID Desc; // 0x18
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
