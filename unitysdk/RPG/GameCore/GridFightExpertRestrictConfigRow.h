#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightExpertRestrictConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTEXPERTRESTRICTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7309C0)
#define RPG_GAMECORE_GRIDFIGHTEXPERTRESTRICTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7307D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightExpertRestrictConfigRow_TypeDefinitionIndex = 13471;

	class GridFightExpertRestrictConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 OCChapter; // 0x10
		::System::UInt32 Chapter; // 0x14
		::System::UInt32 Section; // 0x18
		::System::UInt32 Cost; // 0x1C
		::System::UInt32 OCSection; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXPERTRESTRICTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightExpertRestrictConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightExpertRestrictConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXPERTRESTRICTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
