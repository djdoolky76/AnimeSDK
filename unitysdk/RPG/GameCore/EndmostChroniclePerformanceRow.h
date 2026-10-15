#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EndmostChroniclePerformanceRow; }

#define RPG_GAMECORE_ENDMOSTCHRONICLEPERFORMANCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D641E80)
#define RPG_GAMECORE_ENDMOSTCHRONICLEPERFORMANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D641CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndmostChroniclePerformanceRow_TypeDefinitionIndex = 14131;

	class EndmostChroniclePerformanceRow : public ::System::Object
	{
	public:
		::System::Int32 Order; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 EndmostChronicleID; // 0x18
		::RPG::GameCore::ELevelPerformanceType Type; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDMOSTCHRONICLEPERFORMANCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndmostChroniclePerformanceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndmostChroniclePerformanceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDMOSTCHRONICLEPERFORMANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
