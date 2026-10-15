#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MappingInfoConnectionRow; }

#define RPG_GAMECORE_MAPPINGINFOCONNECTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8340A0)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D833A00)

namespace RPG::GameCore
{
	class MappingInfoConnectionRow : public ::System::Object
	{
	public:
		::System::UInt32 SourceMappingInfoID; // 0x10
		::System::UInt32 TargetEntranceID; // 0x14
		::System::UInt32 SourceEntranceID; // 0x18
		::System::UInt32 TargetMappingInfoID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MappingInfoConnectionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MappingInfoConnectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
