#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleEventButtonTypeConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTBUTTONTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4580C0)
#define RPG_GAMECORE_BATTLEEVENTBUTTONTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D457EE0)

namespace RPG::GameCore
{
	class BattleEventButtonTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* ButtonPath; // 0x10
		::System::String* CutinPath; // 0x18
		::System::String* SkillButtonEffPath; // 0x20
		::System::String* ButtonReadyPath; // 0x28
		::System::UInt32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTBUTTONTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventButtonTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventButtonTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTBUTTONTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
