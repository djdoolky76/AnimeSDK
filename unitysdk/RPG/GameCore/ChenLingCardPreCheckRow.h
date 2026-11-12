#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardPreCheckType.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/RPG/GameCore/ChenLingGridStatus.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingCardPreCheckRow; }

#define RPG_GAMECORE_CHENLINGCARDPRECHECKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79AE90)
#define RPG_GAMECORE_CHENLINGCARDPRECHECKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E79ABF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingCardPreCheckRow_TypeDefinitionIndex = 11061;

	class ChenLingCardPreCheckRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Toast; // 0x10
		::RPG::GameCore::ChenLingCardType UseCardType; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::GameCore::ChenLingCardPreCheckType ConditionType; // 0x28
		::System::UInt32 UseCardID; // 0x2C
		::RPG::GameCore::ChenLingGridStatus TargetGridType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCARDPRECHECKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingCardPreCheckRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingCardPreCheckRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCARDPRECHECKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
