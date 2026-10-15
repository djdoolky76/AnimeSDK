#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AITransitionTableRow; }
namespace System { class String; }

#define RPG_GAMECORE_AITRANSITIONTABLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33B790)
#define RPG_GAMECORE_AITRANSITIONTABLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D33B640)

namespace RPG::GameCore
{
	class AITransitionTableRow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FromDecision; // 0x10
		::Il2CppArray<::System::String*>* AvailableDecisions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRANSITIONTABLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AITransitionTableRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AITransitionTableRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRANSITIONTABLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
