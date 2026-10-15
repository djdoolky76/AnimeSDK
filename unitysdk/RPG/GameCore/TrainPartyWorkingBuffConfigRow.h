#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyWorkingBuffConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYWORKINGBUFFCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC365B0)
#define RPG_GAMECORE_TRAINPARTYWORKINGBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC36350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyWorkingBuffConfigRow_TypeDefinitionIndex = 15320;

	class TrainPartyWorkingBuffConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Description; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 WorkingBuffID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYWORKINGBUFFCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyWorkingBuffConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyWorkingBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYWORKINGBUFFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
