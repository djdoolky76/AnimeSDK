#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleActionEventRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEACTIONEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D413480)
#define RPG_GAMECORE_BATTLEACTIONEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D413040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleActionEventRow_TypeDefinitionIndex = 12830;

	class BattleActionEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* AbilityName; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::Client::TextID BriefDescription; // 0x28
		::RPG::Client::TextID FullDescription; // 0x38
		::System::Boolean ActiveDefault; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 InitialInterval; // 0x4C
		::RPG::Client::TextID EventName; // 0x50
		::System::UInt32 Interval; // 0x60
		::System::UInt32 EventID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACTIONEVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleActionEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleActionEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACTIONEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
