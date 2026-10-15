#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnQuestGroupRow; }

#define RPG_GAMECORE_PLAYERRETURNQUESTGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93B230)
#define RPG_GAMECORE_PLAYERRETURNQUESTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93B110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnQuestGroupRow_TypeDefinitionIndex = 14529;

	class PlayerReturnQuestGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockTime; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerReturnQuestGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerReturnQuestGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
