#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyGridType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyGridConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYGRIDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC03E10)
#define RPG_GAMECORE_TRAINPARTYGRIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC03C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyGridConfigRow_TypeDefinitionIndex = 15310;

	class TrainPartyGridConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::String* GridIconPath; // 0x18
		::System::UInt32 GridID; // 0x20
		::RPG::GameCore::TrainPartyGridType GridType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyGridConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyGridConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
