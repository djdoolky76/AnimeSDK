#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideActivityQuestRow; }
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDEACTIVITYQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D1420)
#define RPG_GAMECORE_AETHERDIVIDEACTIVITYQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D1240)

namespace RPG::GameCore
{
	class AetherDivideActivityQuestRow : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 TypeGroupID; // 0x24
		::System::UInt32 ActivityModuleID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEACTIVITYQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideActivityQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideActivityQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEACTIVITYQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
