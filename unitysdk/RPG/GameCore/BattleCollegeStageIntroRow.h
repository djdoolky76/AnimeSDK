#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeStageIntroRow; }

#define RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D426D30)
#define RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D426B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCollegeStageIntroRow_TypeDefinitionIndex = 12838;

	class BattleCollegeStageIntroRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Introduction; // 0x10
		::System::UInt32 Index; // 0x20
		::System::UInt32 StageIntroDescID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleCollegeStageIntroRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleCollegeStageIntroRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
