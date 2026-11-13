#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeStageIntroRow; }

#define RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C309980)
#define RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C3097C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCollegeStageIntroRow_TypeDefinitionIndex = 12910;

	class BattleCollegeStageIntroRow : public ::System::Object
	{
	public:
		::System::UInt32 StageIntroDescID; // 0x10
		::System::UInt32 Index; // 0x14
		::RPG::Client::TextID Introduction; // 0x18
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
