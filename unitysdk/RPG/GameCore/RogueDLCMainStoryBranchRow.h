#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCMainStoryBranchRow; }

#define RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C2E10)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C2CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryBranchRow_TypeDefinitionIndex = 14793;

	class RogueDLCMainStoryBranchRow : public ::System::Object
	{
	public:
		::System::UInt32 MainStoryBranchID; // 0x10
		::System::UInt32 RogueNPCID; // 0x14
		::System::UInt32 AeonID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCMainStoryBranchRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCMainStoryBranchRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
