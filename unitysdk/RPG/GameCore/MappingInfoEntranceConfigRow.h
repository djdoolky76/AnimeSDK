#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MappingInfoEntranceConfigRow; }

#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D834E40)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8348E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingInfoEntranceConfigRow_TypeDefinitionIndex = 12582;

	class MappingInfoEntranceConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 EntranceID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MappingInfoEntranceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MappingInfoEntranceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
