#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FarmElementConfigRow; }

#define RPG_GAMECORE_FARMELEMENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D698170)
#define RPG_GAMECORE_FARMELEMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D697820)

namespace RPG::GameCore
{
	class FarmElementConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::Il2CppArray<::System::UInt32>* DropList; // 0x18
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x20
		::System::UInt32 StaminaCost; // 0x28
		::System::Boolean AutoObtainDamageType; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 MappingInfoID; // 0x30
		::System::UInt32 MaxChallengeCnt; // 0x34
		::System::UInt32 WorldLevel; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 StageID; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID BuffDesc; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FarmElementConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FarmElementConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
