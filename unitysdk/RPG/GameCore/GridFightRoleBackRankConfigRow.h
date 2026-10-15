#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightRoleBackRankConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEBACKRANKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73C9A0)
#define RPG_GAMECORE_GRIDFIGHTROLEBACKRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D73C4A0)

namespace RPG::GameCore
{
	class GridFightRoleBackRankConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyList; // 0x10
		::System::String* CharacterAbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* Star2ParamList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* Star3ParamList; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* Star1ParamList; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* Star4ParamList; // 0x38
		::System::String* IconPath; // 0x40
		::System::UInt32 RankID; // 0x48
		::RPG::GameCore::StringHash Trigger; // 0x4C
		::System::UInt32 Rank; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x58
		::RPG::Client::TextID Desc; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEBACKRANKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleBackRankConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleBackRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEBACKRANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
