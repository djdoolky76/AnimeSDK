#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnQuestRow; }

#define RPG_GAMECORE_PLAYERRETURNQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90D8D0)
#define RPG_GAMECORE_PLAYERRETURNQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D90D170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnQuestRow_TypeDefinitionIndex = 14527;

	class PlayerReturnQuestRow : public ::System::Object
	{
	public:
		::System::UInt32 LinearQuestID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 GroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerReturnQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerReturnQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
