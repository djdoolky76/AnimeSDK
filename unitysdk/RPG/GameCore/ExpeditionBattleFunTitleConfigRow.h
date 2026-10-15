#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleConditionType.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleTitelType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleFunTitleConfigRow; }

#define RPG_GAMECORE_EXPEDITIONBATTLEFUNTITLECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D661760)
#define RPG_GAMECORE_EXPEDITIONBATTLEFUNTITLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D661480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleFunTitleConfigRow_TypeDefinitionIndex = 11452;

	class ExpeditionBattleFunTitleConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID FunTitleDesc; // 0x10
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::ExpeditionBattleConditionType ConditionParamType; // 0x24
		::RPG::Client::TextID FunTitleName; // 0x28
		::RPG::GameCore::ExpeditionBattleTitelType Type; // 0x38
		::System::UInt32 ConditionParam; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFUNTITLECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFUNTITLECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
